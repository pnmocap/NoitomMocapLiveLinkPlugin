// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.

#include "NeuronLiveLinkBPLibrary.h"
#include "NeuronLiveLinkSourceFactory.h"
#include "ILiveLinkClient.h"
#include "LiveLinkClientReference.h"
#include "MocapAppManager.h"
#include "MocapStructs.h"


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
	const FMocapAvatar* Data = FMocapAppManager::GetInstance().GetAvatarData(AvatarName);
	if (Data)
	{
		int Num = Data->BoneNames.Num();
		Locations.SetNum(Num);
		Rotations.SetNum(Num);
		for (int i = 0; i < Num; ++i)
		{
			Locations[i] = Data->HasLocalPositions[i] ? Data->LocalPositions[i] : Data->DefaultLocalPositions[i];
			Rotations[i] = Data->LocalRotation[i];
		}
		WithDisplacement = Data->HasLocalPositions[1];
	}
}

class MocapAppDataVisitor : public MocapAppVisitor
{
public:
	virtual void Visit(UMocapApp* App) override
	{
		Apps.AddUnique(App);
	}
	TArray<UMocapApp*> Apps;
};

void UNeuronLiveLinkBPLibrary::GetAvatarNames(TArray<FName>& AvatarNames)
{
	//FAnimationDataManager::GetInstance( )->GetAvatarNames( AvatarNames );
	MocapAppDataVisitor Visitor;
	FMocapAppManager::GetInstance().EachRunningApp(Visitor);
	for (UMocapApp* App : Visitor.Apps)
	{
		TArray<FString> Arr;
		App->GetAllAvatarNames(Arr);
		AvatarNames.Append(Arr);
	}
}

void UNeuronLiveLinkBPLibrary::GetTrackerNames(TArray<FName>& TrackerNames)
{
	MocapAppDataVisitor Visitor;
	FMocapAppManager::GetInstance().EachRunningApp(Visitor);
	for (UMocapApp* App : Visitor.Apps)
	{
		TArray<FString> Arr;
		App->GetAllTrackerNames(Arr);
		TrackerNames.Append(Arr);
	}
}

void UNeuronLiveLinkBPLibrary::GetRigidBodyNames(TArray<FName>& RigidBodyNames)
{
	MocapAppDataVisitor Visitor;
	FMocapAppManager::GetInstance().EachRunningApp(Visitor);
	for (UMocapApp* App : Visitor.Apps)
	{
		TArray<FString> Arr;
		App->GetAllRigidBodyNames(Arr);
		RigidBodyNames.Append(Arr);
	}
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
	const TArray<FName>& BoneNames = UMocapApp::GetAvatarBuildinBoneNames();
	BoneNames.Find(BoneName, BoneIndex);
}

FMocapServerCommand UNeuronLiveLinkBPLibrary::MakeMocapCommand(EMCCommandType Cmd)
{
	FMocapServerCommand C;
	C.Cmd = Cmd;
	return C;
}

void UNeuronLiveLinkBPLibrary::BuildMocapCmdParamInt(FMocapServerCommand& Cmd, EMCCommandParamName Name, int Val)
{
	Cmd.Params.Add(Name, FString::FromInt(Val));
}

void UNeuronLiveLinkBPLibrary::BuildMocapCmdParam(FMocapServerCommand& Cmd, EMCCommandParamName Name, const FString& Val)
{
	Cmd.Params.Add(Name, Val);
}

void UNeuronLiveLinkBPLibrary::BuildMocapCmdParamStopCatpureExtraFlag(FMocapServerCommand& Cmd, EMCCommandExtraFlag flag)
{
	FString StrFlag = FString::FromInt((int)flag);
	Cmd.Params.Add(EMCCommandParamName::ParamStopCatpureExtraFlag, StrFlag);
}

void UNeuronLiveLinkBPLibrary::SetMocapCmdPProgressHandler(UPARAM(ref) FMocapServerCommand& Cmd, UObject* Obj, FName Function)
{

}

void UNeuronLiveLinkBPLibrary::SendNeuronCommand(const UObject* WorldContextObject, FName AppName, const FMocapServerCommand& Cmd, FLatentActionInfo LatentInfo, int& Result, FString& ResultStr)
{
	UMocapApp* App = FMocapAppManager::GetInstance().GetMocapAppByName(AppName);
	if (App)
	{
		App->QueueMocapCommand(Cmd);
	}
	else
	{
		UE_LOG(LogMocapApi, Log, TEXT("Failed to find Mocap App Name: %s"), *(AppName.ToString()));
	}
}
