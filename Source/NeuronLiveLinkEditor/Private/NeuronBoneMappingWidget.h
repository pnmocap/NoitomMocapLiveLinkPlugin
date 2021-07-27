// Copyright 2015 Smartisan Technology Co., Ltd. All Rights Reserved.

#pragma once

#include "Widgets/Views/STreeView.h"
#include "Widgets/Input/SComboButton.h"
#include "NeuronLiveLinkRemapAsset.h"

class SNeuronBoneMappingWidget : public SCompoundWidget
{
public: 

	SLATE_BEGIN_ARGS(SNeuronBoneMappingWidget)
		:_Asset()
        ,_SrcBoneName()
		,_Tooltip()
	{}

		SLATE_ARGUMENT(TWeakObjectPtr<UNeuronLiveLinkRemapAsset>, Asset);
        SLATE_ARGUMENT(FName, SrcBoneName);
		/** Set tooltip attribute */
		SLATE_ARGUMENT(FText, Tooltip);

	SLATE_END_ARGS();

	/**
	 * Construct this widget
	 *
	 * @param	InArgs	The declaration data for this widget
	 */
	void Construct( const FArguments& InArgs );

    FText GetBonePrefix() const;
    void SetBoneValid(bool Valid);
    void SetDstBoneName(FName Name);
    FName GetBoneNameFromAsset();
    void OnDstBoneNameTxtChanged(const FText& Value);
    void OnCheckboxStateChanged(ECheckBoxState State);
private: 

    TSharedPtr<SCheckBox> CheckBox;
    TSharedPtr<SEditableTextBox> DstBoneWidget;

    UNeuronLiveLinkRemapAsset* TargetAsset = nullptr;
    FName SrcBoneName;
    FName DstBoneName;
    bool IsValid();
};
