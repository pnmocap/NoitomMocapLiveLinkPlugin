#include "MocapStructs.h"
#include "MocapApi.h"
#include "Misc/ScopeLock.h"

#define ReturnIFError(...) if (mcpError!=MocapApi::Error_None) { \
    LastError = mcpError; \
    ExtraErrorMsg = FString::Printf(TEXT("(%s@%d)%s"), __FILE__, __LINE__, __VA_ARGS__); \
    return; \
}

#define ReturnFalseIFError(...) if (mcpError!=MocapApi::Error_None) { \
    LastError = mcpError; \
    ExtraErrorMsg = FString::Printf(TEXT("(%s@%d)%s"), __FILE__, __LINE__, __VA_ARGS__); \
    return false; \
}

FMocapAvatar::FMocapAvatar()
    : Index(-1)
    , Name()
    , RootJointTag(MocapApi::JointTag_Invalid)
{
    const int Count = MocapApi::JointTag_JointsCount;
    BoneNames.SetNum(Count);
    BoneParents.SetNum(Count);
    DefaultLocalPositions.SetNum(Count);
    LocalPositions.SetNum(Count);
    LocalRotation.SetNum(Count);

    for (int i = 0; i < Count; ++i)
    {
        BoneParents[i] = -1;
    }
}

const FString UMocapApp::GetConnectionString()
{
    //AppSettings.
    FString ProtocolStr = TEXT("udp");
    if (AppSettings.Protocol == EAppProtocol::TCP)
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

    bool isUDP = AppSettings.Protocol == EAppProtocol::UDP;
    const char* IPAddress = TCHAR_TO_UTF8(*AppSettings.RemoteIP);
    int Port = AppSettings.Port;
    if (isUDP)
    {
        mcpError = mcpSettings->SetSettingsUDP(Port, mcpSettingsHandle);
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

        mcpError = mcpApplication->SetApplicationRenderSettings(renderSettingsHandle, appcliation);
        ReturnFalseIFError();
        mcpError = renderSettings->DestroyRenderSettings(renderSettingsHandle);
        ReturnFalseIFError();
    }

    AppHandleInternal = FString::Printf(TEXT("%lld"), appcliation);

    mcpError = mcpApplication->OpenApplication(appcliation);
    ReturnFalseIFError();

    return true;
}

void UMocapApp::Disconnect()
{
    // reset Error
    LastError = 0;
    ExtraErrorMsg = TEXT("");

    MocapApi::MCPApplicationHandle_t appcliation;
    appcliation = FCString::Strtoui64(*AppHandleInternal, nullptr, 10);

    MocapApi::IMCPApplication* mcpApplication = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPApplication_Version,
        reinterpret_cast<void**>(&mcpApplication));
    ReturnIFError();

    mcpError = mcpApplication->CloseApplication(appcliation);
    ReturnIFError();

    AppHandleInternal = TEXT("0");
}

bool UMocapApp::PollEvents()
{
    // reset Error
    LastError = 0;
    ExtraErrorMsg = TEXT("");

    MocapApi::MCPApplicationHandle_t appcliation;
    appcliation = FCString::Strtoui64(*AppHandleInternal, nullptr, 10);

    MocapApi::IMCPApplication* mcpApplication = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPApplication_Version,
        reinterpret_cast<void**>(&mcpApplication));
    ReturnFalseIFError("Get mcpApplication Class");

    TArray<MocapApi::MCPEvent_t> events;
    uint32_t unEvent = 0;

    mcpError = mcpApplication->PollApplicationNextEvent(nullptr, &unEvent, appcliation);
    ReturnFalseIFError("PollApplicationNextEvent Get num");
    if (unEvent > 0) {
        events.AddUninitialized(unEvent);
        for (auto & e : events) {
            e.size = sizeof(MocapApi::MCPEvent_t);
        }
        mcpError = mcpApplication->PollApplicationNextEvent(events.GetData(), &unEvent, appcliation);
        ReturnFalseIFError("PollApplicationNextEvent");
    }
    if (unEvent > 0) {
        FScopeLock Lock(&CriticalSection);
        for (const auto & e : events) {
            if (e.eventType == MocapApi::MCPEvent_AvatarUpdated) {
                HandleAvatarUpdateEvent(e.eventData.motionData.avatarHandle);
            }
            else if (e.eventType == MocapApi::MCPEvent_RigidBodyUpdated) {
                //HandleRigidBodyUpdateEvent()
            }
        }
    }
    return true;
}

void UMocapApp::GetAllRigidBodyIDs(TArray<int>& IDArray)
{
    FScopeLock Lock(&CriticalSection);
    RigidBodies.GetKeys(IDArray);
}

bool UMocapApp::GetRigidBody(const int ID, FVector& Position, FRotator& Rotation, int& Status, int& JointTag)
{
    FQuat q;
    bool Result = GetRigidBodyPose(ID, Position, q, Status, JointTag);
    Rotation = q.Rotator();
    return Result;
}

bool UMocapApp::GetRigidBodyPose(const int ID, FVector& Position, FQuat& Rotation, int& Status, int& JointTag)
{
    FScopeLock Lock(&CriticalSection);
    const FMocapRigidBody* RigidBody = RigidBodies.Find(ID);
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

void UMocapApp::GetAllAvatarNames(TArray<FString>& NameArray)
{
    FScopeLock Lock(&CriticalSection);
    Avatars.GetKeys(NameArray);
}

bool UMocapApp::GetAvatarData(const FString& AvatarName, TArray<FVector>& LocalPositions, TArray<FRotator>& LocalRotation)
{
    const FMocapAvatar* Data = GetAvatarData(AvatarName);
    if (Data != nullptr)
    {
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

const FString UMocapApp::GetLastErrorMessage()
{
    //LastError enum + ExtraErrorMsg
    FString LastErrorStr;
    MocapApi::EMCPError Err = (MocapApi::EMCPError)(LastError);
    switch (Err)
    {
    case MocapApi::Error_None:
        return TEXT("");
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
    default:
        LastErrorStr = TEXT("Error_Unknown");
        break;
    }
    return FString::Printf(TEXT("%s: %s"), *LastErrorStr, *ExtraErrorMsg);
}

bool UMocapApp::HandleAvatarUpdateEvent(uint64 Avatarhandle)
{
    MocapApi::IMCPAvatar* avatarMgr = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPAvatar_Version,
        reinterpret_cast<void**>(&avatarMgr));
    ReturnFalseIFError();

    const char* AvatarName = nullptr;
    mcpError = avatarMgr->GetAvatarName(&AvatarName, Avatarhandle);
    ReturnFalseIFError();
    if (AvatarName == nullptr)
    {
        return false;
    }
    FString Name = UTF8_TO_TCHAR(AvatarName);
    
    FMocapAvatar& avatar = Avatars.FindOrAdd(Name);
    avatar.Name = Name;

    // Get Root Joint at Avatar [1/8/2021 brian.wang]
    MocapApi::MCPJointHandle_t RootJoint = 0;
    mcpError = avatarMgr->GetAvatarRootJoint(&RootJoint, Avatarhandle);
    ReturnFalseIFError();
    avatar.RootJointTag = RootJoint;

    uint32 AvatarIdx;
    mcpError = avatarMgr->GetAvatarIndex(&AvatarIdx, Avatarhandle);
    ReturnFalseIFError();
    avatar.Index = AvatarIdx;

    uint32 Count = 0;
    mcpError = avatarMgr->GetAvatarJoints(nullptr, &Count, Avatarhandle);
    ReturnFalseIFError();
    if (Count > 0)
    {
        TArray<uint64> JointsHandle;
        JointsHandle.SetNum(Count);
        mcpError = avatarMgr->GetAvatarJoints(nullptr, &Count, Avatarhandle);
        ReturnFalseIFError();

        MocapApi::IMCPJoint * mcpJoint = nullptr;
        mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPJoint_Version,
            reinterpret_cast<void **>(&mcpJoint));
        ReturnFalseIFError();

        MocapApi::EMCPJointTag jointTag;
        MocapApi::EMCPJointTag parentJointTag;
        const char* cJointName = nullptr;
        for (uint64 handle : JointsHandle)
        {
            mcpJoint->GetJointTag(&jointTag, handle);
            mcpJoint->GetJointName(&cJointName, handle);
            if (cJointName)
            {
                avatar.BoneNames[jointTag] = UTF8_TO_TCHAR(cJointName);
            }
            parentJointTag = MocapApi::JointTag_Invalid;
            mcpJoint->GetJointParentJointTag(&parentJointTag, jointTag);
            avatar.BoneParents[jointTag] = parentJointTag;

            FVector& d = avatar.DefaultLocalPositions[jointTag];
            mcpJoint->GetJointDefaultLocalPosition(&d.X, &d.Y, &d.Z, handle);

            FVector& p = avatar.LocalPositions[jointTag];
            mcpJoint->GetJointLocalPosition(&p.X, &p.Y, &p.Z, handle);

            FQuat& q = avatar.LocalRotation[jointTag];
            mcpJoint->GetJointLocalRotation(&q.X, &q.Y, &q.Z, &q.W, handle);
        }
    }
    
    // rigid bodies
    uint32 rigidbodyCount = 64;
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
            HandleRigidBodyUpdateEvent(handle);
        }
    }

    return true;
}

bool UMocapApp::HandleRigidBodyUpdateEvent(uint64 RigidBodyHandle)
{
    MocapApi::IMCPRigidBody* RigidBodyMgr = nullptr;
    MocapApi::EMCPError mcpError = MocapApi::MCPGetGenericInterface(MocapApi::IMCPRigidBody_Version,
        reinterpret_cast<void**>(&RigidBodyMgr));
    ReturnFalseIFError();

    int RigidID = 0;
    RigidBodyMgr->GetRigidBodyId(&RigidID, RigidBodyHandle);
    FMocapRigidBody& rigid = RigidBodies.FindOrAdd(RigidID);
    rigid.ID = RigidID;
    RigidBodyMgr->GetRigidBodyPosition(&rigid.Position.X, &rigid.Position.Y, &rigid.Position.Z, RigidBodyHandle);
    FQuat& q = rigid.Rotation;
    RigidBodyMgr->GetRigidBodyRotation(&q.X, &q.Y, &q.Z, &q.W, RigidBodyHandle);
    RigidBodyMgr->GetRigidBodyStatus(&rigid.Status, RigidBodyHandle);
    MocapApi::EMCPJointTag Tag;
    RigidBodyMgr->GetRigidBodyJointTag(&Tag, RigidBodyHandle);
    rigid.JointTag = Tag;
    return true;
}
