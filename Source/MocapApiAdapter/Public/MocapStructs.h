// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "MocapStructs.generated.h"


UENUM(BlueprintType)
enum class EBvhRotationOrder : uint8
{
    XYZ = 0,
    XZY = 1,
    YXZ = 2,
    YZX = 3,
    ZXY = 4,
    ZYX = 5,
};

UENUM(BlueprintType)
enum class EBvhDataFormat : uint8
{
    String = 0,
    BinaryWithOldFrameHeader = 1,
    Binary = 2,
    Mask_LegacyHumanHierarchy = 4,
};

UENUM(BlueprintType)
enum class EAppProtocol : uint8
{
    UDP = 0,
    TCP = 1,
};


USTRUCT(BlueprintType)
struct FAppSettings
{
    GENERATED_BODY()

    UPROPERTY()
    EAppProtocol Protocol = EAppProtocol::UDP;

    UPROPERTY()
    FString RemoteIP = TEXT("127.0.0.1");

    UPROPERTY()
    int Port = 7003;

    UPROPERTY()
    EBvhRotationOrder BvhRotation = EBvhRotationOrder::YXZ;

    UPROPERTY()
    EBvhDataFormat bvhDataFormat = EBvhDataFormat::Binary;
};

UENUM(BlueprintType)
enum class EUpAxis : uint8 {
    Unknown = 0,
    X = 1,
    Y = 2,
    Z = 3
};

UENUM(BlueprintType)
enum class EFrontAxis : uint8 {
    Unknown = 0,
    ParityEven = 1, 
    ParityOdd = 2
};

UENUM(BlueprintType)
enum class ECoordSystem : uint8 {
    RightHanded = 0,
    LeftHanded
};

UENUM(BlueprintType)
enum class ERotatingDirection : uint8 {
    CW = 0,
    CCW,
};

UENUM(BlueprintType)
enum class EDistanceUnit : uint8 
{
    Centimeter,
    Meter,
};

USTRUCT(BlueprintType)
struct FRenderSetting
{
    GENERATED_BODY()

    UPROPERTY()
    EUpAxis Up = EUpAxis::Z;

    UPROPERTY()
    EFrontAxis Front = EFrontAxis::ParityEven;

    UPROPERTY()
    ECoordSystem Coord = ECoordSystem::LeftHanded;

    UPROPERTY()
    ERotatingDirection RotatingDir = ERotatingDirection::CW;

    UPROPERTY()
    EDistanceUnit Unit = EDistanceUnit::Centimeter;
};

USTRUCT(BlueprintType)
struct FMocapRigidBody
{
    GENERATED_BODY()

    UPROPERTY()
    int ID;

    UPROPERTY()
    FVector Position;

    UPROPERTY()
    FQuat Rotation;

    UPROPERTY()
    int Status;
    
    UPROPERTY()
    int JointTag;

    UPROPERTY()
    int Reserved; // used to store avatar id
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
    FString Name;

    UPROPERTY()
    int RootJointTag;

    FMocapTimeCode ReceiveTime;

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
        FAppSettings AppSettings;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MocapApi")
        FRenderSetting RenderSettings;

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    const FString GetConnectionString();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool Connect();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void Disconnect();

    bool PollEvents();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void GetAllRigidBodyIDs(TArray<int>& IDArray);

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool GetRigidBody(const int ID, FVector& Position, FRotator& Rotation, int& Status, int& JointTag);

    bool GetRigidBodyPose(const int ID, FVector& Position, FQuat& Rotation, int& Status, int& JointTag);

    const FMocapRigidBody* GetRigidBody(const int ID);

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

    bool HandleRigidBodyUpdateEvent(uint64 RigidBodyHandle, int ReservedData = 0);

    TMap<int,FMocapRigidBody> RigidBodies;
    TMap<FString, FMocapAvatar> Avatars;

    mutable FCriticalSection CriticalSection;
};
