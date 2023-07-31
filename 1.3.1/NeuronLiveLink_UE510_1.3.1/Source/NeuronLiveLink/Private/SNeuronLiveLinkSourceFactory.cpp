// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#include "SNeuronLiveLinkSourceFactory.h"
#include "Interfaces/IPv4/IPv4Endpoint.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SEditableTextBox.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "FNeuronLiveLinkModule"

const uint16 DEFAULT_UDPPORT = 7003;
const uint16 DEFAULT_LOCALRECVPORT = 7004;
const uint16 DEFAULT_REMOTEPORT = 7003;
const FString DEFAULT_REMOTEIP = TEXT( "127.0.0.1" );

FString EulerOrder_ToString(EulerOrder Order)
{
    FString OptStr;
    switch (Order)
    {
    case EulerOrder::XYZ:
        OptStr = TEXT("XYZ");
        break;
    case EulerOrder::XZY:
        OptStr = TEXT("XZY");
        break;
    case EulerOrder::YXZ:
        OptStr = TEXT("YXZ");
        break;
    case EulerOrder::YZX:
        OptStr = TEXT("YZX");
        break;
    case EulerOrder::ZXY:
        OptStr = TEXT("ZXY");
        break;
    case EulerOrder::ZYX:
        OptStr = TEXT("ZYX");
        break;
    default:
        OptStr = TEXT("YXZ");
    }
    return OptStr;
}

EulerOrder EulerOrder_FromString(const FString& RotOrderS)
{
    EulerOrder Order;
    if (RotOrderS == TEXT("XYZ"))
    {
        Order = EulerOrder::XYZ;
    }
    else if (RotOrderS == TEXT("XZY"))
    {
        Order = EulerOrder::XZY;
    }
    else if (RotOrderS == TEXT("YXZ"))
    {
        Order = EulerOrder::YXZ;
    }
    else if (RotOrderS == TEXT("YZX"))
    {
        Order = EulerOrder::YZX;
    }
    else if (RotOrderS == TEXT("ZXY"))
    {
        Order = EulerOrder::ZXY;
    }
    else if (RotOrderS == TEXT("ZYX"))
    {
        Order = EulerOrder::ZYX;
    }
    else
    {
        Order = EulerOrder::YXZ;
    }
    return Order;
}


void SNeuronLiveLinkSourceFactory::Construct( const FArguments& Args )
{
	OkClicked = Args._OnOkClicked;

	FIPv4Endpoint UdpEndpoint;
	//LocalEndpoint.Address = FIPv4Address::Any;
    FIPv4Address::Parse(DEFAULT_REMOTEIP, UdpEndpoint.Address);
	UdpEndpoint.Port = DEFAULT_UDPPORT;
    FString LocalRecvPort = FString::FromInt(DEFAULT_LOCALRECVPORT);

	bool IsUDP = true;

	FIPv4Endpoint RemoteEndpoint;
	FIPv4Address::Parse( DEFAULT_REMOTEIP, RemoteEndpoint.Address );
	RemoteEndpoint.Port = DEFAULT_REMOTEPORT;

	Options.Add( MakeShared<EulerOrder>( EulerOrder::XYZ ) );
	Options.Add( MakeShared<EulerOrder>( EulerOrder::XZY ) );
	Options.Add( MakeShared<EulerOrder>( EulerOrder::YXZ ) );
	Options.Add( MakeShared<EulerOrder>( EulerOrder::YZX ) );
	Options.Add( MakeShared<EulerOrder>( EulerOrder::ZXY ) );
	Options.Add( MakeShared<EulerOrder>( EulerOrder::ZYX ) );
	CurrentRotationOrder = Options[2];

	ChildSlot
		[
			SNew( SBox )
				.WidthOverride( 300 )
				[
					SNew( SVerticalBox )
					+ SVerticalBox::Slot( )
						.AutoHeight( )
						[
							SNew( SHorizontalBox )
							+ SHorizontalBox::Slot( )
								.HAlign( HAlign_Left )
								.FillWidth( 0.5f )
								[
									SNew( STextBlock )
										.Text( LOCTEXT( "NeuronLocalPortNumber", "UDP Address" ) )
								]
							+ SHorizontalBox::Slot( )
								.HAlign( HAlign_Right )
								.FillWidth( 0.5f )
								[
									SAssignNew( LocalAddressText, SEditableTextBox )
										.Text( FText::FromString( UdpEndpoint.ToString( ) ) )
										.OnTextCommitted( this, &SNeuronLiveLinkSourceFactory::OnLocalEndpointChanged )
								]
						]
                    + SVerticalBox::Slot()
                        .AutoHeight()
                        [
                            SNew(SHorizontalBox)
                            + SHorizontalBox::Slot()
                                .HAlign(HAlign_Left)
                                .FillWidth(0.5f)
                                [
                                    SNew(STextBlock)
                                    .Text(LOCTEXT("NeuronLocalRecvPortNumber", "UDP Receive Port"))
                                ]
                            + SHorizontalBox::Slot()
                                .HAlign(HAlign_Right)
                                .FillWidth(0.5f)
                                [
                                    SAssignNew(LocalRecvPortText, SEditableTextBox)
                                    .Text(FText::FromString(LocalRecvPort))
                                ]
                        ]
					+ SVerticalBox::Slot()
						.AutoHeight( )
						[
							SNew( SHorizontalBox )
							+ SHorizontalBox::Slot( )
								.HAlign( HAlign_Left )
								.FillWidth( 0.5f )
								[
									SNew( STextBlock )
										.Text( LOCTEXT( "IsUDP", "Is UDP" ) )
								]
							+ SHorizontalBox::Slot( )
								.HAlign( HAlign_Right )
								.FillWidth( 0.5f )
								[
									SAssignNew( Checkbox, SCheckBox )
										.IsChecked( IsUDP ? ECheckBoxState::Checked : ECheckBoxState::Unchecked )
								]
						]
					+ SVerticalBox::Slot()
						.AutoHeight()
						[
							SNew(SHorizontalBox)
							+ SHorizontalBox::Slot()
								.HAlign( HAlign_Left )
								.FillWidth(0.5f)
								[
									SNew( STextBlock )
										.Text( LOCTEXT( "NeuronRemotePortNumber", "TCP Address" ) )
								]
							+ SHorizontalBox::Slot()
								.HAlign( HAlign_Right )
								.FillWidth( 0.5f )
								[
									SAssignNew(RemoteAddressText, SEditableTextBox)
										.Text( FText::FromString( RemoteEndpoint.ToString( ) ) )
										.OnTextCommitted( this, &SNeuronLiveLinkSourceFactory::OnRemoteEndpointChanged )
								]
						]
					//+ SVerticalBox::Slot( )
					//	.AutoHeight( )
					//	[
					//		SNew( SHorizontalBox )
					//		+ SHorizontalBox::Slot( )
					//			.HAlign( HAlign_Left )
					//			.FillWidth( 0.5f )
					//			[
					//				SNew( STextBlock )
					//					.Text( LOCTEXT( "NeuronRemoteRotationOrder", "RotationOrder" ) )
					//			]
					//		+ SHorizontalBox::Slot( )
					//			.HAlign( HAlign_Right )
					//			.FillWidth( 0.5f )
					//			[
					//				SAssignNew( RotationOrders, SComboBox<FRotationOrderComboItemType> )
					//					.OptionsSource(&Options)
					//					.OnSelectionChanged( this, &SNeuronLiveLinkSourceFactory::OnRotationOrderSelectionChanged )
					//					.OnGenerateWidget( this, &SNeuronLiveLinkSourceFactory::MakeWidgetForOption )
					//					.InitiallySelectedItem(CurrentRotationOrder)
					//					[
					//						SNew( STextBlock )
					//							.Text( this, &SNeuronLiveLinkSourceFactory::GetCurrentItemLabel )
					//					]
					//			]
					//	]
					+ SVerticalBox::Slot( )
						.HAlign( HAlign_Right )
						.AutoHeight( )
						[
							SNew( SButton )
								.OnClicked( this, &SNeuronLiveLinkSourceFactory::OnOkClicked )
								[
									SNew( STextBlock )
									.Text( LOCTEXT( "Ok", "Ok" ) )
								]
						]
				]
		];
}

void SNeuronLiveLinkSourceFactory::OnRemoteEndpointChanged( const FText& NewValue, ETextCommit::Type )
{
	TSharedPtr<SEditableTextBox> EditabledTextPin = RemoteAddressText.Pin( );
	if (EditabledTextPin.IsValid( ))
	{
		FIPv4Endpoint RemoteEndpoint;
		if (!FIPv4Endpoint::Parse( NewValue.ToString( ), RemoteEndpoint ))
		{
			RemoteEndpoint.Address = FIPv4Address::Any;
			RemoteEndpoint.Port = DEFAULT_REMOTEPORT;
			EditabledTextPin->SetText( FText::FromString( RemoteEndpoint.ToString( ) ) );
            TSharedPtr<SCheckBox> CheckBoxPin = Checkbox.Pin();
            if (CheckBoxPin)
            {
                CheckBoxPin->SetIsChecked(ECheckBoxState::Unchecked);
            }
		}
	}
}

void SNeuronLiveLinkSourceFactory::OnLocalEndpointChanged( const FText& NewValue, ETextCommit::Type )
{
	TSharedPtr<SEditableTextBox> EditabledTextPin = LocalAddressText.Pin( );
	if (EditabledTextPin.IsValid( ))
	{
		FIPv4Endpoint LocalEndpoint;
		if (!FIPv4Endpoint::Parse( NewValue.ToString( ), LocalEndpoint ))
		{
			LocalEndpoint.Address = FIPv4Address::Any;
			LocalEndpoint.Port = DEFAULT_UDPPORT;
			EditabledTextPin->SetText( FText::FromString( LocalEndpoint.ToString( ) ) );
            TSharedPtr<SCheckBox> CheckBoxPin = Checkbox.Pin();
            if (CheckBoxPin)
            {
                CheckBoxPin->SetIsChecked(ECheckBoxState::Checked);
            }
		}
	}
}

FReply SNeuronLiveLinkSourceFactory::OnOkClicked( )
{
	FIPv4Endpoint LocalEndpoint;
    int RecvPort = 0;
	bool IsUDP;
	FIPv4Endpoint RemoteEndpoint;

	TSharedPtr<SEditableTextBox> LocalEditabledTextPin = LocalAddressText.Pin( );
	if (!LocalEditabledTextPin ||
		!FIPv4Endpoint::Parse( LocalEditabledTextPin->GetText( ).ToString( ), LocalEndpoint ))
	{
		return FReply::Handled( );
	}

    TSharedPtr<SEditableTextBox> LocalRecvPortTextPin = LocalRecvPortText.Pin();
    if (!LocalRecvPortTextPin)
    {
        return FReply::Handled();
    }
    RecvPort = FCString::Atoi(*LocalRecvPortTextPin->GetText().ToString());

	TSharedPtr<SEditableTextBox> RemoteEditableTextPin = RemoteAddressText.Pin( );
	if (!RemoteEditableTextPin ||
		!FIPv4Endpoint::Parse( RemoteEditableTextPin->GetText( ).ToString( ), RemoteEndpoint ))
	{
		return FReply::Handled( );
	}

	TSharedPtr<SCheckBox> CheckBoxPin = Checkbox.Pin( );
	if (!CheckBoxPin)
	{
		return FReply::Handled( );
	}
	else
	{
		IsUDP = (CheckBoxPin->GetCheckedState( ) == ECheckBoxState::Checked);
	}

	//TSharedPtr<SComboBox<FRotationOrderComboItemType>> RotationOrdersBoxPin = RotationOrders.Pin( );
	//if (!RotationOrdersBoxPin)
	//{
	//	return FReply::Handled( );
	//}
	//else
	//{
	//	
	//}

    FString RotationOrder = TEXT("YXZ");
    if (CurrentRotationOrder.IsValid())
    {
        RotationOrder = EulerOrder_ToString(*CurrentRotationOrder);
    }

	OkClicked.ExecuteIfBound( LocalEndpoint, IsUDP, RemoteEndpoint, RotationOrder, RecvPort);
	return FReply::Handled( );
}

TSharedRef<SWidget> SNeuronLiveLinkSourceFactory::MakeWidgetForOption(FRotationOrderComboItemType InOption)
{
	FString OptStr = EulerOrder_ToString( *InOption );
	return SNew( STextBlock ).Text( FText::FromString( MoveTemp( OptStr ) ) );
}

void SNeuronLiveLinkSourceFactory::OnRotationOrderSelectionChanged(FRotationOrderComboItemType NewValue,
	ESelectInfo::Type)
{
	CurrentRotationOrder = NewValue;
}

FText SNeuronLiveLinkSourceFactory::GetCurrentItemLabel( ) const
{
	if (CurrentRotationOrder.IsValid( ))
	{
		return FText::FromString( EulerOrder_ToString( *CurrentRotationOrder ) );
	}

	return LOCTEXT( "InvalidComboEntryText", "<<Invalid option>>" );
}

#undef LOCTEXT_NAMESPACE

