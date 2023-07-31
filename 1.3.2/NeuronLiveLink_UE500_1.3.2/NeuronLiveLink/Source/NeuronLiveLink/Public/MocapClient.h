// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "MocapStructs.h"
#include "HAL/Runnable.h"
#include "HAL/RunnableThread.h"

class FNeuronLiveLinkSource;
/*
* FMocapAppClient is the classed used for FNeuronLiveLinkSource to handle UMocapApp, get data and send data to livelink
*/
class FMocapAppClient : public FRunnable
{
public:
    FMocapAppClient(bool IsUDP, const FString& RemoteIP, int Port, const FString& RotationOrder, int RecvPort);
    ~FMocapAppClient();
    void SetSource(TSharedPtr<FNeuronLiveLinkSource> Source);

    //~ Begin FRunnable interface
    virtual bool Init() override;

	virtual uint32 Run() override;

	virtual void Stop() override;

    virtual void Exit() override;

	//~ End FRunnable interface

    bool StartApplication();
    void DestroyApplication();

    bool IsRunning() { return bRunning; }
    void PollEvents();

    const FString GetClientName() { return AppName;  };

    const FString GetStatus();

    void GetAllRigidBodyNames(TArray<FString>& NameArray);

    bool GetRigidBodyPose(const FString& RigidName, FVector& Position, FQuat& Rotation, int& Status, int& JointTag);

    void GetAllAvatarNames(TArray<FString>& NameArray);

    bool GetAvatarData(const FString& AvatarName, TArray<FVector>& LocalPositions, TArray<FRotator>& LocalRotations);

    bool GetAvatarStaticData(const FString& AvatarName, int& RootJointTag, TArray<FName>& BoneNames, TArray<int>& BoneParents, TArray<FVector>& DefaultLocalPositions);
private:
    FString AppName;
    FMCAppSettings Sett;
    UMocapApp* App;
    FRunnableThread* Thread;
    FThreadSafeBool bRunning;
    TWeakPtr<FNeuronLiveLinkSource> mSource;
};
