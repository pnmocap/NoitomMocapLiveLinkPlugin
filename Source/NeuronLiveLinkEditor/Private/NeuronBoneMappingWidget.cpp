// Copyright 2015 Smartisan Technology Co., Ltd. All Rights Reserved.

#include "NeuronBoneMappingWidget.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "DetailLayoutBuilder.h"


#define LOCTEXT_NAMESPACE "NeuronBoneMappingWidget"


/////////////////////////////////////////////////////

void SNeuronBoneMappingWidget::Construct(const FArguments& InArgs)
{
    if (InArgs._Asset.IsValid())
    {
        TargetAsset = InArgs._Asset.Get();
    }
    SrcBoneName = InArgs._SrcBoneName;
    DstBoneName = GetBoneNameFromAsset();

    FText FinalTooltip = FText(LOCTEXT("BoneNameToolTip", "Click to choose a different custom bone"));
    bool Valid = IsValid();

    this->ChildSlot
        [
            SNew(SHorizontalBox)
            .IsEnabled(true)
        + SHorizontalBox::Slot()
        .HAlign(HAlign_Fill)
        [
            SAssignNew(CheckBox, SCheckBox)
            .IsChecked(Valid ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
            .OnCheckStateChanged(this, &SNeuronBoneMappingWidget::OnCheckboxStateChanged)
        ]
        + SHorizontalBox::Slot()
        .HAlign(HAlign_Fill)
        [
            SNew(STextBlock)
            .Text(FText::FromName(SrcBoneName))
        ]
        + SHorizontalBox::Slot()
        .HAlign(HAlign_Right)
        [
            SNew(STextBlock)
            .Text(this, &SNeuronBoneMappingWidget::GetBonePrefix)
        ]
        + SHorizontalBox::Slot()
        .HAlign(HAlign_Left)
        [
            SAssignNew(DstBoneWidget, SEditableTextBox)
            .IsEnabled(Valid)
            .Text(FText::FromName(DstBoneName))
            .OnTextChanged(this, &SNeuronBoneMappingWidget::OnDstBoneNameTxtChanged)
        ]
    ];
}

FText SNeuronBoneMappingWidget::GetBonePrefix() const
{
    if (TargetAsset)
    {
        return FText::FromName(TargetAsset->GetBonePrefix());
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

#undef LOCTEXT_NAMESPACE
