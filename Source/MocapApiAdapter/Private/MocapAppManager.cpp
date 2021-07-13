#include "MocapAppManager.h"

AMocapAppManager* AMocapAppManager::s_instance = nullptr;

AMocapAppManager::AMocapAppManager()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    
    if (s_instance == nullptr)
    {
        s_instance = this;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Create more than one AMocapAppManager"));
    }
}

AMocapAppManager::~AMocapAppManager()
{
    s_instance = nullptr;
}

AMocapAppManager* AMocapAppManager::GetInstance()
{
    return s_instance;
}

void AMocapAppManager::BeginPlay()
{
    if (AutoStartDefault)
    {
        StartDefaultApplication();
    }
}

void AMocapAppManager::Tick(float DeltaSeconds)
{
    for (auto& It : Applications)
    {
        It.Value->PollEvents();
    }
}

void AMocapAppManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    DestroyAllApplications();
}

bool AMocapAppManager::StartDefaultApplication()
{
    const FString& DefaultAppName = GetDefaultAppName();
    UMocapApp* App = GetMocapApp(DefaultAppName);
    bool Result = App != nullptr;
    if (!App)
    {
        FAppSettings Sett;
        FRenderSetting RenderSettings;
        Sett.Protocol = DefaultProtocol;
        Sett.RemoteIP = DefaultRemoteIP;
        Sett.Port = DefaultPort;
        Result = StartApplication(DefaultAppName, Sett, RenderSettings);
    }
    else
    {
        App->Connect();
    }
    return Result;
}

bool AMocapAppManager::StartApplication(const FString& AppName, const FAppSettings& AppSettings, const FRenderSetting& RenderSettings)
{
    UMocapApp* App = GetMocapApp(AppName);
    if (!App)
    {
        // create App
        App = NewObject<UMocapApp>();
        App->AppName = AppName;
        App->AppSettings = AppSettings;
        App->RenderSettings = RenderSettings;
        Applications.Add(AppName, App);
    }
    if (App)
    {
        App->Connect();
    }
    return App;
}

void AMocapAppManager::DestroyApplication(const FString& AppName)
{
    UMocapApp* App = GetMocapApp(AppName);
    if (App)
    {
        Applications.Remove(AppName);
        DestroyApp(App);
    }
}

void AMocapAppManager::DestroyAllApplications()
{
    for (auto&Elem : Applications)
    {
        DestroyApp(Elem.Value);
    }
    Applications.Empty();
}

UMocapApp* AMocapAppManager::GetMocapApp(const FString& AppName)
{
    UMocapApp** App = Applications.Find(AppName);
    if (App)
    {
        return *App;
    }
    return nullptr;
}

UMocapApp* AMocapAppManager::GetDefaultMocapApp()
{
    return GetMocapApp(GetDefaultAppName());
}

void AMocapAppManager::DestroyApp(UMocapApp*App)
{
    App->Disconnect();
}