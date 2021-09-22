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
        ,_BoneNameList()
		,_Tooltip()
	{}

		SLATE_ARGUMENT(TWeakObjectPtr<UNeuronLiveLinkRemapAsset>, Asset);
        SLATE_ARGUMENT(FName, SrcBoneName);
        SLATE_ARGUMENT(TArray<TSharedPtr<FName>>*, BoneNameList);
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
    void SetBoneChecked(bool Checked);
    FName GetBoneNameFromAsset();
    void OnDstBoneNameTxtChanged(const FText& Value);
    void OnCheckboxStateChanged(ECheckBoxState State);

    // Creates the combo button menu when clicked
    TSharedRef<SWidget> CreateDstBoneSelectWidgetMenu();
    // Called when the user changes the search filter
    void OnFilterTextChanged(const FText& InFilterText);
    void OnFilterTextCommitted(const FText& SearchText, ETextCommit::Type CommitInfo);
    void BuildDstBoneList();
    TSharedRef<ITableRow> OnGenerateWidgetItem(TSharedPtr<FName> InItem, const TSharedRef<STableViewBase>& OwnerTable);
    void OnBoneListSelectionChanged(TSharedPtr<FName> BoneInfo, ESelectInfo::Type SelectInfo);

    static void ConstructBoneFilterMap(const TArray<FName>& BoneArray);
private: 
    TSharedPtr<SCheckBox> CheckBox;
    TSharedPtr<SEditableTextBox> DstBoneWidget;
    TSharedPtr<SListView<TSharedPtr<FName>>> DstBoneListView;
    TArray<TSharedPtr<FName>> DstBoneCandidates;
    TSharedPtr<SComboButton> DstBoneSelectBtn;
    FText SearchFilterText;

    UNeuronLiveLinkRemapAsset* TargetAsset = nullptr;
    TArray<TSharedPtr<FName>>* DstBoneNameList = nullptr;
    FName SrcBoneName;
    FName DstBoneName;
    bool IsValid();
    static TMap<FName, FString> BoneFilterMap;
};
