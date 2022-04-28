// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#include "NeuronLiveLinkRemapAsset.h"
#include "NeuronLiveLinkLog.h"
#include "MocapApi.h"
#include "MocapStructs.h"
#include "LiveLinkTypes.h"
#include "BonePose.h"
#include "Engine/Blueprint.h"
#include "Runtime/Launch/Resources/Version.h"

UNeuronLiveLinkRemapAsset::UNeuronLiveLinkRemapAsset (const FObjectInitializer& ObjectInitializer)
	: Super (ObjectInitializer)
{
#if WITH_EDITOR
	UBlueprint* Blueprint = Cast<UBlueprint> (GetClass ()->ClassGeneratedBy);
	if (Blueprint)
	{
		OnBlueprintCompiledDelegate = Blueprint->OnCompiled( ).AddUObject( this, &UNeuronLiveLinkRemapAsset::OnBlueprintClassCompiled );
	}
#endif
	RightFootGroundingPrevFrame = false;
	LeftFootGroundingPrevFrame = false;

	HipPosCacheCS.Add({ FVector::ZeroVector, 0 });
	HipPosCacheCS.Add({ FVector::ZeroVector, 0 });
}

void UNeuronLiveLinkRemapAsset::BeginDestroy ()
{

	if (OnBlueprintCompiledDelegate.IsValid ())
	{
#if WITH_EDITOR
		UBlueprint* Blueprint = Cast<UBlueprint> (GetClass ()->ClassGeneratedBy);
		check (Blueprint);
		Blueprint->OnCompiled ().Remove (OnBlueprintCompiledDelegate);
#endif
		OnBlueprintCompiledDelegate.Reset ();
	}

	Super::BeginDestroy ();
}

void UNeuronLiveLinkRemapAsset::OnBlueprintClassCompiled (UBlueprint* TargetBlueprint)
{
	BoneNameMap.Reset ();
	CurveNameMap.Reset ();
}

void MakeCurveMapFromFrame (const FCompactPose& InPose, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, const TArray<FName, TMemStackAllocator<>>& TransformedCurveNames, TMap<FName, float>& OutCurveMap)
{
	OutCurveMap.Reset ();
	OutCurveMap.Reserve( InSkeletonData->PropertyNames.Num( ) );

	if (InSkeletonData->PropertyNames.Num( ) != InFrameData->PropertyValues.Num( ))
	{
		for (int32 CurveIdx = 0; CurveIdx < InSkeletonData->PropertyNames.Num( ); ++CurveIdx)
		{
			OutCurveMap.Add( TransformedCurveNames[CurveIdx] ) = InFrameData->PropertyValues[CurveIdx];
		}
	}
}

//void UNeuronLiveLinkRemapAsset::BuildPoseForSubject (float DeltaTime, const FLiveLinkSubjectFrame& InFrame, FCompactPose& OutPose, FBlendedCurve& OutCurve)
void UNeuronLiveLinkRemapAsset::BuildPoseFromAnimationData( float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose )
{
	float Out_WithDisplacement = 0.0f;
	const FName Property_WithDisplacement(TEXT("WithDisplacement"));
	const FName Property_Hips_Grounding(TEXT("Hips_Grounding"));
	const FName Property_RightFoot_Grounding(TEXT("RightFoot_Grounding"));
	const FName Property_LeftFoot_Grounding(TEXT("LeftFoot_Grounding"));
	const FName Property_Head_Grounding(TEXT("Head_Grounding"));
	const FName Property_RightHand_Grounding(TEXT("RightHand_Grounding"));
	const FName Property_LeftHand_Grounding(TEXT("LeftHand_Grounding"));
	bool HipsGrounding = false;
	bool RightFootGrounding = false;
	bool LeftFootGrounding = false;
	bool HeadGrounding = false;
	bool RightHandGrounding = false;
	bool LeftHandGrounding = false;

	float PropVal = 0;
	
	if (!InSkeletonData->FindPropertyValue( *InFrameData, Property_WithDisplacement, Out_WithDisplacement ))
	{
		AN_LOG( Error, TEXT( "Cannot find [WithDisplacement] property in Axis Studio BVH stream data." ) );
		return; // lihongce fix bug
	}

	if (InSkeletonData->FindPropertyValue(*InFrameData, Property_Hips_Grounding, PropVal))
	{
		HipsGrounding = PropVal > 0.5f;
	}
	
	if (InSkeletonData->FindPropertyValue(*InFrameData, Property_RightFoot_Grounding, PropVal))
	{
		RightFootGrounding = PropVal > 0.5f;
	}
	if (InSkeletonData->FindPropertyValue(*InFrameData, Property_LeftFoot_Grounding, PropVal))
	{
		LeftFootGrounding = PropVal > 0.5f;
	}
	if (InSkeletonData->FindPropertyValue(*InFrameData, Property_Head_Grounding, PropVal))
	{
		HeadGrounding = PropVal > 0.5f;
	}
	if (InSkeletonData->FindPropertyValue(*InFrameData, Property_RightHand_Grounding, PropVal))
	{
		RightHandGrounding = PropVal > 0.5f;
	}
	if (InSkeletonData->FindPropertyValue(*InFrameData, Property_LeftHand_Grounding, PropVal))
	{
		LeftHandGrounding = PropVal > 0.5f;
	}

	//AN_LOG(Log, TEXT("Grounding L %d R %d"), LeftFootGrounding ? 1 : 0, RightFootGrounding ? 1 : 0);

	bool bWithDisplacement = bUseDisplacementData && (Out_WithDisplacement > 0.5f);

	// SourceBoneNames是BoneLists里预定义的BoneName
	const TArray<FName>& SourceBoneNames = InSkeletonData->GetBoneNames ();
	const TArray<int32>& SourceParentBoneNames = InSkeletonData->GetBoneParents( );

	TArray<FName, TMemStackAllocator<>> TransformedBoneNames;
	TransformedBoneNames.Reserve (SourceBoneNames.Num ());

	for (const FName& SrcBoneName : SourceBoneNames)
	{
		FName* TargetBoneName = BoneNameMap.Find (SrcBoneName);
		if (TargetBoneName == nullptr)
		{
			// NewName是用户骨骼模型里的关节名
			FName NewName = GetRemappedBoneName (SrcBoneName);
			TransformedBoneNames.Add (NewName);
			BoneNameMap.Add (SrcBoneName, NewName);
		}
		else
		{
			TransformedBoneNames.Add (*TargetBoneName);
		}
	}

	/* 
	 * The OutPose has already ResetToRefPose outside and if InputPose pin exists in LiveLinkPose node,
	 * the OutPose can be used as RefPose, so we shouldn't call ResetToRefPose() manually here.
	 */
	//OutPose.ResetToRefPose ();	

	const FBoneContainer& BoneContainerRef = OutPose.GetBoneContainer ();

    FName HipsNameInTargetSkeleton = NAME_None;
    int32 HipsMeshIndexInTargetSkeleton = INDEX_NONE;
    int32 RootBone = InSkeletonData->FindRootBone();
    if (RootBone != -1)
    {
        HipsNameInTargetSkeleton = *BoneNameMap.Find(SourceBoneNames[RootBone]);
        HipsMeshIndexInTargetSkeleton = BoneContainerRef.GetPoseBoneIndexForBoneName(HipsNameInTargetSkeleton);
    }
	if (HipsMeshIndexInTargetSkeleton == INDEX_NONE)
	{
		// It's impossible
		return;
	}

	if (!bHaveInit)
	{
		TEnumAsByte<EAxisOption::Type> SkeletonForward;
		GetSkeletonForwardVector( SkeletonForward );
		FQuat GlobalRotDelta = FQuat::Identity;
		switch (SkeletonForward.GetValue( ))
		{
		case EAxisOption::X:
			GlobalRotDelta = FQuat( FVector::UpVector, FMath::DegreesToRadians( 90 ) );
			break;

		case EAxisOption::Y_Neg:
			GlobalRotDelta = FQuat( FVector::UpVector, FMath::DegreesToRadians( 180 ) );
			break;

		case EAxisOption::X_Neg:
			GlobalRotDelta = FQuat( FVector::UpVector, FMath::DegreesToRadians( -90 ) );
			break;

			// If skeleton initially face to other direction except the above, we don't consider the situation
		default:
			break;
		}
		FTransform GlobalDeltaTransform( GlobalRotDelta, FVector::ZeroVector );
		
		int32 MeshIndex = BoneContainerRef.GetParentBoneIndex (HipsMeshIndexInTargetSkeleton);
		/*FCompactPoseBoneIndex CompactIndex = BoneContainerRef.MakeCompactPoseIndex( FMeshPoseBoneIndex( MeshIndex ) );
		while (CompactIndex != INDEX_NONE)
		{
			HipsParentsTransform *= OutPose[CompactIndex];
			CompactIndex = BoneContainerRef.GetParentBoneIndex (CompactIndex);
		}*/
		while (MeshIndex != INDEX_NONE)
		{
			HipsParentsTransform *= BoneContainerRef.GetRefPoseArray( )[MeshIndex];
			MeshIndex = BoneContainerRef.GetParentBoneIndex( MeshIndex );
		}
		HipsParentsTransform *= GlobalDeltaTransform;

		// MeshBone Count
		int32 MeshBoneCount = BoneContainerRef.GetNumBones( );

        WorldRotations.Init (FQuat::Identity, MeshBoneCount);
		WorldPositions.Init (FVector::ZeroVector, MeshBoneCount);
		const TArray<FTransform>& MeshBoneRefPose = BoneContainerRef.GetRefPoseArray( );
		for (int32 Index = 0; Index < MeshBoneCount; Index++)
		{
			FQuat Rotation = MeshBoneRefPose[Index].GetRotation( );
			FVector Position = MeshBoneRefPose[Index].GetLocation( );

			int32 ParentIndex = BoneContainerRef.GetParentBoneIndex( Index );
			if ((ParentIndex != INDEX_NONE) && (ParentIndex < MeshBoneCount))
			{
				Rotation = WorldRotations[ParentIndex] * Rotation;
				Position = WorldRotations[ParentIndex] * Position + WorldPositions[ParentIndex];
			}
			else
			{
				FTransform T0 = FTransform( Rotation, Position ) * GlobalDeltaTransform;
				Rotation = T0.GetRotation( );
				Position = T0.GetLocation( );
			}

			WorldRotations[Index] = Rotation;
			WorldPositions[Index] = Position;
		}

		// Compact Pose Bone Count
		// The BoneCount in LiveLink preview panel is greater than or equal at runtime.
		int32 BoneCount = OutPose.GetNumBones ();

		TArray<FQuat> CompactRefPoseRotation;
		TArray<FVector> CompactRefPoseLocation;

		CompactRefPoseRotation.Init( FQuat::Identity, BoneCount );
		CompactRefPoseLocation.Init( FVector::ZeroVector, BoneCount );

		for (int32 Index = 0; Index < BoneCount; ++Index)
		{
			FCompactPoseBoneIndex CPIndex( Index );

			FQuat Rotation = OutPose[CPIndex].GetRotation( );
			FVector Position = OutPose[CPIndex].GetLocation( );

			FCompactPoseBoneIndex CPParentBoneIndex = BoneContainerRef.GetParentBoneIndex( CPIndex );
			if ((CPParentBoneIndex != INDEX_NONE) && (CPParentBoneIndex < BoneCount))
			{
				int32 ParentMeshIndex = BoneContainerRef.MakeMeshPoseIndex( CPParentBoneIndex ).GetInt( );
				Rotation = CompactRefPoseRotation[CPParentBoneIndex.GetInt( )] * Rotation;
				Position = CompactRefPoseRotation[CPParentBoneIndex.GetInt( )] * Position + CompactRefPoseLocation[CPParentBoneIndex.GetInt( )];
			}
			else
			{
				FTransform T0 = FTransform( Rotation, Position ) * GlobalDeltaTransform;
				Rotation = T0.GetRotation( );
				Position = T0.GetLocation( );
			}

            CompactRefPoseRotation[Index] = Rotation;
			CompactRefPoseLocation[Index] = Position;
            
            int LocalMeshIndex = BoneContainerRef.MakeMeshPoseIndex(CPIndex).GetInt();
			WorldRotations[LocalMeshIndex] = CompactRefPoseRotation[Index];
			WorldPositions[LocalMeshIndex] = CompactRefPoseLocation[Index];
		}

		bHaveInit = true;
	}

	if (bWithDisplacement)
	{
		for (int32 i = 0; i < TransformedBoneNames.Num( ); ++i)
		{
			FName BoneName = TransformedBoneNames[i];
			FName LogicParentBoneName = NAME_None;

			int32 SourceParentIndex = SourceParentBoneNames[i];
			if (SourceParentIndex != INDEX_NONE)
			{
				LogicParentBoneName = TransformedBoneNames[SourceParentIndex];
			}
			else
			{
				//LogicParentBoneName = NAME_None;
			}

			if (InFrameData->Transforms.IsValidIndex( i ))
			{
				FTransform BoneTransform = InFrameData->Transforms[i];

				int32 MeshBoneIndex = BoneContainerRef.GetPoseBoneIndexForBoneName( BoneName );
				FCompactPoseBoneIndex CPBoneIndex = BoneContainerRef.MakeCompactPoseIndex( FMeshPoseBoneIndex( MeshBoneIndex ) );
				if (CPBoneIndex != INDEX_NONE)
				{
					int32 RealParentMeshIndex = BoneContainerRef.GetParentBoneIndex( MeshBoneIndex );
					int32 LogicParentMeshIndex = BoneContainerRef.GetPoseBoneIndexForBoneName( LogicParentBoneName );

					FQuat RotationInCS = BoneTransform.GetRotation( ) * WorldRotations[MeshBoneIndex];
					FVector Input_Position = BoneTransform.GetLocation( );

					if (BoneName == HipsNameInTargetSkeleton)
					{
						FTransform HipsTransform_InCS( RotationInCS, Input_Position );
						OutPose[CPBoneIndex] = HipsTransform_InCS * HipsParentsTransform.Inverse( );
						continue;
					}

					if (RealParentMeshIndex != INDEX_NONE)
					{
						if (LogicParentMeshIndex != INDEX_NONE)
						{
							// 设想T-Pose每个父关节下需要再挂载一个ParentWRot.Inverse()坐标系，子节点的Input_Position是在这个虚拟的坐标系下的值
							FVector TargetPositionInCS = Input_Position + WorldPositions[LogicParentMeshIndex];
							FVector TargetPositionInLogicParent = WorldRotations[LogicParentMeshIndex].Inverse( ) * (TargetPositionInCS - WorldPositions[LogicParentMeshIndex]);
							FQuat TargetRotationInLogicParent = WorldRotations[LogicParentMeshIndex].Inverse( ) * RotationInCS;

							FVector TargetPositionInRealParent = TargetPositionInLogicParent;
							FQuat TargetRotationInRealParent = TargetRotationInLogicParent;

							if (LogicParentMeshIndex != RealParentMeshIndex)
							{
								FVector RealParentPositionInLogicParent = WorldRotations[LogicParentMeshIndex].UnrotateVector( WorldPositions[RealParentMeshIndex] - WorldPositions[LogicParentMeshIndex] );
								FQuat RealParentRotationInLogicParent = WorldRotations[LogicParentMeshIndex].Inverse( ) * WorldRotations[RealParentMeshIndex];

								TargetPositionInRealParent = RealParentRotationInLogicParent.UnrotateVector( TargetPositionInLogicParent - RealParentPositionInLogicParent );
								TargetRotationInRealParent = RealParentRotationInLogicParent.Inverse( ) * TargetRotationInLogicParent;
							}

							OutPose[CPBoneIndex].SetRotation( TargetRotationInRealParent );
							OutPose[CPBoneIndex].SetLocation( TargetPositionInRealParent );
						}
						else
						{
							FVector TargetPositionInCS = Input_Position + WorldPositions[RealParentMeshIndex];
							FVector TargetPositionInRealParent = WorldRotations[RealParentMeshIndex].Inverse( ) * (TargetPositionInCS - WorldPositions[RealParentMeshIndex]);
							FQuat TargetRotationInRealParent = WorldRotations[RealParentMeshIndex].Inverse( ) * RotationInCS;

							OutPose[CPBoneIndex].SetRotation( TargetRotationInRealParent );
							OutPose[CPBoneIndex].SetLocation( TargetPositionInRealParent );
						}
					}
				}
			}
		}
	}
	else
	{
		for (int32 i = 0; i < TransformedBoneNames.Num( ); ++i)
		{
			FName BoneName = TransformedBoneNames[i];
			FName LogicParentBoneName = NAME_None;

			int32 SourceParentIndex = SourceParentBoneNames[i];
			if (SourceParentIndex != INDEX_NONE)
			{
				LogicParentBoneName = TransformedBoneNames[SourceParentIndex];
			}
			else
			{
				//LogicParentBoneName = NAME_None;
			}

			if (InFrameData->Transforms.IsValidIndex( i ))
			{
				FTransform BoneTransform = InFrameData->Transforms[i];

				int32 MeshBoneIndex = BoneContainerRef.GetPoseBoneIndexForBoneName( BoneName );
				FCompactPoseBoneIndex CPBoneIndex = BoneContainerRef.MakeCompactPoseIndex( FMeshPoseBoneIndex( MeshBoneIndex ) );
				if (CPBoneIndex != INDEX_NONE)
				{
					int32 RealParentMeshIndex = BoneContainerRef.GetParentBoneIndex( MeshBoneIndex );
					int32 LogicParentMeshIndex = BoneContainerRef.GetPoseBoneIndexForBoneName( LogicParentBoneName );

					FQuat RotationInCS = BoneTransform.GetRotation( ) * WorldRotations[MeshBoneIndex];

					if (BoneName == HipsNameInTargetSkeleton)
					{
						FVector Dest_HipsPosition_InCS = BoneTransform.GetLocation( );
						FTransform Dest_HipsTransform_InCS( RotationInCS, Dest_HipsPosition_InCS );
						FTransform Dest = Dest_HipsTransform_InCS * HipsParentsTransform.Inverse();
						//Dest.SetTranslation(Dest.GetTranslation() + FVector(0, 0, -30));
						OutPose[CPBoneIndex] = Dest;// Dest_HipsTransform_InCS* HipsParentsTransform.Inverse();
						continue;
					}

					if (RealParentMeshIndex != INDEX_NONE)
					{
						/*if (LogicParentMeshIndex == INDEX_NONE)
						{
							TArray<int32> LogicBoneStack;
						}*/
						if (LogicParentMeshIndex != INDEX_NONE)
						{
							FQuat TargetRotationInLogicParent = WorldRotations[LogicParentMeshIndex].Inverse( ) * RotationInCS;
							FQuat TargetRotationInRealParent = TargetRotationInLogicParent;

							if (RealParentMeshIndex != LogicParentMeshIndex)
							{
								FQuat RealParentRotationInLogicParent = WorldRotations[LogicParentMeshIndex].Inverse( ) * WorldRotations[RealParentMeshIndex];
								TargetRotationInRealParent = RealParentRotationInLogicParent.Inverse( ) * TargetRotationInLogicParent;
							}

							OutPose[CPBoneIndex].SetRotation( TargetRotationInRealParent );
						}
						else
						{
							FQuat TargetRotationInRealParent = WorldRotations[RealParentMeshIndex].Inverse( ) * RotationInCS;
							OutPose[CPBoneIndex].SetRotation( TargetRotationInRealParent );
						}
					}
				}
			}
		}
	}

	int RightFootBoneIndex = MocapApi::JointTag_RightFoot;
	int LeftFootBoneIndex = MocapApi::JointTag_LeftFoot;
	FName RightFootBoneName = TransformedBoneNames[RightFootBoneIndex];
	FName LeftFootBoneName = TransformedBoneNames[LeftFootBoneIndex];
	int32 RightFootMeshIndex = OutPose.GetBoneContainer().GetPoseBoneIndexForBoneName(RightFootBoneName);
	int32 LeftFootMeshIndex = OutPose.GetBoneContainer().GetPoseBoneIndexForBoneName(LeftFootBoneName);
	if (RightFootMeshIndex != INDEX_NONE || LeftFootMeshIndex != INDEX_NONE)
	{
		FCompactPoseBoneIndex CPRightFootIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(RightFootMeshIndex));
		FCompactPoseBoneIndex CPLeftFootIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(LeftFootMeshIndex));
		FCompactPoseBoneIndex CPHipIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(MocapApi::JointTag_Hips));
		//if (CPRightFootIndex != INDEX_NONE)
		{
			FCSPose<FCompactPose> CSPose;
			CSPose.InitPose(OutPose);
			if (RightFootGrounding && !RightFootGroundingPrevFrame)
			{
				FTransform T = CSPose.GetComponentSpaceTransform(CPRightFootIndex);
				FVector V = T.GetTranslation();
				OffsetToFloor = -V.Z;
				RightFootLockLoc = FVector(V.X, V.Y, 0);
			}
			if (LeftFootGrounding && !LeftFootGroundingPrevFrame)
			{
				FTransform T = CSPose.GetComponentSpaceTransform(CPLeftFootIndex);
				FVector V = T.GetTranslation();
				OffsetToFloor = -V.Z;
				LeftFootLockLoc = FVector(V.X, V.Y, 0);
			}

			FCompactPoseBoneIndex Idx(INDEX_NONE);
			FVector DstHip = RightFootLockLoc;
			TArray<FVector> Points;
			TArray<float> Lens;
			if (RightFootGrounding)
			{
				Idx = CPRightFootIndex;
				DstHip = RightFootLockLoc;
			}
			else if (LeftFootGrounding)
			{
				Idx = CPLeftFootIndex;
				DstHip = LeftFootLockLoc;
			}
			else
			{
				//Idx = CPRightFootIndex;
				//FTransform T = CSPose.GetComponentSpaceTransform(CPRightFootIndex);
				//FVector V = T.GetTranslation();
				//DstHip = FVector(V.X, V.Y, V.Z + OffsetToFloor);
				//HipPosCacheCS.Empty();
				//const float MinDelta = 1.f / 20;
				//if (HipPosCacheCS.Num() > 2 && HipPosCacheCS[0].Dt > 0 && HipPosCacheCS[0].Dt < MinDelta)
				//{
				//	HipVelocity = (HipPosCacheCS[0].Loc - HipPosCacheCS[2].Loc) / (HipPosCacheCS[0].Dt+ HipPosCacheCS[1].Dt);
				//	AN_LOG(Log, TEXT("Floating new Speed %s"), *HipVelocity.ToString());
				//}
				CSHipLoc += FVector(HipVelocity.X, HipVelocity.Y, 0) * DeltaTime;
				HipPosCacheCS[HipPosCacheCSIndex] = { CSHipLoc, 0, };
				//FTransform T = CSPose.GetComponentSpaceTransform(CPHipIndex);
				//CSHipLoc = FMath::Lerp
				AN_LOG(Log, TEXT("Floating Speed %s Loc %s"), *HipVelocity.ToString(), *CSHipLoc.ToString());
			}

			if (RightFootGrounding || LeftFootGrounding)
			{
				while (Idx != INDEX_NONE)
				{
					Points.Add(CSPose.GetComponentSpaceTransform(Idx).GetTranslation());
					int32 MeshIndex = BoneContainerRef.MakeMeshPoseIndex(Idx).GetInt();
					Idx = OutPose.GetParentBoneIndex(Idx);
					if (Idx != INDEX_NONE)
					{
						int32 ParentMeshIndex = BoneContainerRef.MakeMeshPoseIndex(Idx).GetInt();
						Lens.Add(FVector::Distance(WorldPositions[ParentMeshIndex], WorldPositions[MeshIndex]));
					}
				}
				
				for (int i = 1; i < Points.Num(); ++i)
				{
					FVector Dir = (Points[i] - Points[i - 1]);
					Dir.Normalize();
					DstHip += Dir * Lens[i-1];
				}

				CSHipLoc = DstHip;
				const float MinDelta = 1.f / 20;
				{
					HipPosCacheCS[HipPosCacheCSIndex].Loc = DstHip;
					HipPosCacheCS[HipPosCacheCSIndex].Dt += DeltaTime;
					if (HipPosCacheCS[HipPosCacheCSIndex].Dt >= MinDelta)
					{
						int NextIdx = (HipPosCacheCSIndex + 1) % 2;
						HipVelocity = (HipPosCacheCS[HipPosCacheCSIndex].Loc - HipPosCacheCS[NextIdx].Loc) / (HipPosCacheCS[HipPosCacheCSIndex].Dt);
						AN_LOG(Log, TEXT("Grounding new Speed %s Loc %s %s dt %f"), *HipVelocity.ToString(), *HipPosCacheCS[HipPosCacheCSIndex].Loc.ToString(), *HipPosCacheCS[NextIdx].Loc.ToString(), HipPosCacheCS[HipPosCacheCSIndex].Dt);
						HipPosCacheCSIndex = NextIdx;
						HipPosCacheCS[NextIdx].Dt = 0;
					}
				}
				//AN_LOG(Log, TEXT("Grounding Speed %s Loc %s dt %f"), *HipVelocity.ToString(), *CSHipLoc.ToString(), DeltaTime);
			}

			FTransform T = CSPose.GetComponentSpaceTransform(CPHipIndex);
			T.SetTranslation(CSHipLoc);
			CSPose.SetComponentSpaceTransform(CPHipIndex, T);
			T = CSPose.GetLocalSpaceTransform(CPHipIndex);
			OutPose[CPHipIndex].SetTranslation(T.GetTranslation());
		}
		RightFootGroundingPrevFrame = RightFootGrounding;
		LeftFootGroundingPrevFrame = LeftFootGrounding;
	}

	//if (LeftFootMeshIndex != INDEX_NONE)
	//{
	//	FCompactPoseBoneIndex CPLeftFootIndex = OutPose.GetBoneContainer().MakeCompactPoseIndex(FMeshPoseBoneIndex(LeftFootMeshIndex));
	//	if (CPLeftFootIndex != INDEX_NONE)
	//	{
	//		OutPose[CPLeftFootIndex] = FTransform(FQuat(FRotator(0, 45, 0)), FVector(-20, 0, 0));// RightFootBoneTransform;
	//	}
	//}
}

void UNeuronLiveLinkRemapAsset::BuildPoseAndCurveFromBaseData( float DeltaTime, const FLiveLinkBaseStaticData* InBaseStaticData, const FLiveLinkBaseFrameData* InBaseFrameData, FCompactPose& OutPose, FBlendedCurve& OutCurve )
{
	const FLiveLinkSkeletonStaticData* InSkeletonData = StaticCast<const FLiveLinkSkeletonStaticData*>( InBaseStaticData );
	const FLiveLinkAnimationFrameData* InFrameData = StaticCast<const FLiveLinkAnimationFrameData*>( InBaseFrameData );
	if (InSkeletonData && InFrameData)
	{
		BuildPoseFromAnimationData( DeltaTime, InSkeletonData, InFrameData, OutPose );
	}

	const TArray<FName>& SourceCurveNames = InBaseStaticData->PropertyNames;
	TArray<FName, TMemStackAllocator<>> TransformedCurveNames;
	TransformedCurveNames.Reserve( SourceCurveNames.Num( ) );

	for (const FName& SrcCurveName : SourceCurveNames)
	{
		FName* TargetCurveName = CurveNameMap.Find( SrcCurveName );
		if (TargetCurveName == nullptr)
		{
			FName NewName = GetRemappedCurveName( SrcCurveName );
			TransformedCurveNames.Add( NewName );
			CurveNameMap.Add( SrcCurveName, NewName );
		}
		else
		{
			TransformedCurveNames.Add( *TargetCurveName );
		}
	}

	TMap<FName, float> BPCurveValues;

	if (InSkeletonData && InFrameData)
	{
		MakeCurveMapFromFrame( OutPose, InSkeletonData, InFrameData, TransformedCurveNames, BPCurveValues );

		RemapCurveElements( BPCurveValues );

		BuildCurveData( BPCurveValues, OutPose, OutCurve );
	}
}

void UNeuronLiveLinkRemapAsset::GetSkeletonForwardVector_Implementation( TEnumAsByte<EAxisOption::Type>& Axis )const
{
	Axis = EAxisOption::Type::Y;
}

FName UNeuronLiveLinkRemapAsset::GetBonePrefix_Implementation() const
{
    if (bEnableBoneNamePrefix)
    {
        return FName(BoneNamePrefix);
    }
    return NAME_None;
}

FName UNeuronLiveLinkRemapAsset::GetRemappedBoneName_Implementation( FName BoneName ) const
{
    FString MappedNameStr = BoneName.ToString();
    if (bEnableBoneMapping)
    {
        const FName* MappedName = BoneMapping.Find(BoneName);
        if (MappedName != nullptr)
        {
            MappedNameStr = MappedName->ToString();
        }
    }
	if (GetBonePrefix() != NAME_None)
	{
		return FName( *(GetBonePrefix().ToString() + MappedNameStr) );
	}
	return FName(MappedNameStr);
}

FName UNeuronLiveLinkRemapAsset::GetRemappedCurveName_Implementation( FName CurveName ) const
{
	return CurveName;
}

void UNeuronLiveLinkRemapAsset::RemapCurveElements_Implementation( TMap<FName, float>& CurveItems ) const
{
}