// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#include "NeuronLiveLinkSource.h"
#include "IPAddress.h"
#include "ILiveLinkClient.h"
#include "Roles/LiveLinkTransformTypes.h"
#include "Roles/LiveLinkTransformRole.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Roles/LiveLinkAnimationRole.h"
#include "NeuronLiveLinkLog.h"
#include "MocapAppManager.h"

#define LOCTEXT_NAMESPACE "FNeuronLiveLinkModule"

const FText ConstStatus_Starting = LOCTEXT( "Starting", "Starting" );
const FText ConstStatus_Running  = LOCTEXT( "Running", "Running" );
const FText ConstStatus_Offline  = LOCTEXT( "Offwork", "Offwork" );

FText FNeuronLiveLinkSource::SourceType = FText( LOCTEXT( "Axis Studio", "Axis Studio" ) );

FNeuronLiveLinkSource::FNeuronLiveLinkSource( FIPv4Endpoint InLocalEndpoint, bool InIsUDP, FIPv4Endpoint InRemoteEndpoint, const FString& InOrder  )
{
	Init( InLocalEndpoint, InIsUDP, InRemoteEndpoint, InOrder );
    mocapClient = nullptr;
}

FNeuronLiveLinkSource::FNeuronLiveLinkSource( EForceInit )
{
}

FNeuronLiveLinkSource::~FNeuronLiveLinkSource ()
{

}

void FNeuronLiveLinkSource::Init( FIPv4Endpoint InLocalEndpoint, bool InIsUDP, FIPv4Endpoint InRemoteEndpoint, const FString& InOrder  )
{
	LocalEndpoint = InLocalEndpoint;

	IsUDP = InIsUDP;
	RemoteEndpoint = InRemoteEndpoint;

	RotationOrder = InOrder;
}

void FNeuronLiveLinkSource::ReceiveClient (ILiveLinkClient* InClient, FGuid InSourceGuid)
{
	mGuid             = InSourceGuid;
	m_pLiveLinkClient = InClient;

	//mDataReceiver = FDataRecverManager::Get( )->AssignNewDataReceiver( AsShared( ) );
	//mDataReceiver = MakeShared<FDataReceiver>( AsShared( ) );
	//if (mDataReceiver)
	//{
	//	mDataReceiver->Start( );
	//}

    FString IP = RemoteEndpoint.Address.ToString();
    int Port = RemoteEndpoint.Port;
    if (IsUDP)
    {
        IP = LocalEndpoint.Address.ToString();
        Port = LocalEndpoint.Port;
    }
    mocapClient = new FMocapAppClient(IsUDP, IP, Port, RotationOrder);
    if (mocapClient)
    {
        mocapClient->SetSource(AsShared());
    }
}

bool FNeuronLiveLinkSource::IsSourceStillValid () const
{
    return mocapClient && (mocapClient->IsRunning()); // mDataReceiver->IsRunning();
}

bool FNeuronLiveLinkSource::RequestSourceShutdown ()
{
    if (mocapClient)
    {
        mocapClient->Exit();
        delete mocapClient;
        mocapClient = nullptr;
    }
	AN_LOG(Log, TEXT("RequestSourceShutdown"));
	return true;
}

FText FNeuronLiveLinkSource::GetSourceType() const
{
    FString HostStr;
    if (IsUDP)
    {
        HostStr = LocalEndpoint.ToString();
    }
    else
    {
        HostStr = RemoteEndpoint.ToString();
    }
    return FText::FromString(FString::Printf(TEXT("%s@%s"), *SourceType.ToString(), *HostStr));
}

FText FNeuronLiveLinkSource::GetSourceMachineName () const
{
	FString HostStr;
	if (IsUDP)
	{
		HostStr = TEXT( "UDP://" ) + LocalEndpoint.ToString( );
	}
	else
	{
		HostStr = TEXT( "TCP://" ) + RemoteEndpoint.ToString( );
	}

	FString SourceMachineName = HostStr;
	FText MachineText = FText::FromString (SourceMachineName);
	return MachineText;
}

FText FNeuronLiveLinkSource::GetSourceStatus() const
{
    const FString Offline = TEXT("Offline");
    FString Status = Offline;
    if (mocapClient)
    {
        Status = mocapClient->GetStatus();
    }
    if (Status.Equals(Offline))
    {
        return ConstStatus_Offline;
    }
    return ConstStatus_Running;
}

void FNeuronLiveLinkSource::PushAvatarSubject( FName Subject, const TArray<FName>& PropertyNames )
{
	if (mSubjects.Contains( Subject ))
	{
		return;
	}

	if (m_pLiveLinkClient) {
        FString AvatarName = FMocapAppManager::ReduceAppName(Subject);
        if (mocapClient)
        {
            int RootJointTag;
            TArray<FName> BoneNames;
            TArray<int> BoneParents;
            TArray<FVector> DefaultLocalPositions;
            mocapClient->GetAvatarStaticData(AvatarName, RootJointTag, BoneNames, BoneParents, DefaultLocalPositions);

            FLiveLinkStaticDataStruct StaticDataStruct = FLiveLinkStaticDataStruct(FLiveLinkSkeletonStaticData::StaticStruct());
            FLiveLinkSkeletonStaticData& StaticData = *StaticDataStruct.Cast<FLiveLinkSkeletonStaticData>();
            StaticData.PropertyNames = PropertyNames;

            StaticData.SetBoneNames(BoneNames);
            StaticData.SetBoneParents(BoneParents);

            m_pLiveLinkClient->PushSubjectStaticData_AnyThread({ mGuid, Subject }, ULiveLinkAnimationRole::StaticClass(), MoveTemp(StaticDataStruct));

            AN_LOG(Log, TEXT("Subject arriving: %s"), *Subject.ToString());
            mSubjects.Add(Subject);
        }

	}
}

void FNeuronLiveLinkSource::PushAvatarFrameData( FName Subject, const TArray<FName>& PropertyNames, FLiveLinkFrameDataStruct& Frame )
{
	PushAvatarSubject( Subject, PropertyNames );

	if (m_pLiveLinkClient) {
		m_pLiveLinkClient->PushSubjectFrameData_AnyThread( { mGuid, Subject }, MoveTemp( Frame ) );
	}
}

void FNeuronLiveLinkSource::PushTrackSubject(FName Subject)
{
	if (mSubjects.Contains( Subject ))
	{
		return;
	}

	if (m_pLiveLinkClient) {
		FLiveLinkStaticDataStruct StaticDataStruct = FLiveLinkStaticDataStruct( FLiveLinkTransformStaticData::StaticStruct( ) );
		m_pLiveLinkClient->PushSubjectStaticData_AnyThread( { mGuid, Subject }, ULiveLinkTransformRole::StaticClass( ), MoveTemp( StaticDataStruct ) );

		mSubjects.Add( Subject );
	}
}

void FNeuronLiveLinkSource::PushTrackerFrameData(FName Subject, FLiveLinkFrameDataStruct& Frame)
{
	PushTrackSubject( Subject );

	if (m_pLiveLinkClient) {
		m_pLiveLinkClient->PushSubjectFrameData_AnyThread( { mGuid, Subject }, MoveTemp( Frame ) );
	}
}

#undef LOCTEXT_NAMESPACE
