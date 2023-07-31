// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "ILiveLinkSource.h"
#include "MocapClient.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"

class NEURONLIVELINK_API FNeuronLiveLinkSource : public ILiveLinkSource, public TSharedFromThis<FNeuronLiveLinkSource>
{
public:
	FNeuronLiveLinkSource( EForceInit );
	FNeuronLiveLinkSource( FIPv4Endpoint LocalEndpoint, bool IsUDP, FIPv4Endpoint RemoteEndpoint, const FString& Order, int UDPRecvPoint);
	virtual ~FNeuronLiveLinkSource ();

	void Init( FIPv4Endpoint LocalEndpoint, bool IsUDP, FIPv4Endpoint RemoteEndpoint, const FString& Order, int UDPRecvPoint = 7004);

	//~ Begin ILiveLinkSource interface
	virtual void ReceiveClient (ILiveLinkClient* InClient, FGuid InSourceGuid) override;
	virtual void InitializeSettings(ULiveLinkSourceSettings* Settings) override;
	virtual bool IsSourceStillValid () const;
	virtual bool RequestSourceShutdown ();

	virtual FText GetSourceType( ) const;
	virtual FText GetSourceMachineName () const override;
	virtual FText GetSourceStatus( ) const;
	//~ End ILiveLinkSource interface

	void PushAvatarSubject( FName Subject, const TArray<FName>& PropertyNames );
	void PushAvatarFrameData( FName Subject, const TArray<FName>& PropertyNames, FLiveLinkFrameDataStruct& Frame );

	void PushTrackSubject( FName Subject );
	void PushTrackerFrameData( FName Subject, FLiveLinkFrameDataStruct& Frame );

	const FGuid& GetSourceGuid() {
		return mGuid;
	}
private:
	FGuid mGuid;
	ILiveLinkClient* m_pLiveLinkClient;
	TSet<FName> mSubjects;

	FMocapAppClient* mocapClient;

public:
	FIPv4Endpoint LocalEndpoint;
    int UDPRecvPort;
	bool IsUDP = true;
	FIPv4Endpoint RemoteEndpoint;

	FString RotationOrder;

	static FText SourceType;
};
