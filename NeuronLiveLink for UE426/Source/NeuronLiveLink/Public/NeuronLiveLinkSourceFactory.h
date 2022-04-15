// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "LiveLinkSourceFactory.h"
#include "NeuronLiveLinkLog.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"
#include "NeuronLiveLinkSource.h"
#include "NeuronLiveLinkSourceFactory.generated.h"

class SWidget;

UCLASS()
class UNeuronLiveLinkSourceFactory : public ULiveLinkSourceFactory
{
	GENERATED_UCLASS_BODY()

public:
	virtual FText GetSourceDisplayName () const;
	virtual FText GetSourceTooltip () const;

	/*virtual TSharedPtr<SWidget> CreateSourceCreationPanel ();
	virtual TSharedPtr<ILiveLinkSource> OnSourceCreationPanelClosed (bool bCreateSource);*/
	virtual EMenuType GetMenuType( ) const override { return EMenuType::SubPanel; }
	virtual TSharedPtr<SWidget> BuildCreationPanel( FOnLiveLinkSourceCreated OnLiveLinkSourceCreated ) const override;
	virtual TSharedPtr<ILiveLinkSource> CreateSource( const FString& ConnectionString ) const override;

	static TSharedPtr<ILiveLinkSource> CreateSourceAtRuntime( const FString& ConnectionString );

private:
	void OnOkClicked(FIPv4Endpoint LocalEndpoint, bool IsUDP, FIPv4Endpoint RemoteEndpoint, const FString& Order, int RecvPort, FOnLiveLinkSourceCreated OnLiveLinkSourceCreated) const;
};
