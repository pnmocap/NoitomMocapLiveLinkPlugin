// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "MocapStructs.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"

class FNeuronLiveLinkSource;

class FMocapAppClient : public FRunnable
{
public:
    FMocapAppClient(bool IsUDP, const FString& RemoteIP, int Port, const FString& RotationOrder);
    ~FMocapAppClient();
    void SetSource(TSharedPtr<FNeuronLiveLinkSource> Source);

    //~ Begin FRunnable interface
    virtual bool Init() override;

	virtual uint32 Run() override;

	virtual void Stop() override;

	//~ End FRunnable interface

    bool StartApplication();
    void DestroyApplication();

    bool IsRunning() { return bRunning; }
    void PollEvents();

    const FString GetClientName() { return AppName;  };

    const FString GetStatus();

    void GetAllRigidBodyIDs(TArray<int>& IDArray);

    bool GetRigidBodyPose(const int ID, FVector& Position, FQuat& Rotation, int& Status, int& JointTag);

    void GetAllAvatarNames(TArray<FString>& NameArray);

    bool GetAvatarData(const FString& AvatarName, TArray<FVector>& LocalPositions, TArray<FRotator>& LocalRotations);

    bool GetAvatarStaticData(const FString& AvatarName, int& RootJointTag, TArray<FName>& BoneNames, TArray<int>& BoneParents, TArray<FVector>& DefaultLocalPositions);
private:
    FString AppName;
    FAppSettings Sett;
    UMocapApp* App;
    FRunnableThread* Thread;
    FThreadSafeBool bRunning;
    TWeakPtr<FNeuronLiveLinkSource> mSource;
};
