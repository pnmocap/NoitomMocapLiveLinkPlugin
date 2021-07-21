// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.

#include "NeuronLiveLinkBPLibrary.h"
#include "NeuronLiveLinkSourceFactory.h"
#include "ILiveLinkClient.h"
#include "LiveLinkClientReference.h"



UNeuronLiveLinkBPLibrary::UNeuronLiveLinkBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UNeuronLiveLinkBPLibrary::CreateSource( const FString& ConnectionString, FLiveLinkSourceHandle& Handle )
{
	TSharedPtr<ILiveLinkSource> NewSource = UNeuronLiveLinkSourceFactory::CreateSourceAtRuntime( ConnectionString );

	FLiveLinkClientReference ClientRef;
	ClientRef.GetClient( )->AddSource( NewSource );

	Handle.SetSourcePointer( NewSource );
}

int32 UNeuronLiveLinkBPLibrary::GetNeuronParentJoint(int32 JointID)
{
	// TODO: implement assume different Avatar has different hierarchy
    return -1;
}

void UNeuronLiveLinkBPLibrary::GetNeuronFrameInUE4( const FName& AvatarName,
	bool& WithDisplacement,
	TArray<FVector>& Locations,
	TArray<FQuat>& Rotations )
{
	Locations.Empty( );
	Rotations.Empty( );

	//FAnimationData Data;
	//if (FAnimationDataManager::GetInstance()->GetAnimationData(AvatarName, Data))
	//{
	//	WithDisplacement = Data.bWithDisplacement;
	//	Locations = MoveTemp( Data.BonePositions );
	//	Rotations = MoveTemp( Data.BoneRotations );
	//}
}

void UNeuronLiveLinkBPLibrary::GetAvatarNames(TArray<FName>& AvatarNames)
{
	//FAnimationDataManager::GetInstance( )->GetAvatarNames( AvatarNames );
}

void UNeuronLiveLinkBPLibrary::NeuronBoneIndex( const FName& BoneName, int32& BoneIndex )
{
	//FString Prefix( TEXT( "ENeuronBones" ) );
	//static const UEnum* enumPtr = FindObject<UEnum>( ANY_PACKAGE, *Prefix, true );
	//if (!enumPtr)
	//{
	//	BoneIndex = (int32)ENeuronBones::Invalid;
	//}

	//BoneIndex = enumPtr->GetIndexByName( BoneName );
}
