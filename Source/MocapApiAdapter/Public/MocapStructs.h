// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "MocapStructs.generated.h"


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

UENUM(BlueprintType)
enum class EMCBvhDataFormat : uint8
{
    String = 0,
    BinaryWithOldFrameHeader = 1,
    Binary = 2,
    Mask_LegacyHumanHierarchy = 4,
};

UENUM(BlueprintType)
enum class EMCAppProtocol : uint8
{
    UDP = 0,
    TCP = 1,
};


USTRUCT(BlueprintType)
struct FMCAppSettings
{
    GENERATED_BODY()

    UPROPERTY()
    FString Name;

    UPROPERTY()
    EMCAppProtocol Protocol = EMCAppProtocol::UDP;

    UPROPERTY()
    FString RemoteIP = TEXT("127.0.0.1");

    UPROPERTY()
    int Port = 7003;

    UPROPERTY()
    EMCBvhRotationOrder BvhRotation = EMCBvhRotationOrder::YXZ;

    UPROPERTY()
    EMCBvhDataFormat bvhDataFormat = EMCBvhDataFormat::Binary;
};

UENUM(BlueprintType)
enum class EMCUpAxis : uint8 {
    Unknown = 0,
    X = 1,
    Y = 2,
    Z = 3
};

UENUM(BlueprintType)
enum class EMCFrontAxis : uint8 {
    Unknown = 0,
    ParityEven = 1, 
    ParityOdd = 2
};

UENUM(BlueprintType)
enum class EMCCoordSystem : uint8 {
    RightHanded = 0,
    LeftHanded
};

UENUM(BlueprintType)
enum class EMCRotatingDirection : uint8 {
    CW = 0,
    CCW,
};

UENUM(BlueprintType)
enum class EMCDistanceUnit : uint8 
{
    Centimeter = 0,
    Meter,
};

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

struct FMocapTimeCode
{
    uint32 Hour;
    uint32 Minute;
    uint32 Second;
    uint32 Frame;
    uint32 Rate;
};


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
};

UCLASS()
class MOCAPAPIADAPTER_API UMocapApp : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MocapApi")
        FString AppName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MocapApi")
        FMCAppSettings AppSettings;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MocapApi")
        FMCRenderSetting RenderSettings;

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    const FString GetConnectionString();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool Connect();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void Disconnect();

    bool PollEvents();

	UFUNCTION(BlueprintCallable, Category = MocapApi)
	void GetAllTrackerNames(TArray<FString>& NameArray);

	UFUNCTION(BlueprintCallable, Category = MocapApi)
	bool GetTracker(const FString& TrackerName, FVector& Position, FRotator& Rotation, int& Status);

	bool GetTrackerPose(const FString& TrackerName, FVector& Position, FQuat& Rotation, int& Status);

	const FMocapTracker* GetTracker(const FString& TrackerName);

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void GetAllRigidBodyNames(TArray<FString>& NameArray);

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool GetRigidBody(const FString& RigidName, FVector& Position, FRotator& Rotation, int& Status, int& JointTag);

    bool GetRigidBodyPose(const FString& RigidName, FVector& Position, FQuat& Rotation, int& Status, int& JointTag);

    const FMocapRigidBody* GetRigidBody(const FString& RigidName);

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void GetAllAvatarNames(TArray<FString>& NameArray);

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool GetAvatarData(const FString& AvatarName, TArray<FVector>& LocalPositions, TArray<FRotator>& LocalRotations);

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool GetAvatarStaticData(const FString& AvatarName, int& RootJointTag, TArray<FName>& BoneNames, TArray<int>& BoneParents, TArray<FVector>& DefaultLocalPositions);

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    bool GetIsConnecting() const { return IsConnecting; };
    
    const FMocapAvatar* GetAvatarData(const FString& AvatarName);

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    const FString GetLastErrorMessage();

    static TArray<FName> GetAvatarBuildinBoneNames();
    static TArray<int> GetAvatarBuildinParentIds();

    void DumpData();
private:
    bool IsConnecting = false;
    int LastError = 0;
    FString ExtraErrorMsg;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true), Category = "MocapApi")
    FString AppHandleInternal;// store handler use string because uint64 cannot expose to blueprint

    uint64 AppHandle;

    bool HandleAvatarUpdateEvent(uint64 Avatarhandle);
    void CheckAvatarJoint(uint64 Avatarhandle, uint64 JointHandle, const FMocapAvatar& avatar);

	bool HandleTrackerUpdateEvent(uint64 TrackerHandle, int ReservedData = 0);

	bool HandleRigidBodyUpdateEvent(uint64 RigidBodyHandle, int ReservedData = 0);

	TMap<FString, FMocapTracker> Trackers;
	TMap<FString, FMocapRigidBody> RigidBodies;
    TMap<FString, FMocapAvatar> Avatars;
    static TArray<FName> AvatarBoneNames;
    static TArray<int> AvatarBoneParents;
    static void InitAvatarBuildinInfo();

    mutable FCriticalSection CriticalSection;
};
