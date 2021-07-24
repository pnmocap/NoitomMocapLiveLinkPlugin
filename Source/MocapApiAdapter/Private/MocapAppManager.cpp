#include "MocapAppManager.h"
#include "MocapApiLog.h"

static AMocapAppManager* s_instance = nullptr;

TArray<FName> AMocapAppManager::AvatarBoneNames;
TArray<int> AMocapAppManager::AvatarBoneParents;

AMocapAppManager::AMocapAppManager()
{
    InitializeDefaults();
}

AMocapAppManager::AMocapAppManager(const FObjectInitializer& ObjectInitializer)
{
    // Forward to default constructor (we don't use ObjectInitializer for anything, this is for compatibility with inherited classes that call Super( ObjectInitializer )
    InitializeDefaults();
}

void AMocapAppManager::InitializeDefaults()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.bStartWithTickEnabled = true;
    PrimaryActorTick.SetTickFunctionEnable(true);

    DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    SetRootComponent(DefaultSceneRoot);

    if (s_instance == nullptr)
    {
        s_instance = this;
    }
    else
    {
        UE_LOG(LogMocapApi, Error, TEXT("Create more than one AMocapAppManager Already has %s but current %s"), *s_instance->GetFName().ToString(), *this->GetFName().ToString());
        s_instance = this;
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
    Super::BeginPlay();
    if (AutoStartDefault)
    {
        StartDefaultApplication();
    }
}

void AMocapAppManager::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);
    for (auto& It : Applications)
    {
        It.Value->PollEvents();
    }
}

void AMocapAppManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    DestroyAllApplications();
    Super::EndPlay(EndPlayReason);
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

void AMocapAppManager::DumpApp(const FString& AppName)
{
    UMocapApp** App = Applications.Find(AppName);
    if (App)
    {
        (*App)->DumpData();
    }
}

void AMocapAppManager::DestroyApp(UMocapApp*App)
{
    App->Disconnect();
}

void AMocapAppManager::GetAvatarBuildinBoneNameAndParents(TArray<FName>& BoneNames, TArray<int>& Parents)
{
    if (AvatarBoneNames.Num() == 0)
    {
        AvatarBoneNames = UMocapApp::GetAvatarBuildinBoneNames();
        AvatarBoneParents = UMocapApp::GetAvatarBuildinParentIds();
    }
    BoneNames = AvatarBoneNames;
    Parents = AvatarBoneParents;
}