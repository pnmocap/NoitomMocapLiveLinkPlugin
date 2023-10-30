#include "MocapAppManager.h"
#include "MocapApiLog.h"

FMocapAppManager* FMocapAppManager::s_instance = nullptr;
bool FMocapAppManager::NewAppUseShortName = false;

FMocapAppManager& FMocapAppManager::GetInstance()
{
    if (s_instance == nullptr)
    {
        s_instance = new FMocapAppManager();
    }
    return *s_instance;
}

bool FMocapAppManager::AddMocapApp(UMocapApp* App)
{
    if (App)
    {
        FName AppName(App->AppName);
        UMocapApp** OldApp = RunningApps.Find(AppName);
        if (OldApp == nullptr)
        {
            RunningApps.Add(AppName, App);
            return true;
        }
        else
        {
            //(*OldApp)->Disconnect();
            RemoveMocapApp(*OldApp);
            RunningApps.Add(AppName, App);
            return true;
        }
    }
    return false;
}

bool FMocapAppManager::RemoveMocapApp(UMocapApp* App)
{
    if (App)
    {
        FName AppName(App->AppName);
        UMocapApp** OldApp = RunningApps.Find(AppName);
        if (OldApp == nullptr || *OldApp != App)
        {
            return true;
        }
        RunningApps.Remove(FName(App->AppName));
        TArray<FName> NamesInApp;
        for (auto& It : NameResolver)
        {
            if (It.Value == App)
            {
                NamesInApp.AddUnique(It.Key);
            }
        }
        for (auto& Name : NamesInApp)
        {
            NameResolver.Remove(Name);
        }

        return true;
    }
    return false;
}

UMocapApp* FMocapAppManager::GetMocapAppByName(FName AppName)
{
    if (AppName != NAME_None)
    {
        UMocapApp** Result = RunningApps.Find(AppName);
        if (Result != nullptr)
        {
            return *Result;
        }
    }
    return nullptr;
}

void FMocapAppManager::EachRunningApp(MocapAppVisitor& Visitor)
{
    //void
    TArray<UMocapApp*> AppsNeedToDestroy;
    for (auto& It : RunningApps)
    {
        if (!It.Value->GetIsPendingToDestroy())
        {
            Visitor.Visit(It.Value);
        }
        else
        {
            AppsNeedToDestroy.Add(It.Value);
        }
    }
    for (auto App : AppsNeedToDestroy)
    {
        App->Disconnect();
    }
}

const FMocapTracker* FMocapAppManager::GetTracker(FName TrackerName)
{
    UMocapApp** App = NameResolver.Find(TrackerName);
    if (App != nullptr)
    {
        return (*App)->GetTracker(TrackerName.ToString());
    }
    return nullptr;
}

const FMocapRigidBody* FMocapAppManager::GetRigidBody(FName RigidName)
{
    UMocapApp** App = NameResolver.Find(RigidName);
    if (App != nullptr)
    {
        return (*App)->GetRigidBody(RigidName.ToString());
    }
    return nullptr;
}

const FMocapAvatar* FMocapAppManager::GetAvatarData(FName AvatarName)
{
    UMocapApp** App = NameResolver.Find(AvatarName);
    if (*App != nullptr)
    {
        return (*App)->GetAvatarData(AvatarName.ToString());
    }
    return nullptr;
}

void FMocapAppManager::OnRecieveMocapData(FName DataName, UMocapApp* theApp)
{
    FScopeLock Lock(&CriticalSection);
    UMocapApp** App = NameResolver.Find(DataName);
    if (App != nullptr)
    {
        if (*App != theApp)
        {
            // Already have the same name on App
            if (NewAppUseShortName)
            {
                NameResolver.Add(DataName, theApp);
            }
            FName NameWithAppName = CombineNameWithAppName(DataName.ToString(), theApp);
            NameResolver.Add(NameWithAppName, theApp);
        }
    }
    else
    {
        // add new key paire to NameResolver
        NameResolver.Add(DataName, theApp);
        FName NameWithAppName = CombineNameWithAppName(DataName.ToString(), theApp);
        NameResolver.Add(NameWithAppName, theApp);
    }
}

bool FMocapAppManager::IsNameUsedByApp(FName DataName, UMocapApp* theApp)
{
    UMocapApp** App = NameResolver.Find(DataName);
    if (App != nullptr)
    {
        return (*App == theApp);
    }
    return false;
}

FName FMocapAppManager::CombineNameWithAppName(const FString& Name, UMocapApp* App)
{
    if (App)
    {
        return FName(FString::Printf(TEXT("%s@%s"), *Name, *App->AppName));
    }
    else
    {
        return FName(Name);
    }
}

FString FMocapAppManager::ReduceAppName(FName Name)
{
    FString Result = Name.ToString();
    int32 Index;
    bool find = Result.FindChar('@', Index);
    if (find)
    {
        Result.MidInline(0, Index);
    }
    return Result;
}


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
    if (AutoStartMocapApp)
    {
        for (auto& Sett : MocapAppSettings)
        {
            StartApplication(Sett);
        }
    }
}

class PollAppEventVisitor : public MocapAppVisitor
{
    virtual void Visit(UMocapApp* App) override
    {
        App->PollEvents();
    }
};

void AMocapAppManager::Tick(float DeltaSeconds)
{
    Super::Tick(DeltaSeconds);

    // poll events on tick
    PollAppEventVisitor PollVisitor;
    FMocapAppManager::GetInstance().EachRunningApp(PollVisitor);
}

void AMocapAppManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    DestroyAllApplications();
    Super::EndPlay(EndPlayReason);
}

bool AMocapAppManager::StartApplication(const FMCAppSettings& AppSettings)
{
    const FString& AppName = AppSettings.Name;
    UMocapApp* App = GetMocapApp(AppName);
    if (!App)
    {
        // create App
        App = NewObject<UMocapApp>();
        App->AppName = AppName;
        App->AppSettings = AppSettings;
        // do not use RenderSettings now
        FMCRenderSetting RenderSettings;
        App->RenderSettings = RenderSettings;
    }
    else
    {
        UE_LOG(LogMocapApi, Warning, TEXT("Already has a mocap app amed %s"), *AppName);
        return false;
    }
    if (App)
    {
        App->Connect();
    }
    return App!=nullptr;
}

void AMocapAppManager::DestroyApplication(const FString& AppName)
{
    UMocapApp* App = GetMocapApp(AppName);
    if (App)
    {
        DestroyApp(App);
    }
}

class MocapAppNameVisitor : public MocapAppVisitor
{
public:
    virtual void Visit(UMocapApp* App) override
    {
        Apps.AddUnique(App);
    }
    TArray<UMocapApp*> Apps;
};

void AMocapAppManager::DestroyAllApplications()
{
    MocapAppNameVisitor Visitor;
    FMocapAppManager::GetInstance().EachRunningApp(Visitor);
    for (UMocapApp* App : Visitor.Apps)
    {
        DestroyApp(App);
    }
}

UMocapApp* AMocapAppManager::GetMocapApp(const FString& AppName)
{
    return FMocapAppManager::GetInstance().GetMocapAppByName(FName(AppName));
}

class DumpAppDataVisitor : public MocapAppVisitor
{
    virtual void Visit(UMocapApp* App) override
    {
        App->DumpData();
    }
};

void AMocapAppManager::DumpApp(const FString& AppName)
{
    DumpAppDataVisitor Visitor;
    FMocapAppManager::GetInstance().EachRunningApp(Visitor);
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
