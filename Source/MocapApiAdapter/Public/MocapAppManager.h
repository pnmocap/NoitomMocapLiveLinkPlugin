// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "MocapStructs.h"
#include "GameFramework/Actor.h"
#include "MocapAppManager.generated.h"

UCLASS()
class MOCAPAPIADAPTER_API AMocapAppManager : public AActor
{
    GENERATED_BODY()

public:
    AMocapAppManager();
    AMocapAppManager(const FObjectInitializer& ObjectInitializer);

    ~AMocapAppManager();

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    AMocapAppManager* GetInstance();

    UPROPERTY(Category = CaliActor, VisibleAnywhere, BlueprintReadOnly)
        class USceneComponent* DefaultSceneRoot;

    // Called when the game starts
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick(float DeltaSeconds) override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category="MocapApi|Setting")
    EMCAppProtocol DefaultProtocol = EMCAppProtocol::UDP;

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MocapApi|Setting")
    FString DefaultRemoteIP = TEXT("127.0.0.1");

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MocapApi|Setting")
    int DefaultPort = 7003;

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MocapApi|Setting")
    bool AutoStartDefault;

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool StartDefaultApplication();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool StartApplication(const FString& AppName, const FMCAppSettings& AppSettings, const FMCRenderSetting& RenderSettings);
    
    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void DestroyApplication(const FString& AppName);

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void DestroyAllApplications();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    UMocapApp* GetMocapApp(const FString& AppName);

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    UMocapApp* GetDefaultMocapApp();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    FString GetDefaultAppName() const { return TEXT("Default"); }

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    void DumpApp(const FString& AppName);

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    void GetAvatarBuildinBoneNameAndParents(TArray<FName>& BoneNames, TArray<int>& Parents);

private:
 
    void DestroyApp(UMocapApp*App);

    TMap<FString, UMocapApp*> Applications;

    static TArray<FName> AvatarBoneNames;
    static TArray<int> AvatarBoneParents;

    void InitializeDefaults();
};
