// Copyright 2015 Smartisan Technology Co., Ltd. All Rights Reserved.

#include "NeuronBoneMappingWidget.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "DetailLayoutBuilder.h"
#include "Internationalization/Regex.h"


#define LOCTEXT_NAMESPACE "NeuronBoneMappingWidget"


/////////////////////////////////////////////////////

void SNeuronBoneMappingWidget::Construct(const FArguments& InArgs)
{
    if (InArgs._Asset.IsValid())
    {
        TargetAsset = InArgs._Asset.Get();
    }

    if (InArgs._BoneNameList != nullptr)
    {
        DstBoneNameList = InArgs._BoneNameList;
    }

    SrcBoneName = InArgs._SrcBoneName;
    DstBoneName = GetBoneNameFromAsset();

    FText FinalTooltip = FText(LOCTEXT("BoneNameToolTip", "Click to choose a different custom bone"));
    bool Valid = IsValid();

    BuildDstBoneList();

    SAssignNew(DstBoneListView, SListView<TSharedPtr<FName>>)
        .ListItemsSource(&DstBoneCandidates)
        .SelectionMode(ESelectionMode::Single)
        .OnGenerateRow(this, &SNeuronBoneMappingWidget::OnGenerateWidgetItem)
        .OnSelectionChanged(this, &SNeuronBoneMappingWidget::OnBoneListSelectionChanged);

    this->ChildSlot
    [
        SNew(SHorizontalBox)
        .IsEnabled(true)
        + SHorizontalBox::Slot()
        .FillWidth(0.5f)
        .HAlign(HAlign_Left)
        [
            SAssignNew(CheckBox, SCheckBox)
            .IsChecked(Valid ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
            .OnCheckStateChanged(this, &SNeuronBoneMappingWidget::OnCheckboxStateChanged)
        ]
        + SHorizontalBox::Slot()
        .FillWidth(1.0f)
        .HAlign(HAlign_Left)
        [
            SNew(STextBlock)
            .Text(FText::FromName(SrcBoneName))
        ]
        + SHorizontalBox::Slot()
        .FillWidth(1.0f)
        .HAlign(HAlign_Right)
        [
            SNew(STextBlock)
            .Text(this, &SNeuronBoneMappingWidget::GetBonePrefix)
        ]
        + SHorizontalBox::Slot()
        .FillWidth(2.0f)
        .HAlign(HAlign_Left)
        [
            SNew(SHorizontalBox)
            + SHorizontalBox::Slot()
            .FillWidth(1.5f)
            .HAlign(HAlign_Fill)
            .VAlign(VAlign_Top)
            [
                SAssignNew(DstBoneWidget, SEditableTextBox)
                .IsEnabled(Valid)
                //.Padding(FMargin(2.0f, 2.0f, 2.0f, 2.0f))
                .MinDesiredWidth(240.0f)
                .Text(FText::FromName(DstBoneName))
                .OnTextChanged(this, &SNeuronBoneMappingWidget::OnDstBoneNameTxtChanged)
            ]
            + SHorizontalBox::Slot()
            .FillWidth(0.5f)
            .HAlign(HAlign_Fill)
            .VAlign(VAlign_Top)
            [
                SAssignNew(DstBoneSelectBtn, SComboButton)
                .IsEnabled(Valid)
                .OnGetMenuContent(FOnGetContent::CreateSP(this, &SNeuronBoneMappingWidget::CreateDstBoneSelectWidgetMenu))
                .ButtonContent()
                [
                    SNew(STextBlock)
                    .Text(FText::FromString(TEXT("Select")))
                ]
            ]
        ]
    ];
}

FText SNeuronBoneMappingWidget::GetBonePrefix() const
{
    if (TargetAsset)
    {
        FName Prefix = TargetAsset->GetBonePrefix();
        if (Prefix != NAME_None)
        {
            return FText::FromString(Prefix.ToString());
        }
    }
    return FText();
}

bool SNeuronBoneMappingWidget::IsValid()
{
    if (TargetAsset)
    {
        return TargetAsset->BoneMapping.Contains(SrcBoneName);
    }
    return false;
}

void SNeuronBoneMappingWidget::SetBoneValid(bool Valid)
{
    if (Valid)
    {
        if (!TargetAsset->BoneMapping.Contains(SrcBoneName))
        {
            TargetAsset->BoneMapping.Add(SrcBoneName, DstBoneName);
        }
    }
    else
    {
        TargetAsset->BoneMapping.Remove(SrcBoneName);
        DstBoneWidget->SetText(FText::FromName(GetBoneNameFromAsset()));
    }

    DstBoneWidget->SetEnabled(Valid);
    DstBoneSelectBtn->SetEnabled(Valid);
}

void SNeuronBoneMappingWidget::SetDstBoneName(FName Name)
{
    if (DstBoneName != Name)
    {
        DstBoneName = Name;
        if (!TargetAsset->BoneMapping.Contains(SrcBoneName))
        {
            TargetAsset->BoneMapping.Add(SrcBoneName, DstBoneName);
        }
        else
        {
            TargetAsset->BoneMapping[SrcBoneName] = DstBoneName;
        }
    }
}

FName SNeuronBoneMappingWidget::GetBoneNameFromAsset()
{
    if (TargetAsset)
    {
        FName* ToName = TargetAsset->BoneMapping.Find(SrcBoneName);
        if (ToName != nullptr)
        {
            return *ToName;
        }
    }
    return SrcBoneName;
}

void SNeuronBoneMappingWidget::OnDstBoneNameTxtChanged(const FText& Value)
{
    FName Name = FName(Value.ToString().TrimStartAndEnd());
    SetDstBoneName(Name);
}

void SNeuronBoneMappingWidget::OnCheckboxStateChanged(ECheckBoxState State)
{
    bool IsChecked = (State == ECheckBoxState::Checked);
    SetBoneValid(IsChecked);
}

TSharedRef<SWidget> SNeuronBoneMappingWidget::CreateDstBoneSelectWidgetMenu()
{
    BuildDstBoneList();
    TSharedPtr<SSearchBox> SearchWidgetToFocus = NULL;
    TSharedRef<SBorder> MenuWidget = SNew(SBorder)
        .Padding(6)
        .BorderImage(FEditorStyle::GetBrush("NoBorder"))
        .Content()
        [
            SNew(SBox)
            .WidthOverride(300)
            .HeightOverride(512)
            .Content()
            [
                SNew(SVerticalBox)
                + SVerticalBox::Slot()
                .AutoHeight()
                [
                    SNew(STextBlock)
                    .Font(FEditorStyle::GetFontStyle("BoldFont"))
                    .Text(LOCTEXT("BonePickerTitle", "Pick Bone Mapping To..."))
                ]
                + SVerticalBox::Slot()
                .AutoHeight()
                [
                    SNew(SSeparator)
                    .SeparatorImage(FEditorStyle::GetBrush("Menu.Separator"))
                    .Orientation(Orient_Horizontal)
                ]
                + SVerticalBox::Slot()
                .AutoHeight()
                [
                    SAssignNew(SearchWidgetToFocus, SSearchBox)
                    .SelectAllTextWhenFocused(true)
                    .OnTextChanged(this, &SNeuronBoneMappingWidget::OnFilterTextChanged)
                    .OnTextCommitted(this, &SNeuronBoneMappingWidget::OnFilterTextCommitted)
                    .HintText(NSLOCTEXT("BonePicker", "Search", "Search..."))
                ]
                + SVerticalBox::Slot()
                [
                    DstBoneListView->AsShared()
                ]
            ]
        ];

    DstBoneSelectBtn->SetMenuContentWidgetToFocus(SearchWidgetToFocus);
    DstBoneListView->RequestListRefresh();

    return MenuWidget;
}

void SNeuronBoneMappingWidget::OnFilterTextChanged(const FText& InFilterText)
{
    SearchFilterText = InFilterText;
    BuildDstBoneList();
}

void SNeuronBoneMappingWidget::OnFilterTextCommitted(const FText& SearchText, ETextCommit::Type CommitInfo)
{
    // nothing to do
}

static TArray<FName> BuildInBoneNames = {
    TEXT("pelvis"),
    TEXT("clavicle_l"),
    TEXT("clavicle_r"),
    TEXT("upperarm_l"),
    TEXT("upperarm_r"),
    TEXT("lowerarm_l"),
    TEXT("lowerarm_r"),
    TEXT("hand_l"),
    TEXT("hand_r"),
    TEXT("thigh_l"),
    TEXT("thigh_r"),
    TEXT("calf_l"),
    TEXT("calf_r"),
    TEXT("foot_l"),
    TEXT("foot_r"),
};

bool IsStringMatchPattern(const FString& Str, const FString& Pattern, ESearchCase::Type SearchCase = ESearchCase::IgnoreCase)
{
    const bool useRegx = true; // false;
    if (useRegx)
    {
        if (SearchCase == ESearchCase::CaseSensitive)
        {
            FRegexPattern MatherPatter(Pattern);
            FRegexMatcher Matcher(MatherPatter, Str);
            return Matcher.FindNext();
        }
        else
        {
            FRegexPattern MatherPatter(Pattern.ToLower());
            FRegexMatcher Matcher(MatherPatter, Str.ToLower());
            return Matcher.FindNext();
        }
    }
    else
    {
        return Str.Contains(Pattern, SearchCase);
    }
}

void SNeuronBoneMappingWidget::BuildDstBoneList()
{
    DstBoneCandidates.Reset();
    FName PreFix;
    if (TargetAsset)
    {
        PreFix = TargetAsset->GetBonePrefix();
    }
    bool HasPrefix = PreFix != NAME_None;
    bool HasFilter = !SearchFilterText.IsEmpty();
    FString TmpStr;
    FString EmptyStr(TEXT(""));
    for (const FName& N : BuildInBoneNames)
    {
        TmpStr = N.ToString();
        if (HasPrefix)
        {
            TmpStr.ReplaceInline(*PreFix.ToString(), *EmptyStr);
        }
        if (!HasFilter || IsStringMatchPattern(TmpStr, SearchFilterText.ToString()))
        {
            DstBoneCandidates.AddUnique(MakeShared<FName>(FName(*TmpStr)));
        }
    }
    
    if (DstBoneNameList != nullptr)
    {
        for (TSharedPtr<FName> N : *DstBoneNameList)
        {
            TmpStr = N->ToString();
            if (HasPrefix)
            {
                TmpStr.ReplaceInline(*PreFix.ToString(), *EmptyStr);
            }
            if (!HasFilter || IsStringMatchPattern(TmpStr, SearchFilterText.ToString()))
            {
                DstBoneCandidates.AddUnique(MakeShared<FName>(FName(*TmpStr)));
            }
        }
    }

    if (DstBoneListView.IsValid())
    {
        DstBoneListView->RequestListRefresh();
    }
}

TSharedRef<ITableRow> SNeuronBoneMappingWidget::OnGenerateWidgetItem(TSharedPtr<FName> InItem, const TSharedRef<STableViewBase>& OwnerTable)
{
    return SNew(STableRow<TSharedPtr<FName>>, OwnerTable)
        [
            SNew(SVerticalBox)
            + SVerticalBox::Slot()
            .AutoHeight()
            [
                SNew(STextBlock)
                .Text(FText::FromName(*InItem))
            ]
        ];
}

void SNeuronBoneMappingWidget::OnBoneListSelectionChanged(TSharedPtr<FName> BoneInfo, ESelectInfo::Type SelectInfo)
{
    if (BoneInfo.IsValid())
    {
        DstBoneSelectBtn->SetIsOpen(false);
        DstBoneWidget->SetText(FText::FromString(BoneInfo->ToString()));
    }
}

#undef LOCTEXT_NAMESPACE
