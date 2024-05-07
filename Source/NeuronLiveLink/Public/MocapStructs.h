// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "MocapStructs.generated.h"

/**
 * EMCBvhRotationOrder is the unreal type for MocapApi EMCPBvhRotation 
 */
UENUM(BlueprintType)
enum class EMCBvhRotationOrder : uint8
{
    XYZ = 0,
    XZY = 1,
    YXZ = 2,
    YZX = 3,
    ZXY = 4,
    ZYX = 5,
};

/**
 * EMCBvhDataFormat is the unreal type for MocapApi EMCPBvhData
 */
UENUM(BlueprintType)
enum class EMCBvhDataFormat : uint8
{
    String = 0,
    BinaryWithOldFrameHeader = 1,
    Binary = 2,
    Mask_LegacyHumanHierarchy = 4,
};

/**
 * EMCAppProtocol is the protpocol used for MocapApi
 */
UENUM(BlueprintType)
enum class EMCAppProtocol : uint8
{
    UDP = 0,
    TCP = 1,
};

/**
 * FMCAppSettings is the unreal type for MocapApi IMCPSettings
 */
USTRUCT(BlueprintType)
struct FMCAppSettings
{
    GENERATED_BODY()

    // MocapApp name, used for query
    UPROPERTY()
    FString Name;

    UPROPERTY()
    EMCAppProtocol Protocol = EMCAppProtocol::UDP;

    // Remote server IP when use TCP protocol
    UPROPERTY()
    FString RemoteIP = TEXT("127.0.0.1");

    // Port used in mocapapi, remote server port for TCP, local port for UDP
    UPROPERTY()
    int Port = 7003;

    UPROPERTY()
    int RecvPort = 7004;

    UPROPERTY()
    EMCBvhRotationOrder BvhRotation = EMCBvhRotationOrder::YXZ;

    UPROPERTY()
    EMCBvhDataFormat bvhDataFormat = EMCBvhDataFormat::Binary;
};

/**
 * EMCUpAxis is the unreal type for MocapApi EMCPUpVector
 */
UENUM(BlueprintType)
enum class EMCUpAxis : uint8 {
    Unknown = 0,
    X = 1,
    Y = 2,
    Z = 3
};

/**
 * EMCFrontAxis is the unreal type for MocapApi EMCPFrontVector
 */
UENUM(BlueprintType)
enum class EMCFrontAxis : uint8 {
    Unknown = 0,
    ParityEven = 1, 
    ParityOdd = 2
};

/**
 * EMCCoordSystem is the unreal type for MocapApi EMCPCoordSystem
 */
UENUM(BlueprintType)
enum class EMCCoordSystem : uint8 {
    RightHanded = 0,
    LeftHanded
};

/**
 * EMCRotatingDirection is the unreal type for MocapApi EMCRotatingDirection
 */
UENUM(BlueprintType)
enum class EMCRotatingDirection : uint8 {
    CW = 0,
    CCW,
};

/**
 * EMCDistanceUnit is the unreal type for MocapApi EMCPUnit
 */
UENUM(BlueprintType)
enum class EMCDistanceUnit : uint8 
{
    Centimeter = 0,
    Meter,
};

/**
 * FMCRenderSetting is the unreal type for MocapApi IMCPRenderSettings
 */
USTRUCT(BlueprintType)
struct FMCRenderSetting
{
    GENERATED_BODY()

    UPROPERTY()
    EMCUpAxis Up = EMCUpAxis::Z;

    UPROPERTY()
    EMCFrontAxis Front = EMCFrontAxis::ParityEven;

    UPROPERTY()
    EMCCoordSystem Coord = EMCCoordSystem::LeftHanded;

    UPROPERTY()
    EMCRotatingDirection RotatingDir = EMCRotatingDirection::CW;

    UPROPERTY()
    EMCDistanceUnit Unit = EMCDistanceUnit::Centimeter;
};

/**
 * FMocapRigidBody is the unreal type for MocapApi IMCPRigidBody
 */
USTRUCT(BlueprintType)
struct FMocapRigidBody
{
    GENERATED_BODY()

    UPROPERTY()
    FName Name;

    //UPROPERTY()
    //int ID;

    UPROPERTY()
    FVector Position;

    UPROPERTY()
    FQuat Rotation;

    UPROPERTY()
    int Status;
    
    UPROPERTY()
    int JointTag;

    int64 ReceiveTicks;
    //UPROPERTY()
    //int Reserved; // used to store avatar id
};

/**
 * FMocapTracker is the unreal type for MocapApi IMCPTracker
 */
USTRUCT(BlueprintType)
struct FMocapTracker
{
    GENERATED_BODY()

    UPROPERTY()
    FName Name;

    //UPROPERTY()
    //int ID;

    UPROPERTY()
    FVector Position;

    UPROPERTY()
    FQuat Rotation;

    UPROPERTY()
    int Status;

    int64 ReceiveTicks;
};

// timecode struct
struct FMocapTimeCode
{
    uint32 Hour;
    uint32 Minute;
    uint32 Second;
    uint32 Frame;
    uint32 Rate;
};


/**
 * FMocapAvatar is the unreal type for MocapApi IMCPAvatar
 */
USTRUCT()
struct FMocapAvatar
{
    GENERATED_BODY()

    FMocapAvatar();

    UPROPERTY()
    int Index;

    UPROPERTY()
    FName Name;

    UPROPERTY()
    int RootJointTag;

    FMocapTimeCode ReceiveTime;
    int64 ReceiveTicks;

    UPROPERTY()
    TArray<FName> BoneNames; //[tag] = name

    UPROPERTY()
    TArray<int> BoneParents; //[tag] = parentTag -1 if is root

    UPROPERTY()
    TArray<bool> HasLocalPositions;

    UPROPERTY()
    TArray<FVector> DefaultLocalPositions;

    UPROPERTY()
    TArray<FVector> LocalPositions;

    UPROPERTY()
    TArray<FQuat> LocalRotation;

    UPROPERTY()
    uint32 PostureIndex;
};

/**
 * FMocapRecordNotify is the unreal type for MocapApi IMCPRecordNotify
 */
USTRUCT(BlueprintType)
struct FMocapRecordNotify
{
    GENERATED_BODY()

    UPROPERTY()
        FName NotifyType;

    UPROPERTY()
        FString TakeName;

    UPROPERTY()
        FString TakePath;

    UPROPERTY()
        FString TakeSaveDir;

    UPROPERTY()
        FString TakeFileSuffix;
};

/**
 * EMCCommandType is the unreal type for MocapApi EMCPCommand
 */
UENUM(BlueprintType)
enum class EMCCommandType : uint8
{
    StartCapture,
    StopCapture,
    ZeroPosition,
    CalibrateMotion,
    StartRecored,
    StopRecored,
    ResumeOriginalPosture,

    // commands below are alias on user side, do not have such commands in mocapapi 
    // CalibrateMotion for manual
    GetManualCaliPoses = 200,
    ManualCalibrateStep,
    ManualCalibrateFinish,
};

/**
 * EMCCommandExtraFlag is the unreal type for MocapApi EMCPCommandStopCatpureExtraFlag etc.
 */
UENUM(BlueprintType)
enum class EMCCommandExtraFlag : uint8
{
    StopCatpureExtraFlag_SensorsModulesPowerOff,
    StopCatpureExtraFlag_SensorsModulesHibernate,
};

UENUM(BlueprintType)
enum class EMCCommandParamName : uint8
{
    ParamStopCatpureExtraFlag,
    ParamDeviceRadio,
    ParamAvatarName,
    ParamTakeName,

    ParamCalibrateMotionFlag,
    ParamCalibrateMotionOperation,
};

DECLARE_MULTICAST_DELEGATE_TwoParams(FOnMocapServerCommandResult, int/*Code*/, const FString&/*Result*/)
DECLARE_MULTICAST_DELEGATE_SixParams(FOnMocapServerCommandProgress, const FString&/*SupportPoses*/, const FString&/*ProgressDesc*/, const FString&/*CurrentPose*/, int/*StepOfPose*/, int/*SubStepOfPose*/, int/*SubSubStepOfPose*/)

USTRUCT(BlueprintType)
struct FMocapServerCommand
{
    GENERATED_BODY()

    FMocapServerCommand()
    {
        CommandHandle = 0;
        ProgressHandle = 0;
        SendTime = 0;
        IsManualCalibrating = false;
        IsManualCaliFisrtStep = false;
    }

    UPROPERTY()
    EMCCommandType Cmd;

    UPROPERTY()
    TMap<EMCCommandParamName, FString> Params;

    UPROPERTY()
    FString Result;

    FString ProgressChain;

    FOnMocapServerCommandResult OnResult;

    FOnMocapServerCommandProgress OnProgress;

    uint64 CommandHandle;

    uint64 ProgressHandle;

    int64 SendTime;

    int64 ResponseTime;

    bool IsManualCalibrating;
    bool IsManualCaliFisrtStep; //first step to get all poses to calibrate. Cmd is GetManualCaliPoses or CalibrateMotion by setting ParamCalibrateMotionFlag to MocapApi::CalibrateMotionFlag_ManualNextStep(1)
};

namespace MocapApi
{
    class IMCPApplication;
}

/**
 * UMocapApp is the unreal type for MocapApi IMCPApplication
 */
UCLASS()
class NEURONLIVELINK_API UMocapApp : public UObject
{
    GENERATED_BODY()

public:
    UMocapApp();

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MocapApi")
        FString AppName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MocapApi")
        FMCAppSettings AppSettings;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MocapApi")
        FMCRenderSetting RenderSettings;

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    const FString GetConnectionString();

    // connect to server side
    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool Connect();

    // disconnect from server side
    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void Disconnect();

    // handle events
    bool PollEvents();

    // query all tracker names for this mocapapp
	UFUNCTION(BlueprintCallable, Category = MocapApi)
	void GetAllTrackerNames(TArray<FString>& NameArray);

    // query tracker data by name
	UFUNCTION(BlueprintCallable, Category = MocapApi)
	bool GetTracker(const FString& TrackerName, FVector& Position, FRotator& Rotation, int& Status);

    // query tracker data by name
	bool GetTrackerPose(const FString& TrackerName, FVector& Position, FQuat& Rotation, int& Status);

    // query tracker struct by name
	const FMocapTracker* GetTracker(const FString& TrackerName);

    // query all rigidbody names for this mocapapp
    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void GetAllRigidBodyNames(TArray<FString>& NameArray);

    // query rigidbody data by name
    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool GetRigidBody(const FString& RigidName, FVector& Position, FRotator& Rotation, int& Status, int& JointTag);

    // query rigidbody data by name
    bool GetRigidBodyPose(const FString& RigidName, FVector& Position, FQuat& Rotation, int& Status, int& JointTag);

    // query rigidbody struct by name
    const FMocapRigidBody* GetRigidBody(const FString& RigidName);

    // query all avatar names for this mocapapp
    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void GetAllAvatarNames(TArray<FString>& NameArray);

    // query avatar data(positions and location for each bone) by name
    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool GetAvatarData(const FString& AvatarName, TArray<FVector>& LocalPositions, TArray<FRotator>& LocalRotations);

    // query avatar static data(root, bone names and herarchy) by name
    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool GetAvatarStaticData(const FString& AvatarName, int& RootJointTag, TArray<FName>& BoneNames, TArray<int>& BoneParents, TArray<FVector>& DefaultLocalPositions);

    // if MocapApp is connected
    UFUNCTION(BlueprintCallable, Category = MocapApi)
    bool GetIsConnecting() const { return IsConnecting; };

    UFUNCTION(BlueprintCallable, Category = MocapApi)
        bool GetIsReadyToUse() const { return IsReady; };
    
    // query avatar data struct by name
    const FMocapAvatar* GetAvatarData(const FString& AvatarName);

    // get last error message for error handling
    UFUNCTION(BlueprintCallable, Category = MocapApi)
    static void GetLastErrorStr(int ErrorId, FString& Str);

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    const FString GetLastErrorMessage();

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    const int GetLastErrorId();

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    void QueueMocapCommand(const FMocapServerCommand& Cmd);

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    bool HasMocapCommandInQueue();

    // software buildin bonenames
    static TArray<FName> GetAvatarBuildinBoneNames();
    // software buildin bone parents, value in array is the index in GetAvatarBuildinBoneNames
    static TArray<int> GetAvatarBuildinParentIds();

    // dump app date for debug use
    void DumpData();

    void SetBindingLiveLinkSource(FGuid SourceID) { BindingLiveLinkSource = SourceID;  }
    FGuid GetBindingLiveLinkSource() { return BindingLiveLinkSource; }

    void SetPendingToDestroy() { PendingDestroy = true; }
    bool GetIsPendingToDestroy() { return PendingDestroy; }
private:
    bool IsConnecting = false;
    bool IsReady = true;
    bool PendingDestroy = false;
    bool LastCalibrationFinished = true;
    int LastError = 0;
    FString ExtraErrorMsg;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true), Category = "MocapApi")
    FString AppHandleInternal;// store handler use string because uint64 cannot expose to blueprint

    uint64 AppHandle; // MocapApi::MCPApplicationHandle_t used for MocapApi
    FGuid BindingLiveLinkSource;

    bool HandleAvatarUpdateEvent(uint64 Avatarhandle);
    void CheckAvatarJoint(uint64 Avatarhandle, uint64 JointHandle, const FMocapAvatar& avatar);

	bool HandleTrackerUpdateEvent(uint64 TrackerHandle, int ReservedData = 0);

	bool HandleRigidBodyUpdateEvent(uint64 RigidBodyHandle, int ReservedData = 0);

    bool HandleCommandReplyEvent(uint64 CommandHandle, int replay);

    void PrepareAndSendMocapCommand(MocapApi::IMCPApplication* mcpApplication);
    void HandleMocapCommandsTimeout();

    void PushCommandToHistory(const FMocapServerCommand& Cmd);
    const FMocapServerCommand* GetLastCommandInHistory();

    bool HandleRecordNotifyEvent(int NotifyType, uint64 notifyHandle);

    //void TreatNotifyEvents();

	TMap<FString, FMocapTracker> Trackers;
	TMap<FString, FMocapRigidBody> RigidBodies;
    TMap<FString, FMocapAvatar> Avatars;
    TArray<FMocapServerCommand> QueuedCommands;
    TArray<FMocapServerCommand> CommandsHistory;
    //TQueue<FMocapRecordNotify> RecordNotifies;
    int MaxCommandHistory;
    int LastCommandHistoryIndex;
    uint64 LastManualCalibrateCommandHandle;
    static TArray<FName> AvatarBoneNames;
    static TArray<int> AvatarBoneParents;
    static void InitAvatarBuildinInfo();

    mutable FCriticalSection CriticalSection;
};
