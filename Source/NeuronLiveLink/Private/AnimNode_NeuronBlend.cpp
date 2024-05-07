#include "AnimNode_NeuronBlend.h"

// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimNode_LiveLinkPose.h"
#include "ILiveLinkClient.h"

#include "Features/IModularFeatures.h"
#include "Animation/AnimInstanceProxy.h"
#include "LiveLinkCustomVersion.h"
#include "LiveLinkRemapAsset.h"
#include "Roles/LiveLinkAnimationRole.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Animation/AnimTrace.h"
#include "EngineVersionCompare.h"

#define DEFAULT_SOURCEINDEX 0xFF
static FName DefaultNeuronBoneFilterName(TEXT("Spine"));

FAnimNode_NeuronBlend::FAnimNode_NeuronBlend()
	: RetargetAsset(UNeuronLiveLinkRemapAsset::StaticClass())
	, CurrentRetargetAsset(nullptr)
	, CurrentRetargetAssetWithDisp(nullptr)
	, LiveLinkClient_AnyThread(nullptr)
	, CachedDeltaTime(0.0f)
	, bMeshSpaceRotationBlend(false)
	, bMeshSpaceScaleBlend(false)
	, CurveBlendOption(ECurveBlendOption::Override)
	, bBlendRootMotionBasedOnRootBone(true)
	, bHasRelevantPoses(false)
	, LODThreshold(INDEX_NONE)
{
	//BlendNode.AddPose();
	BlendWeights.Empty();
	BlendWeights.Add(1.f);
	BlendPoseBoneName = TEXT("Default");
	new (LayerSetup) FInputBlendPose();
	FBranchFilter F;
	F.BoneName = DefaultNeuronBoneFilterName;
	F.BlendDepth = 0;
	LayerSetup[0].BranchFilters.Add(F);
}

void FAnimNode_NeuronBlend::OnInitializeAnimInstance(const FAnimInstanceProxy* InProxy, const UAnimInstance* InAnimInstance)
{
	CurrentRetargetAsset = nullptr;
	CurrentRetargetAssetWithDisp = nullptr;
	//BlendNode.OnInitializeAnimInstance(InProxy, InAnimInstance);
	Super::OnInitializeAnimInstance(InProxy, InAnimInstance);
}

void FAnimNode_NeuronBlend::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	//DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Initialize_AnyThread)

	FAnimNode_Base::Initialize_AnyThread(Context);
	InputPose.Initialize(Context);
}


#if WITH_EDITOR
void FAnimNode_NeuronBlend::PostCompile(const class USkeleton* InSkeleton)
{
	FAnimNode_Base::PostCompile(InSkeleton);
	RebuildCacheData(InSkeleton);
}
#endif // WITH_EDITOR

void FAnimNode_NeuronBlend::RebuildCacheData(const USkeleton* InSkeleton)
{
	if (InSkeleton)
	{
		FAnimationRuntime::CreateMaskWeights(PerBoneBlendWeights, LayerSetup, InSkeleton);
		SkeletonGuid = InSkeleton->GetGuid();
		VirtualBoneGuid = InSkeleton->GetVirtualBoneGuid();
	}
}

bool FAnimNode_NeuronBlend::IsCacheInvalid(const USkeleton* InSkeleton) const
{
	return (InSkeleton->GetGuid() != SkeletonGuid || InSkeleton->GetVirtualBoneGuid() != VirtualBoneGuid);
}

void FAnimNode_NeuronBlend::ReinitializeBoneBlendWeights(const FBoneContainer& RequiredBones, const USkeleton* Skeleton)
{
	if (IsCacheInvalid(Skeleton))
	{
		RebuildCacheData(Skeleton);
	}

	// build desired bone weights
	const TArray<FBoneIndexType>& RequiredBoneIndices = RequiredBones.GetBoneIndicesArray();
	const int32 NumRequiredBones = RequiredBoneIndices.Num();
	DesiredBoneBlendWeights.SetNumZeroed(NumRequiredBones);
	for (int32 RequiredBoneIndex = 0; RequiredBoneIndex < NumRequiredBones; RequiredBoneIndex++)
	{
		const int32 SkeletonBoneIndex = RequiredBones.GetSkeletonIndex(FCompactPoseBoneIndex(RequiredBoneIndex));
		if (ensure(SkeletonBoneIndex != INDEX_NONE))
		{
			DesiredBoneBlendWeights[RequiredBoneIndex] = PerBoneBlendWeights[SkeletonBoneIndex];
		}
	}

	CurrentBoneBlendWeights.Reset(DesiredBoneBlendWeights.Num());
	CurrentBoneBlendWeights.AddZeroed(DesiredBoneBlendWeights.Num());

	//Reinitialize bone blend weights now that we have cleared them
	FAnimationRuntime::UpdateDesiredBoneWeight(DesiredBoneBlendWeights, CurrentBoneBlendWeights, BlendWeights);

#if UE_ENGINE_VER_GREAT_THAN(5,2)
    {
        CurvePoseSourceIndices.Empty();
        CurvePoseSourceIndices.Reserve(Skeleton->GetNumCurveMetaData());

        Skeleton->ForEachCurveMetaData([this, &RequiredBones](const FName& InCurveName, const FCurveMetaData& InMetaData)
            {
                for (const FBoneReference& LinkedBone : InMetaData.LinkedBones)
                {
                    FCompactPoseBoneIndex CompactPoseIndex = LinkedBone.GetCompactPoseIndex(RequiredBones);
                    if (CompactPoseIndex != INDEX_NONE)
                    {
                        if (DesiredBoneBlendWeights[CompactPoseIndex.GetInt()].BlendWeight > 0.f)
                        {
                            CurvePoseSourceIndices.Add(InCurveName, DesiredBoneBlendWeights[CompactPoseIndex.GetInt()].SourceIndex);
                            break;
                        }
                    }
                }
            });
    }
#else
	TArray<uint16> const& CurveUIDFinder = RequiredBones.GetUIDToArrayLookupTable();
	const int32 CurveUIDCount = CurveUIDFinder.Num();
	const int32 TotalCount = FBlendedCurve::GetValidElementCount(&CurveUIDFinder);
	CurvePoseSourceIndices.Reset(TotalCount);
	// initialize with FF - which is default
	CurvePoseSourceIndices.Init(DEFAULT_SOURCEINDEX, TotalCount);

	// now go through point to correct source indices. Curve only picks one source index
	for (int32 UIDIndex = 0; UIDIndex < CurveUIDCount; ++UIDIndex)
	{
		int32 CurrentPoseIndex = CurveUIDFinder[UIDIndex];
		if (CurrentPoseIndex != MAX_uint16)
		{
			SmartName::UID_Type CurveUID = (SmartName::UID_Type)UIDIndex;

			const FCurveMetaData* CurveMetaData = Skeleton->GetCurveMetaData(CurveUID);
			if (CurveMetaData)
			{
				const TArray<FBoneReference>& LinkedBones = CurveMetaData->LinkedBones;
				const int32 NumLinkedBones = LinkedBones.Num();
				for (int32 LinkedBoneIndex = 0; LinkedBoneIndex < NumLinkedBones; ++LinkedBoneIndex)
				{
					FCompactPoseBoneIndex CompactPoseIndex = LinkedBones[LinkedBoneIndex].GetCompactPoseIndex(RequiredBones);
					if (CompactPoseIndex != INDEX_NONE)
					{
						if (DesiredBoneBlendWeights[CompactPoseIndex.GetInt()].BlendWeight > 0.f)
						{
							CurvePoseSourceIndices[CurrentPoseIndex] = DesiredBoneBlendWeights[CompactPoseIndex.GetInt()].SourceIndex;
						}
					}
				}
			}
		}
	}
#endif
}

static FName FindParentUnderHip(const FReferenceSkeleton& InSkeleton, FName BoneName, FName HipsName)
{
	//if (InSkeleton)
	{
		int StartIdx = InSkeleton.FindBoneIndex(BoneName);
		int EndIdx = InSkeleton.FindBoneIndex(HipsName);
		int Idx = StartIdx;
		int ParentIdx = StartIdx;
		while (Idx != INDEX_NONE)
		{
			ParentIdx = InSkeleton.GetParentIndex(Idx);
			if (ParentIdx == EndIdx)
			{
				return InSkeleton.GetBoneName(Idx);
			}
			Idx = ParentIdx;
		}
	}

	return DefaultNeuronBoneFilterName;
}

void FAnimNode_NeuronBlend::PreUpdate(const UAnimInstance* InAnimInstance)
{
	LiveLinkClient_AnyThread = LiveLinkClient_GameThread.GetClient();

	// Protection as a class graph pin does not honor rules on abstract classes and NoClear
	UClass* RetargetAssetPtr = RetargetAsset.Get();
	if (!RetargetAssetPtr || RetargetAssetPtr->HasAnyClassFlags(CLASS_Abstract))
	{
		RetargetAssetPtr = UNeuronLiveLinkRemapAsset::StaticClass();
		RetargetAsset = RetargetAssetPtr;
	}

	if (!CurrentRetargetAsset || RetargetAssetPtr != CurrentRetargetAsset->GetClass())
	{
		CurrentRetargetAsset = NewObject<UNeuronLiveLinkRemapAsset>(const_cast<UAnimInstance*>(InAnimInstance), RetargetAssetPtr);
		CurrentRetargetAsset->bUseDisplacementData = false;
		CurrentRetargetAsset->Initialize();
	}

	if (!CurrentRetargetAssetWithDisp || RetargetAssetPtr != CurrentRetargetAssetWithDisp->GetClass())
	{
		CurrentRetargetAssetWithDisp = NewObject<UNeuronLiveLinkRemapAsset>(const_cast<UAnimInstance*>(InAnimInstance), RetargetAssetPtr);
		CurrentRetargetAssetWithDisp->bUseDisplacementData = true;
		CurrentRetargetAssetWithDisp->Initialize();
	}

	//BlendNode.PreUpdate(InAnimInstance);
	
	FName SpineName = DefaultNeuronBoneFilterName;
	if (BlendPoseBoneName != TEXT("Default"))
	{
		SpineName = BlendPoseBoneName;
	}
	else if (InAnimInstance->CurrentSkeleton)
	{
		const FReferenceSkeleton& Skeleton = InAnimInstance->CurrentSkeleton->GetReferenceSkeleton();
		FName HipsName = CurrentRetargetAsset->GetRemappedBoneName(FName("Hips"));
		FName HeadName = CurrentRetargetAsset->GetRemappedBoneName(FName("Head"));
		SpineName = FindParentUnderHip(Skeleton, HeadName, HipsName);
	}
	LayerSetup[0].BranchFilters[0].BoneName = SpineName;
	RebuildCacheData(InAnimInstance->CurrentSkeleton);
}

void FAnimNode_NeuronBlend::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	//DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Update_AnyThread)

	InputPose.Update(Context);

	GetEvaluateGraphExposedInputs().Execute(Context);

	bHasRelevantPoses = false;
	int32 RootMotionBlendPose = -1;
	float RootMotionWeight = 0.f;
	const float RootMotionClearWeight = bBlendRootMotionBasedOnRootBone ? 0.f : 1.f;

	if (IsLODEnabled(Context.AnimInstanceProxy))
	{
		GetEvaluateGraphExposedInputs().Execute(Context);

		for (int32 ChildIndex = 0; ChildIndex < 1/*BlendPoses.Num()*/; ++ChildIndex)
		{
			const float ChildWeight = BlendWeights[ChildIndex];
			if (FAnimWeight::IsRelevant(ChildWeight))
			{
				if (bHasRelevantPoses == false)
				{
					// If our cache is invalid, attempt to update it.
					if (IsCacheInvalid(Context.AnimInstanceProxy->GetSkeleton()))
					{
						ReinitializeBoneBlendWeights(Context.AnimInstanceProxy->GetRequiredBones(), Context.AnimInstanceProxy->GetSkeleton());

						// If Cache is still invalid, we don't have correct DesiredBoneBlendWeights, so abort.
						// bHasRelevantPoses == false, will passthrough in evaluate.
						if (!ensure(IsCacheInvalid(Context.AnimInstanceProxy->GetSkeleton())))
						{
							break;
						}
					}
					else
					{
						FAnimationRuntime::UpdateDesiredBoneWeight(DesiredBoneBlendWeights, CurrentBoneBlendWeights, BlendWeights);
					}

					bHasRelevantPoses = true;

					if (bBlendRootMotionBasedOnRootBone)
					{
						const float NewRootMotionWeight = CurrentBoneBlendWeights[0].BlendWeight;
						if (NewRootMotionWeight > ZERO_ANIMWEIGHT_THRESH)
						{
							RootMotionWeight = NewRootMotionWeight;
							RootMotionBlendPose = CurrentBoneBlendWeights[0].SourceIndex;
						}
					}
				}

				//const float ThisPoseRootMotionWeight = (ChildIndex == RootMotionBlendPose) ? RootMotionWeight : RootMotionClearWeight;
				//BlendPoses[ChildIndex].Update(Context.FractionalWeightAndRootMotion(ChildWeight, ThisPoseRootMotionWeight));
			}
		}
	}
	else
	{
		// Clear BlendWeights if disabled by LODThreshold.
		BlendWeights.Init(0.f, BlendWeights.Num());
	}

	// initialize children
	//const float BaseRootMotionWeight = 1.f - RootMotionWeight;

	//if (BaseRootMotionWeight < ZERO_ANIMWEIGHT_THRESH)
	//{
	//	BasePose.Update(Context.FractionalWeightAndRootMotion(1.f, BaseRootMotionWeight));
	//}
	//else
	//{
	//	BasePose.Update(Context);
	//}

	
	// Accumulate Delta time from update
	CachedDeltaTime += Context.GetDeltaTime();

	TRACE_ANIM_NODE_VALUE(Context, TEXT("SubjectName"), LiveLinkSubjectName.Name);
}

void FAnimNode_NeuronBlend::Evaluate_AnyThread(FPoseContext& Output)
{
	//DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Evaluate_AnyThread)
	//ANIM_MT_SCOPE_CYCLE_COUNTER(BlendPosesInGraph, !IsInGameThread());

	FPoseContext OutputBase(Output);
	FPoseContext OutputBlend(Output);
	//FPoseContext OutputBase = (Output);
	//FPoseContext OutputBlend = (Output);

	InputPose.Evaluate(OutputBase);
	InputPose.Evaluate(OutputBlend);

	if (!LiveLinkClient_AnyThread || !CurrentRetargetAsset || !CurrentRetargetAssetWithDisp)
	{
		return;
	}

	FLiveLinkSubjectFrameData SubjectFrameData;
#if UE_ENGINE_VER_LESS_THAN(5,0)
	TSubclassOf<ULiveLinkRole> SubjectRole = LiveLinkClient_AnyThread->GetSubjectRole(LiveLinkSubjectName);
#else
    TSubclassOf<ULiveLinkRole> SubjectRole = LiveLinkClient_AnyThread->GetSubjectRole_AnyThread(LiveLinkSubjectName);
#endif
	if (SubjectRole)
	{

		if (SubjectRole->IsChildOf(ULiveLinkAnimationRole::StaticClass()))
		{
			//Process animation data if the subject is from that type
			if (LiveLinkClient_AnyThread->EvaluateFrame_AnyThread(LiveLinkSubjectName, ULiveLinkAnimationRole::StaticClass(), SubjectFrameData))
			{
				FLiveLinkSkeletonStaticData* SkeletonData = SubjectFrameData.StaticData.Cast<FLiveLinkSkeletonStaticData>();
				FLiveLinkAnimationFrameData* FrameData = SubjectFrameData.FrameData.Cast<FLiveLinkAnimationFrameData>();
				check(SkeletonData);
				check(FrameData);

				CurrentRetargetAsset->BuildPoseFromAnimationData(CachedDeltaTime, SkeletonData, FrameData, OutputBlend.Pose);
				CurrentRetargetAsset->BuildPoseAndCurveFromBaseData(CachedDeltaTime, SkeletonData, FrameData, OutputBlend.Pose, OutputBlend.Curve);
				
				CurrentRetargetAssetWithDisp->BuildPoseFromAnimationData(CachedDeltaTime, SkeletonData, FrameData, OutputBase.Pose);
				CurrentRetargetAssetWithDisp->BuildPoseAndCurveFromBaseData(CachedDeltaTime, SkeletonData, FrameData, OutputBase.Pose, OutputBase.Curve);


				CachedDeltaTime = 0.f; // Reset so that if we evaluate again we don't "create" time inside of the retargeter
			}
		}
		else
		{
			//Otherwise, fetch basic data that contains property / curve data
			if (LiveLinkClient_AnyThread->EvaluateFrame_AnyThread(LiveLinkSubjectName, ULiveLinkBasicRole::StaticClass(), SubjectFrameData))
			{
				FLiveLinkBaseStaticData* BaseStaticData = SubjectFrameData.StaticData.Cast<FLiveLinkBaseStaticData>();
				FLiveLinkBaseFrameData* BaseFrameData = SubjectFrameData.FrameData.Cast<FLiveLinkBaseFrameData>();
				check(BaseStaticData);
				check(BaseFrameData);

				CurrentRetargetAsset->BuildPoseAndCurveFromBaseData(CachedDeltaTime, BaseStaticData, BaseFrameData, OutputBlend.Pose, OutputBlend.Curve);
				CurrentRetargetAssetWithDisp->BuildPoseAndCurveFromBaseData(CachedDeltaTime, BaseStaticData, BaseFrameData, OutputBase.Pose, OutputBase.Curve);
				CachedDeltaTime = 0.f; // Reset so that if we evaluate again we don't "create" time inside of the retargeter
			}
		}

		{
			int NumPoses = 1;
			FPoseContext& BasePoseContext = (OutputBase);

			TArray<FCompactPose> TargetBlendPoses;
			TargetBlendPoses.SetNum(NumPoses);

			TArray<FBlendedCurve> TargetBlendCurves;
			TargetBlendCurves.SetNum(NumPoses);

			for (int32 ChildIndex = 0; ChildIndex < NumPoses; ++ChildIndex)
			{
				if (FAnimWeight::IsRelevant(BlendWeights[ChildIndex]))
				{
					//FPoseContext& CurrentPoseContext = (OutputBlend);
					//BlendPoses[ChildIndex].Evaluate(CurrentPoseContext);

					TargetBlendPoses[ChildIndex].MoveBonesFrom(OutputBlend.Pose);
					TargetBlendCurves[ChildIndex].MoveFrom(OutputBlend.Curve);
				}
				else
				{
					TargetBlendPoses[ChildIndex].ResetToRefPose(BasePoseContext.Pose.GetBoneContainer());
					TargetBlendCurves[ChildIndex].InitFrom(Output.Curve);
				}
			}
#if UE_ENGINE_VER_GREAT_THAN(5,2)
            // filter to make sure it only includes curves that are linked to the correct bone filter
            UE::Anim::FNamedValueArrayUtils::RemoveByPredicate(BasePoseContext.Curve, CurvePoseSourceIndices,
                [](const UE::Anim::FCurveElement& InOutBasePoseElement, const UE::Anim::FCurveElementIndexed& InSourceIndexElement)
                {
                    // if source index is set, remove base pose curve value
                    return (InSourceIndexElement.Index != INDEX_NONE);
                });

            // Filter child pose curves
            for (int32 ChildIndex = 0; ChildIndex < NumPoses; ++ChildIndex)
            {
                UE::Anim::FNamedValueArrayUtils::RemoveByPredicate(TargetBlendCurves[ChildIndex], CurvePoseSourceIndices,
                    [ChildIndex](const UE::Anim::FCurveElement& InOutBasePoseElement, const UE::Anim::FCurveElementIndexed& InSourceIndexElement)
                    {
                        // if not source, remove it
                        return (InSourceIndexElement.Index != INDEX_NONE) && (InSourceIndexElement.Index != ChildIndex);
                    });
            }
#else
			// filter to make sure it only includes curves that is linked to the correct bone filter
			TArray<uint16> const* CurveUIDFinder = Output.Curve.UIDToArrayIndexLUT;
			const int32 TotalCount = Output.Curve.NumValidCurveCount;
			// now go through point to correct source indices. Curve only picks one source index
			for (int32 UIDIndex = 0; UIDIndex < CurveUIDFinder->Num(); ++UIDIndex)
			{
				int32 CurvePoseIndex = Output.Curve.GetArrayIndexByUID(UIDIndex);
				if (CurvePoseSourceIndices.IsValidIndex(CurvePoseIndex))
				{
					int32 SourceIndex = CurvePoseSourceIndices[CurvePoseIndex];
					if (SourceIndex != DEFAULT_SOURCEINDEX)
					{
						// if source index is set, clear base pose curve value
						BasePoseContext.Curve.Set(UIDIndex, 0.f);
						for (int32 ChildIndex = 0; ChildIndex < NumPoses; ++ChildIndex)
						{
							if (SourceIndex != ChildIndex)
							{
								// if not source, clear it
								TargetBlendCurves[ChildIndex].Set(UIDIndex, 0.f);
							}
						}
					}
				}
			}
#endif
			FAnimationRuntime::EBlendPosesPerBoneFilterFlags BlendFlags = FAnimationRuntime::EBlendPosesPerBoneFilterFlags::None;
			if (bMeshSpaceRotationBlend)
			{
				BlendFlags |= FAnimationRuntime::EBlendPosesPerBoneFilterFlags::MeshSpaceRotation;
			}
			if (bMeshSpaceScaleBlend)
			{
				BlendFlags |= FAnimationRuntime::EBlendPosesPerBoneFilterFlags::MeshSpaceScale;
			}
#if UE_ENGINE_VER_LESS_THAN(4, 26)
			FAnimationRuntime::BlendPosesPerBoneFilter(BasePoseContext.Pose, TargetBlendPoses, BasePoseContext.Curve, TargetBlendCurves, Output.Pose, Output.Curve, CurrentBoneBlendWeights, BlendFlags, CurveBlendOption);
#elif UE_ENGINE_VER_LESS_THAN(5, 0)
            FStackCustomAttributes TempAttributes;
            FAnimationPoseData AnimationPoseData = { Output.Pose, Output.Curve, TempAttributes };
            FAnimationRuntime::BlendPosesPerBoneFilter(BasePoseContext.Pose, TargetBlendPoses, BasePoseContext.Curve, TargetBlendCurves, TempAttributes, {}, AnimationPoseData, CurrentBoneBlendWeights, BlendFlags, CurveBlendOption);
#else
            UE::Anim::FStackAttributeContainer TempAttributes;
            FAnimationPoseData AnimationPoseData = { Output.Pose, Output.Curve, TempAttributes };

            FAnimationRuntime::BlendPosesPerBoneFilter(BasePoseContext.Pose, TargetBlendPoses, BasePoseContext.Curve, TargetBlendCurves, TempAttributes, {}, AnimationPoseData, CurrentBoneBlendWeights, BlendFlags, CurveBlendOption);
#endif
            Output.Pose.NormalizeRotations();
			
			//TArray<float> WeightsOfSource2;
			//WeightsOfSource2.Init(0, Output.Pose.GetNumBones());
			//FName DstBoneName = FName("Spine");// CurrentRetargetAsset->GetRemappedBoneName(FName("Spine1"));
			//int32 BoneIndex = Output.Pose.GetBoneContainer().GetPoseBoneIndexForBoneName(DstBoneName);
			//WeightsOfSource2[BoneIndex] = 1.f;
			//FAnimationRuntime::BlendTwoPosesTogetherPerBone(OutputBase.Pose, OutputBlend.Pose, OutputBase.Curve, OutputBlend.Curve, WeightsOfSource2, Output.Pose, Output.Curve);
		}
	}
	else
	{
		InputPose.Evaluate(Output);
	}
}

void FAnimNode_NeuronBlend::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(CacheBones_AnyThread)

	InputPose.CacheBones(Context);
	//BlendNode.CacheBones_AnyThread(Context);
	
	ReinitializeBoneBlendWeights(Context.AnimInstanceProxy->GetRequiredBones(), Context.AnimInstanceProxy->GetSkeleton());
}

void FAnimNode_NeuronBlend::GatherDebugData(FNodeDebugData& DebugData)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(GatherDebugData)

	FString DebugLine = FString::Printf(TEXT("LiveLink - SubjectName: %s"), *LiveLinkSubjectName.ToString());

	DebugData.AddDebugItem(DebugLine);
	InputPose.GatherDebugData(DebugData);
}

#if WITH_EDITOR
void FAnimNode_NeuronBlend::ValidateData()
{
	// ideally you don't like to get to situation where it becomes inconsistent, but this happened, 
	// and we don't know what caused this. Possibly copy/paste, but I tried copy/paste and that didn't work
	// so here we add code to fix this up manually in editor, so that they can continue working on it. 
	int32 PoseNum = 1;// BlendPoses.Num();
	int32 WeightNum = BlendWeights.Num();
	int32 LayerNum = LayerSetup.Num();

	int32 Max = FMath::Max3(PoseNum, WeightNum, LayerNum);
	int32 Min = FMath::Min3(PoseNum, WeightNum, LayerNum);
	// if they are not all same
	if (Min != Max)
	{
		// we'd like to increase to all Max
		// sadly we don't have add X for how many
		//for (int32 Index = PoseNum; Index < Max; ++Index)
		//{
		//	BlendPoses.Add(FPoseLink());
		//}

		for (int32 Index = WeightNum; Index < Max; ++Index)
		{
			BlendWeights.Add(1.f);
		}

		for (int32 Index = LayerNum; Index < Max; ++Index)
		{
			LayerSetup.Add(FInputBlendPose());
		}
	}
}
#endif

bool FAnimNode_NeuronBlend::Serialize(FArchive& Ar)
{
	Ar.UsingCustomVersion(FLiveLinkCustomVersion::GUID);

	UScriptStruct* Struct = FAnimNode_NeuronBlend::StaticStruct();

	if (Ar.IsLoading() || Ar.IsSaving())
	{
		Struct->SerializeTaggedProperties(Ar, (uint8*)this, Struct, nullptr);
	}

	return true;
}

