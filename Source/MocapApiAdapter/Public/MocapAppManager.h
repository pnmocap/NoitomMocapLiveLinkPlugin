// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "MocapStructs.h"
#include "MocapAppManager.generated.h"

UCLASS()
class AMocapAppManager : public AActor
{
    GENERATED_BODY()

public:
    AMocapAppManager();

    ~AMocapAppManager();

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    AMocapAppManager* GetInstance();

    // Called when the game starts
    virtual void BeginPlay() override;

    // Called every frame
    virtual void Tick(float DeltaSeconds) override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category="MocapApi|Setting")
    EAppProtocol DefaultProtocol = EAppProtocol::UDP;

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MocapApi|Setting")
    FString DefaultRemoteIP = TEXT("127.0.0.1");

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MocapApi|Setting")
    int DefaultPort = 7003;

    UPROPERTY(EditAnyWhere, BlueprintReadWrite, Category = "MocapApi|Setting")
    bool AutoStartDefault;

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool StartDefaultApplication();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    bool StartApplication(const FString& AppName, const FAppSettings& AppSettings, const FRenderSetting& RenderSettings);
    
    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void DestroyApplication(const FString& AppName);

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    void DestroyAllApplications();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    UMocapApp* GetMocapApp(const FString& AppName);

    UFUNCTION(BlueprintCallable, Category = MocapApi)
    UMocapApp* GetDefaultMocapApp();

    UFUNCTION(BlueprintCallable, Category=MocapApi)
    FString GetDefaultAppName() { return TEXT("Default"); }

private:
    static AMocapAppManager* s_instance;
    
    void DestroyApp(UMocapApp*App);

    TMap<FString, UMocapApp*> Applications;
};
