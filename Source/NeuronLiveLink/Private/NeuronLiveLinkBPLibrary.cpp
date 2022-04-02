// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.

#include "NeuronLiveLinkBPLibrary.h"
#include "NeuronLiveLinkSourceFactory.h"
#include "ILiveLinkClient.h"
#include "LiveLinkClientReference.h"
#include "MocapAppManager.h"
#include "MocapStructs.h"
#include "Misc/OutputDeviceNUll.h"
#include "Kismet/KismetStringLibrary.h"


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

void UNeuronLiveLinkBPLibrary::GetMocapAppNames(TArray<FName>& AppNames)
{
	MocapAppDataVisitor Visitor;
	FMocapAppManager::GetInstance().EachRunningApp(Visitor);
	for (UMocapApp* App : Visitor.Apps)
	{
		AppNames.Add(UKismetStringLibrary::Conv_StringToName(App->AppName));
	}
}

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

void UNeuronLiveLinkBPLibrary::ClearMocapCmdParams(FMocapServerCommand& Cmd)
{
	Cmd.Params.Empty();
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

bool UNeuronLiveLinkBPLibrary::HasMocapCommandInQueue(FName AppName)
{
	UMocapApp* App = FMocapAppManager::GetInstance().GetMocapAppByName(AppName);
	if (App)
	{
		return App->HasMocapCommandInQueue();
	}
	return false;
}

void UNeuronLiveLinkBPLibrary::SetMocapCmdProgressHandler(UPARAM(ref) FMocapServerCommand& Cmd, UObject* Obj, FName Function)
{
	if (Obj)
	{
		UFunction* Func = Obj->GetClass()->FindFunctionByName(Function);
		if (Func)
		{
			//FScriptDelegate Delegate;
			//Delegate.BindUFunction(Obj, Function);
			//Cmd.OnProgress.AddDelegate(MoveTemp(Delegate));
			//Cmd.OnProgress.AddUObject(Obj, Func->GetNativeFunc());
			//Cmd.OnProgress.AddUFunction(Obj, Func, const FString&/*SupportPoses*/, const FString&/*ProgressDesc*/, const FString&/*CurrentPose*/, int/*StepOfPose*/, int/*SubStepOfPose*/, int/*SubSubStepOfPose*/);
			FWeakObjectPtr TT = Obj;
			Cmd.OnProgress.AddLambda([TT,Function](const FString& SupportPoses, const FString& ProgressDesc, const FString& CurrentPose, int StepOfPose, int SubStepOfPose, int SubSubStepOfPose) {
				UE_LOG(LogMocapApi, Warning, TEXT("Cmd OnProgress event function[%s %s %s %s %d %d %d]"),
					*Function.ToString(),
					*SupportPoses,
					*ProgressDesc,
					*CurrentPose,
					StepOfPose,
					SubStepOfPose,
					SubSubStepOfPose
				);
				if (TT.IsValid())
				{
					UObject* Obj = TT.Get();
					if (Obj)
					{
						FOutputDeviceNull Ar;
						FString EventWithParam = FString::Printf(TEXT("%s \"%s\" \"%s\" \"%s\" %d %d %d"),
							*Function.ToString(),
							*SupportPoses,
							*ProgressDesc,
							*CurrentPose,
							StepOfPose,
							SubStepOfPose,
							SubSubStepOfPose
						);
						bool result = Obj->CallFunctionByNameWithArguments(*EventWithParam, Ar, nullptr, true);
						if (!result)
						{
							UE_LOG(LogMocapApi, Warning, TEXT("Failed to Delegate OnProgress event on %s function [%s]"), *Obj->GetFName().ToString(), *EventWithParam);
						}
					}
				}
			});
		}
	}
}

class FNeuronCommandAction : public FPendingLatentAction
{
public:
	bool Finished;
	int& ResultCode;
	FString& ResultMsg;
	FName ExecutionFunction;
	int32 OutputLink;
	FWeakObjectPtr CallbackTarget;

	FNeuronCommandAction(const FLatentActionInfo& LatentInfo, int& Result, FString& ResultStr)
		: Finished(false)
		, ResultCode(Result)
		, ResultMsg(ResultStr)
		, ExecutionFunction(LatentInfo.ExecutionFunction)
		, OutputLink(LatentInfo.Linkage)
		, CallbackTarget(LatentInfo.CallbackTarget)
	{
	}

	virtual void UpdateOperation(FLatentResponse& Response) override
	{
		//TimeRemaining -= Response.ElapsedTime();
		Response.FinishAndTriggerIf(Finished, ExecutionFunction, OutputLink, CallbackTarget);
	}

	void OnCommandResult(int Code, const FString& Result)
	{
		ResultCode = Code;
		ResultMsg = Result;
		Finished = true;
	}

#if WITH_EDITOR
	// Returns a human readable description of the latent operation's current state
	virtual FString GetDescription() const override
	{
		return TEXT("NeuronCommand Result Latent action");
	}
#endif
};

void UNeuronLiveLinkBPLibrary::SendNeuronCommand(const UObject* WorldContextObject, FName AppName, UPARAM(ref) FMocapServerCommand& Cmd, FLatentActionInfo LatentInfo, int& Result, FString& ResultStr)
{
	UMocapApp* App = FMocapAppManager::GetInstance().GetMocapAppByName(AppName);
	if (App)
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
		{
			FLatentActionManager& LatentManager = World->GetLatentActionManager();
			if (LatentManager.FindExistingAction<FNeuronCommandAction>(LatentInfo.CallbackTarget, LatentInfo.UUID) == nullptr)
			{
				FNeuronCommandAction* NewAction = new FNeuronCommandAction(LatentInfo, Result, ResultStr);
				LatentManager.AddNewAction(LatentInfo.CallbackTarget, LatentInfo.UUID, NewAction);
				Cmd.OnResult.AddLambda([NewAction](int Code, const FString& CmdResult) {
					if (NewAction)
					{
						NewAction->OnCommandResult(Code, CmdResult);
					}
				});
				//Cmd.OnResult.Add()

				App->QueueMocapCommand(Cmd);
			}
		}
	}
	else
	{
		UE_LOG(LogMocapApi, Log, TEXT("Failed to find Mocap App Name: %s"), *(AppName.ToString()));
	}
}

void UNeuronLiveLinkBPLibrary::DumpAllMocapApp()
{
	TArray<FName> AppNames;
	GetMocapAppNames(AppNames);
	for (auto AppName : AppNames)
	{
		UMocapApp* App = FMocapAppManager::GetInstance().GetMocapAppByName(AppName);
		if (App)
		{
			App->DumpData();
		}
	}
}
