#include "MocapClient.h"
#include "MocapStructs.h"
#include "NeuronLiveLinkSource.h"
#include "Roles/LiveLinkTransformTypes.h"
#include "Roles/LiveLinkAnimationTypes.h"

static TMap<FString, EMCBvhRotationOrder> OrderMap = {
    { TEXT("XYZ"), EMCBvhRotationOrder::XYZ },
    { TEXT("XZY"), EMCBvhRotationOrder::XZY },
    { TEXT("YXZ"), EMCBvhRotationOrder::YXZ },
    { TEXT("YZX"), EMCBvhRotationOrder::YZX },
    { TEXT("ZXY"), EMCBvhRotationOrder::ZXY },
    { TEXT("ZYZ"), EMCBvhRotationOrder::ZYX },
};

EMCBvhRotationOrder GetRotationOrderFromString(const FString& RotationOrder)
{
    EMCBvhRotationOrder* Order = OrderMap.Find(RotationOrder);
    if (Order != nullptr)
    {
        return *Order;
    }
    return EMCBvhRotationOrder::YXZ;
}

FQualifiedFrameTime GetTimecode(const FMocapTimeCode& tc)
{
    FTimecode timecode(tc.Hour, tc.Minute, tc.Second, tc.Frame, false);
    FFrameRate rate(tc.Rate, 1);
    return FQualifiedFrameTime(timecode, rate);
}

FMocapAppClient::FMocapAppClient(bool IsUDP, const FString& RemoteIP, int Port, const FString& RotationOrder)
    : Thread(nullptr)
    , bRunning(true)
{
    Sett.Protocol = IsUDP? EMCAppProtocol::UDP: EMCAppProtocol::TCP;
    Sett.RemoteIP = RemoteIP;
    Sett.Port = Port;
    Sett.bvhDataFormat = EMCBvhDataFormat::Binary;
    Sett.BvhRotation = EMCBvhRotationOrder::YXZ;
    StartApplication();
}

FMocapAppClient::~FMocapAppClient()
{
    if (Thread)
    {
        Thread->Kill(true);
        Thread = nullptr;
    }

    DestroyApplication();
}

void FMocapAppClient::SetSource(TSharedPtr<FNeuronLiveLinkSource> Source)
{
    mSource = Source;
}

//~ Begin FRunnable interface
bool FMocapAppClient::Init()
{
    return App != nullptr;
}

uint32 FMocapAppClient::Run()
{
    while (bRunning)
    {
        PollEvents();
        FPlatformProcess::Sleep(1.0f/60);
    }
    return 0;
}

void FMocapAppClient::Stop()
{
    bRunning = false;
}
//~ End FRunnable interface


bool FMocapAppClient::StartApplication()
{
    //check(App == nullptr);
    App = NewObject<UMocapApp>();
    App->AddToRoot();
    App->AppSettings = Sett;
    FMCRenderSetting RenderSettings;
    App->RenderSettings = RenderSettings;
    AppName = App->GetConnectionString();
    App->AppName = AppName;
    App->Connect();

    Thread = FRunnableThread::Create(this, TEXT("MocapAppClient"));
    return true;
}

void FMocapAppClient::DestroyApplication()
{
    if (App)
    {
        App->RemoveFromRoot();
        App->Disconnect();
    }
    App = nullptr;
    AppName = TEXT("");
}

void FMocapAppClient::PollEvents()
{
    if (App)
    {
        bool hasNewEvents = App->PollEvents();
        if (!hasNewEvents)
        {
            return;
        }
        TSharedPtr<FNeuronLiveLinkSource> Source = mSource.Pin();
        if (Source)
        {
            FLiveLinkWorldTime WorldTime = FPlatformTime::Seconds();
            FQualifiedFrameTime QualifiedTime;

            TArray<FString> Avatars;
            App->GetAllAvatarNames(Avatars);

            for (FString& AvatarName : Avatars)
            {
                const FMocapAvatar* Data = App->GetAvatarData(AvatarName);

                const TArray<FName> PropertyNames({ FName(TEXT("WithDisplacement")) });;
                TArray<float> PropertyValues({ (float)(Data->HasLocalPositions[1]? 1.0: 0.0) });

                QualifiedTime = GetTimecode(Data->ReceiveTime);

                FLiveLinkFrameDataStruct Frame = FLiveLinkFrameDataStruct(FLiveLinkAnimationFrameData::StaticStruct());
                
                FLiveLinkBaseFrameData* BaseData = Frame.GetBaseData();
                BaseData->WorldTime = WorldTime;
                BaseData->MetaData.SceneTime = QualifiedTime;
                
                FLiveLinkAnimationFrameData& FrameData = *Frame.Cast<FLiveLinkAnimationFrameData>();
                FrameData.PropertyValues = PropertyValues;
                int Count = Data->BoneNames.Num();
                for (int i = 0; i < Count; ++i)
                {
                    FrameData.Transforms.Add(FTransform(Data->LocalRotation[i], Data->LocalPositions[i]));
                }
                
                Source->PushAvatarFrameData(FName(AvatarName), PropertyNames, Frame);
            }

            TArray<int> Rigids;
            App->GetAllRigidBodyIDs(Rigids);

            for (int id : Rigids)
            {
                const FMocapRigidBody* RigidData = App->GetRigidBody(id);
                if (RigidData)
                {
                    FString NameStr = FString::Printf(TEXT("Avatar[%d] Bone[%d] Id[%d]"), RigidData->Reserved, RigidData->JointTag, RigidData->ID);
                    FName Subject = FName(NameStr);
                    
                    FLiveLinkFrameDataStruct Frame = FLiveLinkFrameDataStruct(FLiveLinkTransformFrameData::StaticStruct());
                    
                    FLiveLinkBaseFrameData* BaseData = Frame.GetBaseData();
                    BaseData->WorldTime = WorldTime;
                    BaseData->MetaData.SceneTime = QualifiedTime;

                    FLiveLinkTransformFrameData& TransformData = *Frame.Cast<FLiveLinkTransformFrameData>();
                    const FVector& P = RigidData->Position;
                    const FQuat& Q = RigidData->Rotation;
                    TransformData.Transform.SetLocation(P);
                    TransformData.Transform.SetRotation(Q);

                    Source->PushTrackerFrameData(Subject, Frame);
                }
            }
        }
    }
}

const FString FMocapAppClient::GetStatus()
{
    FString Status = TEXT("Offline");
    if (IsRunning())
    {
        if (App)
        {
            if (App->GetIsConnecting())
            {
                Status = TEXT("Online");
            }
        }
    }
    return Status;
}

void FMocapAppClient::GetAllRigidBodyIDs(TArray<int>& IDArray)
{
    if (App)
    {
        App->GetAllRigidBodyIDs(IDArray);
    }
}

bool FMocapAppClient::GetRigidBodyPose(const int ID, FVector& Position, FQuat& Rotation, int& Status, int& JointTag)
{
    if (App)
    {
        return GetRigidBodyPose(ID, Position, Rotation, Status, JointTag);
    }
    return false;
}

void FMocapAppClient::GetAllAvatarNames(TArray<FString>& NameArray)
{
    if (App)
    {
        App->GetAllAvatarNames(NameArray);
    }
}

bool FMocapAppClient::GetAvatarData(const FString& AvatarName, TArray<FVector>& LocalPositions, TArray<FRotator>& LocalRotations)
{
    if (App)
    {
        return App->GetAvatarData(AvatarName, LocalPositions, LocalRotations);
    }
    return false;
}

bool FMocapAppClient::GetAvatarStaticData(const FString& AvatarName, int& RootJointTag, TArray<FName>& BoneNames, TArray<int>& BoneParents, TArray<FVector>& DefaultLocalPositions)
{
    if (App)
    {
        return App->GetAvatarStaticData(AvatarName, RootJointTag, BoneNames, BoneParents, DefaultLocalPositions);
    }
    return false;
}
