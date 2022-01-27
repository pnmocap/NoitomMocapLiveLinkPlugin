// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once
#include "CoreMinimal.h"

#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SComboBox.h"

#include "Input/Reply.h"
#include "Types/SlateEnums.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

#include "Interfaces/IPv4/IPv4Endpoint.h"

enum EulerOrder
{
    // ORDER & COMP0 = part0
    // ORDER & COMP1 = part1
    // ORDER & COMP2 = part2
    XYZ = 0x000102,
    XZY = 0x000201,
    YXZ = 0x010002,
    YZX = 0x010200,
    ZXY = 0x020001,
    ZYX = 0x020100
};

typedef TSharedPtr<EulerOrder> FRotationOrderComboItemType;

class SNeuronLiveLinkSourceFactory : public SCompoundWidget
{
public:
	DECLARE_DELEGATE_FiveParams( FOnOkClicked, FIPv4Endpoint, bool, FIPv4Endpoint, const FString&, int);

	SLATE_BEGIN_ARGS( SNeuronLiveLinkSourceFactory ) {}
	SLATE_EVENT( FOnOkClicked, OnOkClicked )
		SLATE_END_ARGS( )

		void Construct( const FArguments& Args );

	TSharedRef<SWidget> MakeWidgetForOption(FRotationOrderComboItemType InOption);

private:

	void OnLocalEndpointChanged( const FText& NewValue, ETextCommit::Type );
	void OnRemoteEndpointChanged( const FText& NewValue, ETextCommit::Type );
	void OnRotationOrderSelectionChanged( FRotationOrderComboItemType NewValue, ESelectInfo::Type );
	FText GetCurrentItemLabel( ) const;

	FReply OnOkClicked( );

	TWeakPtr<SEditableTextBox> LocalAddressText;
    TWeakPtr<SEditableTextBox> LocalRecvPortText;
	TWeakPtr<SCheckBox> Checkbox;
	TWeakPtr<SEditableTextBox> RemoteAddressText;
	TWeakPtr<SComboBox<FRotationOrderComboItemType>> RotationOrders;
	FOnOkClicked OkClicked;

	TArray<FRotationOrderComboItemType> Options;
	FRotationOrderComboItemType CurrentRotationOrder;
};
