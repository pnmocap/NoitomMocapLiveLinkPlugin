#include "MocapStructs.h"
#include "MocapApi.h"
#include "MocapApiLog.h"
#include "Misc/ScopeLock.h"
#include "MocapAppManager.h"
#include "NeuronLiveLinkBPLibrary.h"
#include <unordered_map>
#include <functional>

#define ReturnIFError(...) if (mcpError!=MocapApi::Error_None) { \
    LastError = mcpError; \
    ExtraErrorMsg = FString::Printf(TEXT("(%s@%d) Error %d"), __FILE__, __LINE__, (int)mcpError); \
    return; \
}

#define ReturnFalseIFError(...) if (mcpError!=MocapApi::Error_None) { \
    LastError = mcpError; \
    ExtraErrorMsg = FString::Printf(TEXT("(%s@%d) Error %d"), __FILE__, __LINE__, (int)mcpError); \
    return false; \
}

TArray<FName> UMocapApp::AvatarBoneNames;
TArray<int> UMocapApp::AvatarBoneParents;

FMocapAvatar::FMocapAvatar()
    : Index(-1)
    , Name()
    , RootJointTag(MocapApi::JointTag_Invalid)
{
    const int Count = MocapApi::JointTag_JointsCount;
    BoneNames.SetNum(Count);
    BoneParents.SetNum(Count);
    HasLocalPositions.SetNum(Count);
    DefaultLocalPositions.SetNum(Count);
    LocalPositions.SetNum(Count);
    LocalRotation.SetNum(Count);

    for (int i = 0; i < Count; ++i)
    {
        HasLocalPositions[i] = false;
        BoneParents[i] = -1;
    }
}

static std::unordered_map<EMCCommandParamName, std::function<MocapApi::EMCPError(MocapApi::IMCPCommand*, MocapApi::MCPCommandHandle_t, const FString&)>> CommandParamBuildMap;
UMocapApp::UMocapApp()
{
    MaxCommandHistory = 16;
    LastCommandHistoryIndex = 0;
    
    if (CommandParamBuildMap.empty())
    {
        CommandParamBuildMap[EMCCommandParamName::ParamStopCatpureExtraFlag] = [](MocapApi::IMCPCommand* CommandInterface, MocapApi::MCPCommandHandle_t handle, const FString& Value) -> MocapApi::EMCPError {
            MocapApi::EMCPCommandStopCatpureExtraFlag Flag = (MocapApi::EMCPCommandStopCatpureExtraFlag)FCString::Atoi(*Value);
            return CommandInterface->SetCommandExtraFlags(Flag, handle);
        };
        CommandParamBuildMap[EMCCommandParamName::ParamDeviceRadio] = [](MocapApi::IMCPCommand* CommandInterface, MocapApi::MCPCommandHandle_t handle, const FString& Value) -> MocapApi::EMCPError {
            int32 V = FCString::Atoi(*Value);
            return CommandInterface->SetCommandExtraLong(MocapApi::CommandExtraLong_DeviceRadio, V, handle);
        };
        CommandParamBuildMap[EMCCommandParamName::ParamAvatarName] = [](MocapApi::IMCPCommand* CommandInterface, MocapApi::MCPCommandHandle_t handle, const FString& Value) -> MocapApi::EMCPError {
            const char* V = FTCHARToUTF8(*Value).Get();
            return CommandInterface->SetCommandExtraLong(MocapApi::CommandExtraLong_AvatarName, reinterpret_cast<intptr_t>(V), handle);
        };
        CommandParamBuildMap[EMCCommandParamName::ParamTakeName] = [](MocapApi::IMCPCommand* CommandInterface, MocapApi::MCPCommandHandle_t handle, const FString& Value) -> MocapApi::EMCPError {
            const char* V = FTCHARToUTF8(*Value).Get();
            return CommandInterface->SetCommandExtraLong(MocapApi::CommandExtraLong_Extra0, reinterpret_cast<intptr_t>(V), handle);
        };
    }
}

const FString UMocapApp::GetConnectionString()
{
    //AppSettings.
    FString ProtocolStr = TEXT("udp");
    if (AppSettings.Protocol == EMCAppProtocol::TCP)
    {
        ProtocolStr = TEXT("tcp");
    }
    return FString::Printf(TEXT("%s://%s:%d"), *ProtocolStr, *AppSettings.RemoteIP, AppSettings.Port);
}

bool UMocapApp::Connect()
{
    // reset Error
    LastError = 0;
    ExtraErrorMsg = TEXT("");

    // create application
    MocapApi::MCPApplicationHandle_t appcliation;
    MocapApi::IMCPApplication* mcpApplication = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPApplication_Version,
        reinterpret_cast<void**>(&mcpApplication));
    ReturnFalseIFError();

    mcpError = mcpApplication->CreateApplication(&appcliation);
    ReturnFalseIFError();

    // Appsettings
    MocapApi::IMCPSettings* mcpSettings = nullptr;
    mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPSettings_Version,
        reinterpret_cast<void**>(&mcpSettings));
    ReturnFalseIFError();

    MocapApi::MCPSettingsHandle_t mcpSettingsHandle = 0;
    mcpError = mcpSettings->CreateSettings(&mcpSettingsHandle);
    ReturnFalseIFError();

    MocapApi::EMCPBvhData BvhDataFmt = (MocapApi::EMCPBvhData)(AppSettings.bvhDataFormat);
    //BvhDataFmt = MocapApi::BvhDataType_Binary;
    mcpError = mcpSettings->SetSettingsBvhData(BvhDataFmt, mcpSettingsHandle);
    ReturnFalseIFError();

    MocapApi::EMCPBvhRotation RotationOrder = (MocapApi::EMCPBvhRotation)(AppSettings.BvhRotation);
    //RotationOrder = MocapApi::BvhRotation_YXZ;
    mcpError = mcpSettings->SetSettingsBvhRotation(RotationOrder, mcpSettingsHandle);
    ReturnFalseIFError();

    MocapApi::EMCPBvhTransformation EnableTrans = MocapApi::BvhTransformation_Enable;
    mcpError = mcpSettings->SetSettingsBvhTransformation(EnableTrans, mcpSettingsHandle);
    ReturnFalseIFError();

// 	mcpError = mcpSettings->SetSettingsTrackerData(mcpSettingsHandle);
// 	ReturnFalseIFError();

    bool isUDP = AppSettings.Protocol == EMCAppProtocol::UDP;
    const char* IPAddress = FTCHARToUTF8(*AppSettings.RemoteIP).Get();
    int Port = AppSettings.Port;
    int RecvPort = AppSettings.RecvPort;
    if (isUDP)
    {
        mcpError = mcpSettings->SetSettingsUDP(RecvPort, mcpSettingsHandle);
        mcpError = mcpSettings->SetSettingsUDPServer(IPAddress, Port, mcpSettingsHandle);
    }
    else
    {
        mcpError = mcpSettings->SetSettingsTCP(IPAddress, Port, mcpSettingsHandle);
    }
    ReturnFalseIFError();

    mcpError = mcpApplication->SetApplicationSettings(mcpSettingsHandle, appcliation);
    ReturnFalseIFError();
    
    mcpError = mcpSettings->DestroySettings(mcpSettingsHandle);
    ReturnFalseIFError();

    // Render setting
    MocapApi::IMCPRenderSettings* renderSettings = nullptr;
    mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPRenderSettings_Version,
        reinterpret_cast<void**>(&renderSettings));
    ReturnFalseIFError();

    MocapApi::MCPRenderSettingsHandle_t renderSettingsHandle = 0;

    // TODO: currently use PreDefinedRenderSettings_UnrealEngine for rander setting not use RenderSettings passed in
    const bool usePreDefinedRenderSetting = true;
    if (usePreDefinedRenderSetting)
    {
        renderSettings->GetPreDefRenderSettings(MocapApi::PreDefinedRenderSettings_UnrealEngine, &renderSettingsHandle);// MUST NOT Destroy this [1/8/2021 brian.wang]
        mcpError = mcpApplication->SetApplicationRenderSettings(renderSettingsHandle, appcliation);
        ReturnFalseIFError();
    }
    else
    {
        mcpError = renderSettings->CreateRenderSettings(&renderSettingsHandle);
        ReturnFalseIFError();
        // set coord system[1/8/2021 brian.wang]
        MocapApi::EMCPUpVector UpAxis = (MocapApi::EMCPUpVector)(RenderSettings.Up);
        MocapApi::EMCPFrontVector FrontAxis = (MocapApi::EMCPFrontVector)(RenderSettings.Front);
        MocapApi::EMCPCoordSystem Hand = (MocapApi::EMCPCoordSystem)(RenderSettings.Coord);
        MocapApi::EMCPRotatingDirection RotDir = (MocapApi::EMCPRotatingDirection)(RenderSettings.RotatingDir);
        renderSettings->SetUpVector(UpAxis, 1, renderSettingsHandle);
        renderSettings->SetFrontVector(FrontAxis, 1, renderSettingsHandle);
        renderSettings->SetCoordSystem(Hand, renderSettingsHandle);
        renderSettings->SetRotatingDirection(RotDir, renderSettingsHandle);
		renderSettings->SetUnit(MocapApi::EMCPUnit::Unit_Centimeter, renderSettingsHandle);

        mcpError = mcpApplication->SetApplicationRenderSettings(renderSettingsHandle, appcliation);
        ReturnFalseIFError();
        mcpError = renderSettings->DestroyRenderSettings(renderSettingsHandle);
        ReturnFalseIFError();
    }

    AppHandle = appcliation;
    AppHandleInternal = FString::Printf(TEXT("%lld"), appcliation);

    mcpError = mcpApplication->OpenApplication(appcliation);
    ReturnFalseIFError();

    IsConnecting = true;
    // add to manager when connecting
    FMocapAppManager::GetInstance().AddMocapApp(this);

	// lihongce
// 	MocapApi::MCPTrackerHandle_t pTrackerHandle;
// 	uint32_t punTrackerHandle;
// 	mcpApplication->GetApplicationTrackers(&pTrackerHandle, &punTrackerHandle, appcliation);
// 	MocapApi::IMCPTracker* TrackerMgr = nullptr;
// 
// 	mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPTracker_Version, reinterpret_cast<void**>(&TrackerMgr));
// 	ReturnFalseIFError();
// 
// 	mcpError = TrackerMgr->SetServerIP("192.168.20.99", pTrackerHandle);
// 	ReturnFalseIFError();
// 
// 	mcpError = TrackerMgr->ReqConfigSyn(pTrackerHandle);
// 	ReturnFalseIFError();

    UE_LOG(LogMocapApi, Log, TEXT("App (%s) %s handle %llu Connect ok."),
        *AppName,
        *GetConnectionString(),
        AppHandle
    );

    return true;
}

void UMocapApp::Disconnect()
{
    // reset Error
    LastError = 0;
    ExtraErrorMsg = TEXT("");

    PendingDestroy = true;

    MocapApi::MCPApplicationHandle_t appcliation;
    appcliation = AppHandle;

    MocapApi::IMCPApplication* mcpApplication = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPApplication_Version,
        reinterpret_cast<void**>(&mcpApplication));
    ReturnIFError();

    mcpError = mcpApplication->CloseApplication(appcliation);
    ReturnIFError();

    uint64 h = AppHandle;
    AppHandle = 0;
    AppHandleInternal = TEXT("0");
    IsConnecting = false;
    Trackers.Empty();
    RigidBodies.Empty();
    Avatars.Empty();
    QueuedCommands.Empty();
    CommandsHistory.Empty();
    LastCommandHistoryIndex = 0;

    FMocapAppManager::GetInstance().RemoveMocapApp(this);
    UE_LOG(LogMocapApi, Log, TEXT("App %s handle %llu Disconnect."),
        *AppName,
        h
    );
}

bool UMocapApp::PollEvents()
{
    // reset Error
    LastError = 0;
    ExtraErrorMsg = TEXT("");

    MocapApi::MCPApplicationHandle_t appcliation;
    appcliation = AppHandle;

    MocapApi::IMCPApplication* mcpApplication = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPApplication_Version,
        reinterpret_cast<void**>(&mcpApplication));
    ReturnFalseIFError("Get mcpApplication Class");

    PrepareAndSendMocapCommand(mcpApplication);

    //std::vector<MocapApi::MCPEvent_t> events;
    TArray<MocapApi::MCPEvent_t> events;
    uint32_t unEvent = 0;

    // get event count
    mcpError = mcpApplication->PollApplicationNextEvent(nullptr, &unEvent, appcliation);
    ReturnFalseIFError("PollApplicationNextEvent Get num");

    bool hasUnhandledEvents = unEvent > 0;
    //retrive event data
    if (hasUnhandledEvents) {
        events.AddUninitialized(unEvent);
        //events.resize(unEvent);
        for (auto & e : events) {
            e.size = sizeof(MocapApi::MCPEvent_t);
            e.eventType = MocapApi::MCPEvent_None;
        }
        mcpError = mcpApplication->PollApplicationNextEvent(events.GetData(), &unEvent, appcliation);
        ReturnFalseIFError("PollApplicationNextEvent");
        hasUnhandledEvents = unEvent > 0;
        events.SetNum(unEvent);
    }
    if (hasUnhandledEvents) {
        FScopeLock Lock(&CriticalSection);

        for (const auto & e : events) {
            if (e.eventType == MocapApi::MCPEvent_AvatarUpdated) {
                // handle received acvatar data
                HandleAvatarUpdateEvent(e.eventData.motionData.avatarHandle);
            }
            else if (e.eventType == MocapApi::MCPEvent_RigidBodyUpdated) {
                //HandleRigidBodyUpdateEvent(, 0)
            }
			else if (e.eventType == MocapApi::MCPEvent_TrackerUpdated) {
                // handle tracker data
				HandleTrackerUpdateEvent(e.eventData.trackerData._trackerHandle);
			}
            else if (e.eventType == MocapApi::MCPEvent_CommandReply) {
                // handle event reply
                HandleCommandReplyEvent(e.eventData.commandRespond._commandHandle, e.eventData.commandRespond._replay);
            }
            else if (e.eventType == MocapApi::MCPEvent_Error) {
                // handle error, just output the error, so use can see it
                LastError = e.eventData.systemError.error;
                ExtraErrorMsg = FString();
                UE_LOG(LogMocapApi, Warning, TEXT("Got Error Event (app:%lld) %d: %s"), AppHandle, LastError, *GetLastErrorMessage());
                //LastError = MocapApi::Error_None;-
                IsReady = !((LastError == MocapApi::Error_ServerNotReady) || (LastError == MocapApi::Error_ClientNotReady) || (LastError == MocapApi::Error_AddressInUse));
            }
            else if (e.eventType == MocapApi::MCPEvent_SensorModulesUpdated) {
                // ignore
            }
            else if (e.eventType == MocapApi::MCPEvent_Notify)
            {
                MocapApi::EMCPNotify tp = e.eventData.notifyData._notify;
                uint64_t notifyHandle = e.eventData.notifyData._notifyHandle;
                HandleRecordNotifyEvent(tp, notifyHandle);
            }
            else if (e.eventType == MocapApi::MCPEvent_None) {
                // ignore
            }
            else
            {
                LastError = INT_MAX;
                ExtraErrorMsg = FString::Printf(TEXT("Logic Should not go here, event type %X in PollEvents"), e.eventType);
                UE_LOG(LogMocapApi, Error, TEXT("Got Internal Error %d: %s"), LastError, *GetLastErrorMessage());
                //LastError = MocapApi::Error_None;
            }
        }
        if (!IsReady && LastError == 0)
        {
            IsReady = true;
        }
    }
    
    HandleMocapCommandsTimeout();

    //TreatNotifyEvents();

    return hasUnhandledEvents;
}

void UMocapApp::GetAllTrackerNames(TArray<FString>& NameArray)
{
	FScopeLock Lock(&CriticalSection);
	Trackers.GetKeys(NameArray);
}

bool UMocapApp::GetTracker(const FString& TrackerName, FVector& Position, FRotator& Rotation, int& Status)
{
	FQuat q;
	bool Result = GetTrackerPose(TrackerName, Position, q, Status);
	Rotation = q.Rotator();
	return Result;
}

bool UMocapApp::GetTrackerPose(const FString& TrackerName, FVector& Position, FQuat& Rotation, int& Status)
{
	FScopeLock Lock(&CriticalSection);
	const FMocapTracker* Tracker = GetTracker(TrackerName);
	if (Tracker != nullptr)
	{
		Position = Tracker->Position;
		Rotation = Tracker->Rotation;
		Status = Tracker->Status;
		return true;
	}
	return false;
}

const FMocapTracker* UMocapApp::GetTracker(const FString& TrackerName)
{
	return Trackers.Find(TrackerName);
}

void UMocapApp::GetAllRigidBodyNames(TArray<FString>& NameArray)
{
    FScopeLock Lock(&CriticalSection);
    RigidBodies.GetKeys(NameArray);
}

bool UMocapApp::GetRigidBody(const FString& RigidName, FVector& Position, FRotator& Rotation, int& Status, int& JointTag)
{
    FQuat q;
    bool Result = GetRigidBodyPose(RigidName, Position, q, Status, JointTag);
    Rotation = q.Rotator();
    return Result;
}

bool UMocapApp::GetRigidBodyPose(const FString& RigidName, FVector& Position, FQuat& Rotation, int& Status, int& JointTag)
{
    FScopeLock Lock(&CriticalSection);
    const FMocapRigidBody* RigidBody = GetRigidBody(RigidName);
    if (RigidBody != nullptr)
    {
        Position = RigidBody->Position;
        Rotation = RigidBody->Rotation;
        Status = RigidBody->Status;
        JointTag = RigidBody->JointTag;
        return true;
    }
    return false;
}

const FMocapRigidBody* UMocapApp::GetRigidBody(const FString& RigidName)
{
    return RigidBodies.Find(RigidName);
}

void UMocapApp::GetAllAvatarNames(TArray<FString>& NameArray)
{
    FScopeLock Lock(&CriticalSection);
    Avatars.GetKeys(NameArray);
}

bool UMocapApp::GetAvatarData(const FString& AvatarName, TArray<FVector>& LocalPositions, TArray<FRotator>& LocalRotations)
{
    const FMocapAvatar* Data = GetAvatarData(AvatarName);
    if (Data != nullptr)
    {
        int Num = Data->BoneNames.Num();
        LocalPositions.SetNum(Num);
        LocalRotations.SetNum(Num);
        for (int i = 0; i < Num; ++i)
        {
            LocalPositions[i] = Data->HasLocalPositions[i]? Data->LocalPositions[i]: Data->DefaultLocalPositions[i];
            LocalRotations[i] = Data->LocalRotation[i].Rotator();
        }
        return true;
    }
    return false;
}

bool UMocapApp::GetAvatarStaticData(const FString& AvatarName, int& RootJointTag, TArray<FName>& BoneNames, TArray<int>& BoneParents, TArray<FVector>& DefaultLocalPositions)
{
    const FMocapAvatar* Data = GetAvatarData(AvatarName);
    if (Data != nullptr)
    {
        RootJointTag = Data->RootJointTag;
        BoneNames = Data->BoneNames;
        BoneParents = Data->BoneParents;
        DefaultLocalPositions = Data->DefaultLocalPositions;
        return true;
    }
    return false;
}

const FMocapAvatar* UMocapApp::GetAvatarData(const FString& AvatarName)
{
    FScopeLock Lock(&CriticalSection);
    FMocapAvatar* avatar = Avatars.Find(AvatarName);
    return avatar;
}

void UMocapApp::GetLastErrorStr(int ErrorId, FString& LastErrorStr)
{
    MocapApi::EMCPError Err = (MocapApi::EMCPError)(ErrorId);
    switch (Err)
    {
    case MocapApi::Error_None:
        LastErrorStr = TEXT("");
        break;
    case MocapApi::Error_MoreEvent:
        LastErrorStr = TEXT("Error_MoreEvent");
        break;
    case MocapApi::Error_InsufficientBuffer:
        LastErrorStr = TEXT("Error_InsufficientBuffer");
        break;
    case MocapApi::Error_InvalidObject:
        LastErrorStr = TEXT("Error_InvalidObject");
        break;
    case MocapApi::Error_InvalidHandle:
        LastErrorStr = TEXT("Error_InvalidHandle");
        break;
    case MocapApi::Error_InvalidParameter:
        LastErrorStr = TEXT("Error_InvalidParameter");
        break;
    case MocapApi::Error_NotSupported:
        LastErrorStr = TEXT("Error_NotSupported");
        break;
    case MocapApi::Error_IgnoreUDPSetting:
        LastErrorStr = TEXT("Error_IgnoreUDPSetting");
        break;
    case MocapApi::Error_IgnoreTCPSetting:
        LastErrorStr = TEXT("Error_IgnoreTCPSetting");
        break;
    case MocapApi::Error_IgnoreBvhSetting:
        LastErrorStr = TEXT("Error_IgnoreBvhSetting");
        break;
    case MocapApi::Error_JointNotFound:
        LastErrorStr = TEXT("Error_JointNotFound");
        break;
    case MocapApi::Error_WithoutTransformation:
        LastErrorStr = TEXT("Error_WithoutTransformation");
        break;
    case MocapApi::Error_NoneMessage:
        LastErrorStr = TEXT("Error_NoneMessage");
        break;
    case MocapApi::Error_NoneParent:
        LastErrorStr = TEXT("Error_NoneParent");
        break;
    case MocapApi::Error_NoneChild:
        LastErrorStr = TEXT("Error_NoneChild");
        break;
    case MocapApi::Error_AddressInUse:
        LastErrorStr = TEXT("Error_AddressInUse");
        break;
    case MocapApi::Error_ServerNotReady:
        LastErrorStr = TEXT("Error_ServerNotReady");
        break;
    case MocapApi::Error_ClientNotReady:
        LastErrorStr = TEXT("Error_ClientNotReady");
        break;
    case MocapApi::Error_IncompleteCommand:
        LastErrorStr = TEXT("Error_IncompleteCommand");
        break;
    case MocapApi::Error_UDP:
        LastErrorStr = TEXT("Error_UDP");
        break;
    case MocapApi::Error_TCP:
        LastErrorStr = TEXT("Error_TCP");
        break;
    case MocapApi::Error_QueuedCommandFaild:
        LastErrorStr = TEXT("Error_QueuedCommandFaild");
        break;
    default:
        LastErrorStr = FString::Printf(TEXT("Error_Unknown_%d"), Err);
        break;
    }
}

const FString UMocapApp::GetLastErrorMessage()
{
    //LastError enum + ExtraErrorMsg
    FString LastErrorStr;
    GetLastErrorStr(LastError, LastErrorStr);
    return FString::Printf(TEXT("%s: %s"), *LastErrorStr, *ExtraErrorMsg);
}

const int UMocapApp::GetLastErrorId()
{
    return LastError;
}

void UMocapApp::QueueMocapCommand(const FMocapServerCommand& Cmd)
{
    QueuedCommands.Add(Cmd);
}

bool UMocapApp::HasMocapCommandInQueue()
{
    return QueuedCommands.Num() > 0;
}

bool UMocapApp::HandleAvatarUpdateEvent(uint64 Avatarhandle)
{
    MocapApi::IMCPAvatar* avatarMgr = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPAvatar_Version,
        reinterpret_cast<void**>(&avatarMgr));
    ReturnFalseIFError();

    MocapApi::IMCPJoint * mcpJoint = nullptr;
    mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPJoint_Version,
        reinterpret_cast<void **>(&mcpJoint));
    ReturnFalseIFError();

    const char* AvatarName = nullptr;
    mcpError = avatarMgr->GetAvatarName(&AvatarName, Avatarhandle);
    ReturnFalseIFError();
    if (AvatarName == nullptr)
    {
        return false;
    }
    FString Name = FUTF8ToTCHAR(AvatarName).Get();

	if (Name.IsEmpty())
	{
		ReturnFalseIFError("Avatar Name is Empty");
	}
    
    FMocapAvatar& avatar = Avatars.FindOrAdd(Name);
    avatar.Name = FName(Name);

    // Get Root Joint at Avatar [1/8/2021 brian.wang]
    MocapApi::MCPJointHandle_t RootJoint = 0;
    mcpError = avatarMgr->GetAvatarRootJoint(&RootJoint, Avatarhandle);
    ReturnFalseIFError();
    MocapApi::EMCPJointTag RootJointTag;
    mcpJoint->GetJointTag(&RootJointTag, RootJoint);
    avatar.RootJointTag = RootJointTag;
    avatar.BoneParents[RootJointTag] = MocapApi::JointTag_Invalid;

    uint32 AvatarIdx;
    mcpError = avatarMgr->GetAvatarIndex(&AvatarIdx, Avatarhandle);
    ReturnFalseIFError();
    avatar.Index = AvatarIdx;

    FMocapTimeCode& TC = avatar.ReceiveTime;
    avatarMgr->GetAvatarPostureTimeCode(&TC.Hour, &TC.Minute, &TC.Second, &TC.Frame, &TC.Rate, Avatarhandle);

	// LIHONGCE:
	if (TC.Rate == 0)
		TC.Rate = 24;

    avatar.ReceiveTicks = FDateTime::UtcNow().GetTicks();

    uint32 Count = 0;
    mcpError = avatarMgr->GetAvatarJoints(nullptr, &Count, Avatarhandle);
    ReturnFalseIFError();
    if (Count > 0)
    {
        TArray<uint64> JointsHandle;
        JointsHandle.SetNum(Count);
        mcpError = avatarMgr->GetAvatarJoints(JointsHandle.GetData(), &Count, Avatarhandle);
        ReturnFalseIFError();

		float PosX, PosY, PosZ;
		float RotX, RotY, RotZ, RotW;

        MocapApi::EMCPJointTag jointTag;
        MocapApi::EMCPJointTag parentJointTag;
        const char* cJointName = nullptr;
        for (uint64 handle : JointsHandle)
        {
            mcpJoint->GetJointTag(&jointTag, handle);
            mcpJoint->GetJointName(&cJointName, handle);
            if (cJointName)
            {
                avatar.BoneNames[jointTag] = FUTF8ToTCHAR(cJointName).Get();
            }
            parentJointTag = MocapApi::JointTag_Invalid;
            mcpJoint->GetJointParentJointTag(&parentJointTag, jointTag);
            avatar.BoneParents[jointTag] = parentJointTag;

            FVector& d = avatar.DefaultLocalPositions[jointTag];
#if 0
            mcpJoint->GetJointDefaultLocalPosition(&PosX, &PosY, &PosZ, handle);
#else
            PosX = 0;
            PosY = 0;
            PosZ = 0;
#endif
            d = FVector(PosX, PosY, PosZ);

            FVector& p = avatar.LocalPositions[jointTag];
            mcpError = mcpJoint->GetJointLocalPosition(&PosX, &PosY, &PosZ, handle);
            p = FVector(PosX, PosY, PosZ);

            avatar.HasLocalPositions[jointTag] = (mcpError == MocapApi::EMCPError::Error_None);

            FQuat& q = avatar.LocalRotation[jointTag];
            mcpJoint->GetJointLocalRotation(&RotX, &RotY, &RotZ, &RotW, handle);
            q = FQuat(RotX, RotY, RotZ, RotW);
        }
    }

    uint32 PostureIndex = 0;
    mcpError = avatarMgr->GetAvatarPostureIndex(&PostureIndex, Avatarhandle);
    ReturnFalseIFError();
    avatar.PostureIndex = PostureIndex;
    
    //CheckAvatarJoint(Avatarhandle, RootJoint, avatar);
    FMocapAppManager::GetInstance().OnRecieveMocapData(avatar.Name, this);

    // rigid bodies
    uint32 rigidbodyCount = 0;
    mcpError = avatarMgr->GetAvatarRigidBodies(nullptr, &rigidbodyCount, Avatarhandle);
    ReturnFalseIFError();
    if (rigidbodyCount > 0)
    {
        TArray<uint64> rigidHandles;
        rigidHandles.SetNum(rigidbodyCount);
        mcpError = avatarMgr->GetAvatarRigidBodies(rigidHandles.GetData(), &rigidbodyCount, Avatarhandle);
        ReturnFalseIFError();

        for (uint64 handle : rigidHandles)
        {
            HandleRigidBodyUpdateEvent(handle, AvatarIdx);
        }
    }

    return true;
}

void UMocapApp::CheckAvatarJoint(uint64 Avatarhandle, uint64 JointHandle, const FMocapAvatar& avatar)
{
#define CheckName(A, B) { \
    FString N = FUTF8ToTCHAR(B).Get(); \
    FString M(A.ToString()); \
    if (!N.Equals(M, ESearchCase::IgnoreCase)) { \
        UE_LOG(LogMocapApi, Error, TEXT("NameCheck Failed %d : except %s got %s"), jointTag, *M, *N); \
    } \
}
#define CheckVector(A, BX, BY, BZ) { \
    FVector V(BX, BY, BZ); \
    if (!V.Equals(A, 0.001)) { \
        UE_LOG(LogMocapApi, Error, TEXT("VectorCheck Failed %d : except %s got %s"), jointTag, *A.ToString(), *V.ToString());\
    } \
}
#define CheckQuat(A, BX, BY, BZ, BW) { \
    FQuat Q(BX, BY, BZ, BW); \
    if (!Q.Equals(A, 0.001)) { \
        UE_LOG(LogMocapApi, Error, TEXT("QuatCheck Failed %d : except %s got %s"), jointTag, *A.ToString(), *Q.ToString());\
    } \
}
#define CheckParent(A, B) { \
    if (!A==B) { \
        UE_LOG(LogMocapApi, Error, TEXT("ParentCheck Failed %d : except %d got %d"), jointTag, A, B); \
    } \
}
#define CheckBool(A, B) { \
    if ((A)!=(B)) { \
        UE_LOG(LogMocapApi, Error, TEXT("BoolCheck Failed %d : except %d got %d"), jointTag, (A)?1:0, (B)?1:0); \
    } \
}

    MocapApi::IMCPJoint* jointMgr = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPJoint_Version,
        reinterpret_cast<void**>(&jointMgr));

    MocapApi::EMCPJointTag jointTag;
    jointMgr->GetJointTag(&jointTag, JointHandle);

    const char* name = nullptr;
    jointMgr->GetJointName(&name, JointHandle);
    CheckName(avatar.BoneNames[jointTag], name);

    float x, y, z, w;
    mcpError = jointMgr->GetJointLocalPosition(&x, &y, &z, JointHandle);
    bool HasPos = (mcpError==MocapApi::EMCPError::Error_None);
    CheckBool(avatar.HasLocalPositions[jointTag], HasPos);
    if (HasPos || avatar.HasLocalPositions[jointTag])
    {
        CheckVector(avatar.LocalPositions[jointTag], x, y, z);
    }

    jointMgr->GetJointLocalRotation(&x, &y, &z, &w, JointHandle);
    CheckQuat(avatar.LocalRotation[jointTag], x, y, z, w);

    uint32_t numberOfChildren = 0;
    jointMgr->GetJointChild(nullptr, &numberOfChildren, JointHandle);
    if (numberOfChildren > 0) {
        TArray<MocapApi::MCPJointHandle_t> joints;
        joints.SetNumZeroed(numberOfChildren);
        jointMgr->GetJointChild(&joints[0], &numberOfChildren, JointHandle);

        MocapApi::EMCPJointTag ChildTag;
        for (auto j : joints) {
            jointMgr->GetJointTag(&ChildTag, j);
            CheckParent(jointTag, avatar.BoneParents[ChildTag]);
            CheckAvatarJoint(Avatarhandle, j, avatar);
        }
    }

#undef CheckName
#undef CheckVector
#undef CheckQuat
#undef CheckParent
}

bool UMocapApp::HandleTrackerUpdateEvent(uint64 TrackerHandle, int ReservedData)
{
	MocapApi::IMCPTracker* TrackerMgr = nullptr;
	MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPTracker_Version,
		reinterpret_cast<void**>(&TrackerMgr));
	ReturnFalseIFError();

    int TrackerCount = 0;
    mcpError = TrackerMgr->GetDeviceCount(&TrackerCount, TrackerHandle);
    ReturnFalseIFError();

	float PosX, PosY, PosZ;
	float RotX, RotY, RotZ, RotW;
	
    for (int Idx = 0; Idx < TrackerCount; ++Idx)
    {
        const char* name = nullptr;
        TrackerMgr->GetDeviceName(Idx, &name, TrackerHandle);
        FString TrackerName = FUTF8ToTCHAR(name).Get();

        FMocapTracker& tracker = Trackers.FindOrAdd(TrackerName);
        //rigid.ID = TrackerID;
        tracker.Name = FName(TrackerName);

        TrackerMgr->GetTrackerPosition(&PosX, &PosY, &PosZ, (char*)name, TrackerHandle);
        //tracker.Position.X = p.X * 100.0f;
        //tracker.Position.Y = p.Z * 100.0f;
        //tracker.Position.Z = p.Y * 100.0f;
        tracker.Position = FVector(PosX, PosY, PosZ);

        TrackerMgr->GetTrackerRotation(&RotX, &RotY, &RotZ, &RotW, (char*)name, TrackerHandle);
        //tracker.Rotation.X = q.X;
        //tracker.Rotation.Y = q.Z;
        //tracker.Rotation.Z = q.Y;
        //tracker.Rotation.W = -q.W;
        tracker.Rotation = FQuat(RotX, RotY, RotZ, RotW);
        //TrackerMgr->GetTrackerStatus(&rigid.Status, name, TrackerHandle);

        //rigid.Reserved = ReservedData;
        tracker.ReceiveTicks = FDateTime::UtcNow().GetTicks();

        FMocapAppManager::GetInstance().OnRecieveMocapData(tracker.Name, this);

        //delete name;
    }
	return true;
}

bool UMocapApp::HandleRigidBodyUpdateEvent(uint64 RigidBodyHandle, int ReservedData)
{
    MocapApi::IMCPRigidBody* RigidBodyMgr = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPRigidBody_Version,
        reinterpret_cast<void**>(&RigidBodyMgr));
    ReturnFalseIFError();

	float PosX, PosY, PosZ;
	float RotX, RotY, RotZ, RotW;

    int RigidID = 0;
    RigidBodyMgr->GetRigidBodyId(&RigidID, RigidBodyHandle);
    FString RigidName = FString::Printf(TEXT("Prop_%d"), RigidID);
    FMocapRigidBody& rigid = RigidBodies.FindOrAdd(RigidName);
    //rigid.ID = RigidID;
    rigid.Name = FName(RigidName);

    RigidBodyMgr->GetRigidBodyPosition(&PosX, &PosY, &PosZ, RigidBodyHandle);
    //rigid.Position.X = PosX;
    //rigid.Position.Y = PosZ;
    //rigid.Position.Z = PosY;
    rigid.Position = FVector(PosX, PosY, PosZ);

    RigidBodyMgr->GetRigidBodyRotation(&RotX, &RotY, &RotZ, &RotW, RigidBodyHandle);
    //rigid.Rotation.X = RotX;
    //rigid.Rotation.Y = RotZ;
    //rigid.Rotation.Z = RotY;
    //rigid.Rotation.W = -RotW;
    rigid.Rotation = FQuat(RotX, RotY, RotZ, RotW);
    RigidBodyMgr->GetRigidBodyStatus(&rigid.Status, RigidBodyHandle);
    MocapApi::EMCPJointTag Tag;
    RigidBodyMgr->GetRigidBodyJointTag(&Tag, RigidBodyHandle);
    rigid.JointTag = Tag;

    rigid.ReceiveTicks = FDateTime::UtcNow().GetTicks();

    //rigid.Reserved = ReservedData;

    FMocapAppManager::GetInstance().OnRecieveMocapData(rigid.Name, this);

    return true;
}

bool UMocapApp::HandleCommandReplyEvent(uint64 CommandHandle, int replay)
{
    MocapApi::IMCPCommand* CommandInterface = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPCommand_Version,
        reinterpret_cast<void**>(&CommandInterface));
    ReturnFalseIFError();

    MocapApi::EMCPReplay Reply = (MocapApi::EMCPReplay)replay;
    FMocapServerCommand* Cmd = nullptr;
    if (QueuedCommands.Num() > 0)
    {
        if (QueuedCommands[0].CommandHandle == CommandHandle)
        {
            Cmd = &QueuedCommands[0];
            Cmd->ResponseTime = FDateTime::UtcNow().GetTicks();
        }
    }

    if (Reply == MocapApi::EMCPReplay::MCPReplay_Result)
    {
        const char* msg = nullptr;
        mcpError = CommandInterface->GetCommandResultMessage(&msg, CommandHandle);
        FString MsgStr = FUTF8ToTCHAR(msg).Get();
        
        uint32 code = 0;
        mcpError = CommandInterface->GetCommandResultCode(&code, CommandHandle);

        UE_LOG(LogMocapApi, Log, TEXT("Get Result for Command CommandHandle %lld"), CommandHandle);
        if (Cmd)
        {
            Cmd->Result = FString::Printf(TEXT("Code %d\nMsg: %s"), code, *MsgStr);
            Cmd->OnResult.Broadcast(code, MsgStr);
            PushCommandToHistory(*Cmd);
            QueuedCommands.RemoveAt(0);
        }

        // destroy handle
        CommandInterface->DestroyCommand(CommandHandle);
    }
    else if (Reply == MocapApi::EMCPReplay::MCPReplay_Running)
    {
        MocapApi::IMCPCalibrateMotionProgress* CalibrateMotionProgress = nullptr;
        mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPCalibrateMotionProgress_Version,
            reinterpret_cast<void**>(&CalibrateMotionProgress));
        ReturnFalseIFError();

        if (Cmd && Cmd->Cmd == EMCCommandType::CalibrateMotion)
        {
            const uint32_t maxPoseCnt = 256;
            uint32_t step = 0;
            uint32_t substep = 0;
            uint32_t subsubstep = 0;
            uint32_t lenOfPose = maxPoseCnt;
            char poseStr[maxPoseCnt+1];

            if (Cmd->ProgressHandle == 0)
            {
                MocapApi::MCPCalibrateMotionProgressHandle_t _calibrateMotionProgressHandle;
                mcpError = CommandInterface->GetCommandProgress(MocapApi::CommandProgress_CalibrateMotion,
                    reinterpret_cast<intptr_t>(&_calibrateMotionProgressHandle), CommandHandle);
                ReturnFalseIFError();
                Cmd->ProgressHandle = _calibrateMotionProgressHandle;

                uint32_t countOfSupportPoses = 0;
                mcpError = CalibrateMotionProgress->GetCalibrateMotionProgressCountOfSupportPoses(
                    &countOfSupportPoses, _calibrateMotionProgressHandle);
                for (uint32_t i = 0; i < countOfSupportPoses; ++i) {
                    lenOfPose = maxPoseCnt;
                    mcpError = CalibrateMotionProgress->GetCalibrateMotionProgressNameOfSupportPose(
                        poseStr, &lenOfPose, i, _calibrateMotionProgressHandle);
                    poseStr[lenOfPose] = '\0';
                    Cmd->ProgressChain += FString::Printf(TEXT("%s->"), UTF8_TO_TCHAR(poseStr));
                }
            }

            mcpError = CalibrateMotionProgress->GetCalibrateMotionProgressStepOfCurrentPose(
                &step, poseStr, &lenOfPose, Cmd->ProgressHandle);
            poseStr[lenOfPose] = '\0';
            FString PoseName = UTF8_TO_TCHAR(poseStr);
            FString PoseSubStepName;
            switch (step)
            {
            case MocapApi::CalibrateMotionProgressStep_Prepare:
                //ASSERT_TRUE(false);
                break;
            case MocapApi::CalibrateMotionProgressStep_Countdown:
                {
                    mcpError = CalibrateMotionProgress->GetCalibrateMotionProgressCountdownOfCurrentPose(
                        &substep, poseStr, &lenOfPose, Cmd->ProgressHandle);
                    poseStr[lenOfPose] = '\0';
                    PoseSubStepName = FString::Printf(TEXT("[Countdown of %s %d]"), UTF8_TO_TCHAR(poseStr), substep);
                }
                break;
            case MocapApi::CalibrateMotionProgressStep_Progress:
                {
                    mcpError = CalibrateMotionProgress->GetCalibrateMotionProgressProgressOfCurrentPose(
                        &substep, poseStr, &lenOfPose, Cmd->ProgressHandle);
                    poseStr[lenOfPose] = '\0';
                    PoseSubStepName = FString::Printf(TEXT("[Progress of %s %d]"), UTF8_TO_TCHAR(poseStr), substep);
                }
                break;
            default:
                //ASSERT_TRUE(false);
                break;
            }
            FString ProgressString = FString::Printf(TEXT("%s step %d %s:%d:%d:%d"),
                *PoseName, step, *PoseSubStepName, step, substep, subsubstep);

            Cmd->OnProgress.Broadcast(Cmd->ProgressChain, ProgressString, PoseName, step, substep, subsubstep);
        }
        else
        {
            UE_LOG(LogMocapApi, Log, TEXT("Get Running for Command CommandHandle %lld, but not in QueuedCommands or is not CalibrateMotion Command"), CommandHandle);
        }
    }
    else if (Reply == MocapApi::EMCPReplay::MCPReplay_Response)
    {
        UE_LOG(LogMocapApi, Log, TEXT("Get Response for Command CommandHandle %lld"), CommandHandle);
    }
    
    return true;
}

void UMocapApp::PrepareAndSendMocapCommand(MocapApi::IMCPApplication* mcpApplication)
{
    if (QueuedCommands.Num() > 0)
    {
        FMocapServerCommand& Cmd = QueuedCommands[0];
        if (Cmd.CommandHandle == 0)
        {
            MocapApi::IMCPCommand* CommandInterface = nullptr;
            MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPCommand_Version,
                reinterpret_cast<void**>(&CommandInterface));
            ReturnIFError();

            MocapApi::MCPCommandHandle_t command;
            CommandInterface->CreateCommand((int)Cmd.Cmd, &command);
            FString CmdParams;
            UEnum* EMCCommandParamEnum = StaticEnum<EMCCommandParamName>();
            for (auto It : Cmd.Params)
            {
                mcpError = CommandParamBuildMap[It.Key](CommandInterface, command, It.Value);

                CmdParams += FString::Printf(TEXT("%s=%s "), *EMCCommandParamEnum->GetValueAsString(It.Key), *It.Value);
                ReturnIFError();
            }
            MocapApi::MCPApplicationHandle_t appcliation = AppHandle;
            mcpError = mcpApplication->QueuedServerCommand(command, appcliation);
            
            UEnum* EMCCommandTypeEnum = StaticEnum<EMCCommandType>();
            FString CmdName = EMCCommandTypeEnum->GetValueAsString(Cmd.Cmd);
            UE_LOG(LogMocapApi, Log, TEXT("QueuedServerCommand app: %s[%lld] Cmd %s[%lld] (%s) result %d"),
                *AppName,
                appcliation,
                *CmdName,
                command,
                *CmdParams,
                mcpError
            );
            ReturnIFError();
            Cmd.CommandHandle = command;
            Cmd.SendTime = FDateTime::UtcNow().GetTicks();
            Cmd.ResponseTime = Cmd.SendTime;
        }
    }
}

void UMocapApp::HandleMocapCommandsTimeout()
{
    if (QueuedCommands.Num() > 0)
    {
        FMocapServerCommand& Cmd = QueuedCommands[0];
        if (Cmd.CommandHandle != 0)
        {
            // has command and already send to axis
            // timeout duratiuon default 30 seconds
            int64 TimeoutDur = FTimespan(0, 0, 20).GetTicks();
            int64 Delta = FDateTime::UtcNow().GetTicks() - Cmd.ResponseTime;
            if (Delta > TimeoutDur)
            {
                FString MsgStr = TEXT("Timeout");
                uint32 code = 999;// fake timeout error code
                Cmd.Result = FString::Printf(TEXT("Code %d\nMsg: %s"), code, *MsgStr);
                Cmd.OnResult.Broadcast(code, MsgStr);
                PushCommandToHistory(Cmd);
                QueuedCommands.RemoveAt(0);
            }
        }
    }
}

void UMocapApp::PushCommandToHistory(const FMocapServerCommand& Cmd)
{
    if (CommandsHistory.Num() < MaxCommandHistory)
    {
        CommandsHistory.Add(Cmd);
    }
    else
    {
        CommandsHistory[LastCommandHistoryIndex] = Cmd;
    }
    LastCommandHistoryIndex = (LastCommandHistoryIndex + 1) % MaxCommandHistory;
}

static TArray<FName> RecordNotifyNames = {
    TEXT("Notify_RecordStarted"),
    TEXT("Notify_RecordStoped"),
    TEXT("Notify_RecordFinished"),
};
bool UMocapApp::HandleRecordNotifyEvent(int NotifyType, uint64 notifyHandle)
{
    MocapApi::IMCPRecordNotify* notifyMgr = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPRecordNotify_Version,
        reinterpret_cast<void**>(&notifyMgr));
    ReturnFalseIFError();

    FMocapRecordNotify n;
    n.NotifyType = (NotifyType>=0 && NotifyType< RecordNotifyNames.Num())? RecordNotifyNames[NotifyType]: NAME_None;
    const char* name = nullptr;
    notifyMgr->RecordNotifyGetTakeName(&name, notifyHandle);
    if (name)
    {
        FUTF8ToTCHAR conv(name);
        n.TakeName = conv.Get();
    }
    name = nullptr;
    notifyMgr->RecordNotifyGetTakePath(&name, notifyHandle);
    if (name)
    {
        FUTF8ToTCHAR conv(name);
        n.TakePath = conv.Get();
    }
    name = nullptr;
    notifyMgr->RecordNotifyGetTakeSaveDir(&name, notifyHandle);
    if (name)
    {
        FUTF8ToTCHAR conv(name);
        n.TakeSaveDir = conv.Get();
    }
    name = nullptr;
    notifyMgr->RecordNotifyGetTakeFileSuffix(&name, notifyHandle);
    if (name)
    {
        FUTF8ToTCHAR conv(name);
        n.TakeFileSuffix = conv.Get();
    }

    //RecordNotifies.Enqueue(n);

    FMocapRecordNotify& item = n;
    //RecordNotifies.Dequeue(item);
    UE_LOG(LogMocapApi, Log, TEXT("Receive Record NotifyEvent %s : TakeName %s, path %s dir %s suffix %s"),
        *item.NotifyType.ToString(),
        *item.TakeName,
        *item.TakePath,
        *item.TakeSaveDir,
        *item.TakeFileSuffix);
    UNeuronLiveLinkBPLibrary::HandleMocapRecordNotifyEvent(item);

    return true;
}

//void UMocapApp::TreatNotifyEvents()
//{
//    while (!RecordNotifies.IsEmpty())
//    {
//        FMocapRecordNotify item;
//        RecordNotifies.Dequeue(item);
//
//        UE_LOG(LogMocapApi, Log, TEXT("Receive Record NotifyEvent %s : TakeName %s, path %s dir %s suffix %s"),
//            *item.NotifyType.ToString(),
//            *item.TakeName,
//            *item.TakePath,
//            *item.TakeSaveDir,
//            *item.TakeFileSuffix);
//        UNeuronLiveLinkBPLibrary::HandleMocapRecordNotifyEvent(item);
//    }
//}

void UMocapApp::DumpData()
{
    UE_LOG(LogMocapApi, Log, TEXT("Name: %s %s Connected: %s"),
        *AppName,
        *GetConnectionString(),
        IsConnecting? TEXT("TRUE"): TEXT("FALSE")
    );
    UE_LOG(LogMocapApi, Log, TEXT("Trackers Num: %d RigidBodies Num: %d Avatars Num: %d"),
        Trackers.Num(),
        RigidBodies.Num(),
        Avatars.Num()
    );
    UE_LOG(LogMocapApi, Log, TEXT("==== Trackers ===="));
    for (auto& tracker : Trackers)
    {
        const FMocapTracker& t = tracker.Value;
        UE_LOG(LogMocapApi, Log, TEXT("%s: %d L%s R%s"),
            *t.Name.ToString(), t.Status, *t.Position.ToString(), *t.Rotation.ToString()
        );
    }
    UE_LOG(LogMocapApi, Log, TEXT("==== RigidBodies ===="));
    for (auto& rigid : RigidBodies)
    {
        const FMocapRigidBody& r = rigid.Value;
        UE_LOG(LogMocapApi, Log, TEXT("%s: %d L%s R%s"),
            *r.Name.ToString(), r.Status, *r.Position.ToString(), *r.Rotation.ToString()
        );
    }
    UE_LOG(LogMocapApi, Log, TEXT("==== Avatars ===="));
    for (auto& It : Avatars)
    {
        const FMocapAvatar& a = It.Value;
        UE_LOG(LogMocapApi, Log, TEXT("%d: %s %d"),
            a.Index, *a.Name.ToString(), a.RootJointTag
        );
        const int JointCount = a.BoneNames.Num();
        for (int i = 0; i < JointCount; ++i)
        {
            UE_LOG(LogMocapApi, Log, TEXT("%d(%s):%d L(%s) R(%s) D(%s)"),
                i,
                *a.BoneNames[i].ToString(),
                a.BoneParents[i],
                *a.LocalPositions[i].ToString(),
                *a.LocalRotation[i].ToString(),
                *a.DefaultLocalPositions[i].ToString()
            );
        }
    }
    UEnum* EMCCommandTypeEnum = StaticEnum<EMCCommandType>();
    UEnum* EMCCommandParamEnum = StaticEnum<EMCCommandParamName>();
    if (QueuedCommands.Num() > 0)
    {
        UE_LOG(LogMocapApi, Log, TEXT("==== Command Queue ===="));
        
        for (auto& Cmd : QueuedCommands)
        {
            FString CmdName = EMCCommandTypeEnum->GetValueAsString(Cmd.Cmd);
            UE_LOG(LogMocapApi, Log, TEXT("Cmd %s handle %lld SendTime %lld"), *CmdName, Cmd.CommandHandle, Cmd.SendTime);
            if (Cmd.Params.Num() > 0)
            {
                for (auto& It : Cmd.Params)
                {
                    FString P = EMCCommandParamEnum->GetValueAsString(It.Key);
                    UE_LOG(LogMocapApi, Log, TEXT("    Param %s - %s"), *P, *It.Value);
                }
            }
        }
    }
    if (CommandsHistory.Num() > 0)
    {
        UE_LOG(LogMocapApi, Log, TEXT("==== Commands History ===="));
        int CommandCnt = FMath::Min(MaxCommandHistory, CommandsHistory.Num());
        for (int i = 0; i < CommandCnt; ++i)
        {
            int realIndex = (LastCommandHistoryIndex + MaxCommandHistory - 1 - i) % MaxCommandHistory;
            auto& Cmd = CommandsHistory[realIndex];
            FString CmdName = EMCCommandTypeEnum->GetValueAsString(Cmd.Cmd);
            UE_LOG(LogMocapApi, Log, TEXT("Cmd %s handle %lld SendTime %lld"), *CmdName, Cmd.CommandHandle, Cmd.SendTime);
            if (Cmd.Params.Num() > 0)
            {
                for (auto& It : Cmd.Params)
                {
                    FString P = EMCCommandParamEnum->GetValueAsString(It.Key);
                    UE_LOG(LogMocapApi, Log, TEXT("    Param %s - %s"), *P, *It.Value);
                }
            }
            UE_LOG(LogMocapApi, Log, TEXT("    Result %s"), *Cmd.Result);
        }
    }
}

TArray<FName> UMocapApp::GetAvatarBuildinBoneNames()
{
    if (AvatarBoneNames.Num() <= 0)
    {
        InitAvatarBuildinInfo();
    }
    return AvatarBoneNames;
}

TArray<int> UMocapApp::GetAvatarBuildinParentIds()
{
    if (AvatarBoneParents.Num() <= 0)
    {
        InitAvatarBuildinInfo();
    }
    return AvatarBoneParents;
}

void UMocapApp::InitAvatarBuildinInfo()
{
    MocapApi::IMCPJoint * mcpJoint = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPJoint_Version,
        reinterpret_cast<void **>(&mcpJoint));

    const int JointCount = MocapApi::JointTag_JointsCount;
    AvatarBoneNames.SetNumUninitialized(JointCount);
    AvatarBoneParents.SetNumUninitialized(JointCount);
    const char* TagName;
    MocapApi::EMCPJointTag ParentTag;
    for (int joint = 0; joint < JointCount; ++joint)
    {
        mcpError = mcpJoint->GetJointNameByTag(&TagName, (MocapApi::EMCPJointTag)joint);
        if (mcpError == MocapApi::Error_None)
        {
            FUTF8ToTCHAR conv(TagName);
            AvatarBoneNames[joint] = conv.Get();
        }
        else
        {
            AvatarBoneNames[joint] = TEXT("Unknown");
        }

        mcpError = mcpJoint->GetJointParentJointTag(&ParentTag, (MocapApi::EMCPJointTag)joint);
        if (mcpError == MocapApi::Error_None)
        {
            AvatarBoneParents[joint] = (int)ParentTag;
        }
        else
        {
            AvatarBoneParents[joint] = (int)MocapApi::JointTag_Invalid;
        }
    }
}
