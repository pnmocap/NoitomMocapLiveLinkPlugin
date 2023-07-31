#include "NeuronLiveLinkRemapAssetDetailCustomization.h"
#include "MocapStructs.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "EditorFontGlyphs.h"
#include "IDetailGroup.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "ScopedTransaction.h"
#include "Widgets/Input/SComboButton.h"
#include "NeuronBoneMappingWidget.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"
#include "EditorStyleSet.h"
#include "EngineVersionCompare.h"

#define LOCTEXT_NAMESPACE "NeuronLiveLinkRemapAssetDetailCustomization"

void FNeuronLiveLinkRemapAssetDetailCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	DetailLayout = &DetailBuilder;

    FName BoneMappingCategory = TEXT("AxisNeuron Bone Mapping");

	TArray<TWeakObjectPtr<UObject>> SelectedObjects = DetailBuilder.GetSelectedObjects();

	//Hide everything when more than one are selected
	if (SelectedObjects.Num() != 1)
	{
        checkf(false, TEXT("Select more than one object."));
		return;
	}

	if (UNeuronLiveLinkRemapAsset* SelectedPtr = Cast<UNeuronLiveLinkRemapAsset>(SelectedObjects[0].Get()))
	{
        EditedObject = SelectedPtr;
		FName BonePrefix = SelectedPtr->GetBonePrefix();
        CandidateBoneNames.Reset();
        IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(BoneMappingCategory);
        TSharedRef<IPropertyHandle> EnableBoneMappingProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UNeuronLiveLinkRemapAsset, bEnableBoneMapping));
        
        bool Enabled = SelectedPtr->bEnableBoneMapping;
        Category.AddCustomRow(LOCTEXT("BoneMappingEnable", "BoneMappingEnableBtn"))
            .WholeRowContent()
            [
                SNew(SHorizontalBox)
                .IsEnabled(true)
                + SHorizontalBox::Slot()
                .FillWidth(1.0f)
                .HAlign(HAlign_Left)
                [
                    SNew(STextBlock)
                    .Text(LOCTEXT("BoneMappingEnableLabel", "Enable BoneMapping"))
                ]
                + SHorizontalBox::Slot()
                .FillWidth(0.5f)
                .HAlign(HAlign_Left)
                [
                    SNew(SCheckBox)
                    .IsChecked(Enabled ? ECheckBoxState::Checked : ECheckBoxState::Unchecked)
                .OnCheckStateChanged(this, &FNeuronLiveLinkRemapAssetDetailCustomization::OnEnableMappingCheckboxStateChanged)
                ]
            ];

        //if (SelectedPtr->bEnableBoneMapping)
        {
            TArray<FName> NeuronBoneNames = UMocapApp::GetAvatarBuildinBoneNames();

            SNeuronBoneMappingWidget::ConstructBoneFilterMap(NeuronBoneNames);

            TSharedRef<IPropertyHandle> ControllersProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UNeuronLiveLinkRemapAsset, BoneMapping));
            ControllersProperty->MarkHiddenByCustomization();

            uint32 Count = NeuronBoneNames.Num();
            BoneMappingWidgets.Reset(Count);
            for (uint32 i = 0; i < Count; ++i)
            {
                FName FromName = NeuronBoneNames[i];
                //Category.AddProperty(EntryHandle);
                TSharedPtr<SNeuronBoneMappingWidget> Wid;
                FDetailWidgetRow& MergeRow = Category.AddCustomRow(LOCTEXT("BoneMapping", "BoneMapping"))
                    .WholeRowContent()
                    [
                        SNew(SSplitter)
                        .Orientation(EOrientation::Orient_Horizontal)
                        + SSplitter::Slot()
                        .Value(0.1f)
                        [
                             SNew(SHorizontalBox)
                             + SHorizontalBox::Slot()
                             .HAlign(HAlign_Left)
                             .VAlign(VAlign_Center)
                            [
                                SNew(STextBlock)
                                .Text(FText::FromString(FString::FromInt(i)))
                            ]
                        ]
                        +SSplitter::Slot()
                        .Value(0.9f)
                        [
                            SAssignNew(Wid, SNeuronBoneMappingWidget)
                            .IsEnabled(Enabled)
                            .Asset(SelectedPtr)
                            .SrcBoneName(FromName)
                            .BoneNameList(&CandidateBoneNames)
                            .Tooltip(LOCTEXT("EditDstBoneName", "Edit name"))
                        ]
                ];
                BoneMappingWidgets.AddUnique(Wid);
            }

            FDetailWidgetRow& MergeRow = Category.AddCustomRow(LOCTEXT("PickSkeletonButton", "PickSkeletonButton"))
                .WholeRowContent()
                [
                    SNew(SBox)
                    .WidthOverride(400)
                    .HeightOverride(50)
                    .Content()
                    [
                        SNew(SVerticalBox)
                        + SVerticalBox::Slot()
                        .AutoHeight()
                        [
                            SAssignNew(SkeletonNameBlock, STextBlock)
#if UE_ENGINE_VER_LESS_THAN(5,1)
                            .Font(FEditorStyle::GetFontStyle("BoldFont"))
#else
                            .Font(FAppStyle::GetFontStyle("BoldFont"))
#endif
                            .Text(LOCTEXT("SelSkeleton", "Select a skeleton for mapping"))
                        ]
                        + SVerticalBox::Slot()
                        .AutoHeight()
                        [
                            SAssignNew(SkeletonPickerComboButton, SComboButton)
                            //.ButtonStyle(FEditorStyle::Get(), "NoBorder")
                            .IsEnabled(Enabled)
                            .ContentPadding(1.f)
                            .Visibility(EVisibility::Visible)
                            .OnGetMenuContent(this, &FNeuronLiveLinkRemapAssetDetailCustomization::MakeSkeletonPickerMenu)
                            .HasDownArrow(true)
                            .ToolTipText(LOCTEXT("PickAsset", "Pick a skeleton asset to assign bone name"))
                            .ButtonContent()
                            [
                                SNew(STextBlock)
                                .Text(LOCTEXT("PickSkeletonAssetBtn", "Pick a skeleton"))
                            ]
                        ]
                    ]
                ];
        }
        if (Enabled)
        {
            OnEnableMappingCheckboxStateChanged(ECheckBoxState::Checked);
        }
	}
}

TSharedRef<SWidget> FNeuronLiveLinkRemapAssetDetailCustomization::MakeSkeletonPickerMenu()
{
    FContentBrowserModule& ContentBrowserModule = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));

    FAssetPickerConfig AssetPickerConfig;

    UClass* FilterClass = USkeleton::StaticClass();
    if (FilterClass != NULL)
    {
#if UE_ENGINE_VER_LESS_THAN(5,1)
        AssetPickerConfig.Filter.ClassNames.Add(FilterClass->GetFName());
#else
        AssetPickerConfig.Filter.ClassPaths.Add(FilterClass->GetClassPathName());
#endif
        AssetPickerConfig.Filter.bRecursiveClasses = true;
    }

    AssetPickerConfig.OnAssetSelected = FOnAssetSelected::CreateSP(this, &FNeuronLiveLinkRemapAssetDetailCustomization::OnAssetSelectedFromPicker);
    //AssetPickerConfig.OnShouldFilterAsset = true;// OnShouldFilterAsset;
    AssetPickerConfig.bAllowNullSelection = true;
    AssetPickerConfig.ThumbnailLabel = EThumbnailLabel::ClassName;
    AssetPickerConfig.InitialAssetViewType = EAssetViewType::Type::List;

    return SNew(SBox)
        .WidthOverride(250.f)
        .HeightOverride(400.f)
        [
            ContentBrowserModule.Get().CreateAssetPicker(AssetPickerConfig)
        ];
}

void FNeuronLiveLinkRemapAssetDetailCustomization::OnAssetSelectedFromPicker(const FAssetData& AssetData)
{
    SkeletonPickerComboButton->SetIsOpen(false);
    USkeleton* TargetSkeleton = Cast<USkeleton>(AssetData.GetAsset());
    if (TargetSkeleton)
    {
        UE_LOG(LogTemp, Log, TEXT("Pick Skeleton %s"), *(AssetData.GetAsset()->GetFName().ToString()));
        SkeletonNameBlock->SetText(FText::FromString(TargetSkeleton->GetFullName()));
        CandidateBoneNames.Reset();
        const FReferenceSkeleton& RefSkeleton = TargetSkeleton->GetReferenceSkeleton();
        for (int32 BoneIdx = 0; BoneIdx < RefSkeleton.GetNum(); ++BoneIdx)
        {
            FName BoneName = RefSkeleton.GetBoneName(BoneIdx);
            CandidateBoneNames.AddUnique(MakeShared<FName>(BoneName));
        }
    }
}

void FNeuronLiveLinkRemapAssetDetailCustomization::OnEnableMappingCheckboxStateChanged(ECheckBoxState State)
{
    bool Enabled = State == ECheckBoxState::Checked;
    if (EditedObject.IsValid())
    {
        UNeuronLiveLinkRemapAsset* SelectedPtr = Cast<UNeuronLiveLinkRemapAsset>(EditedObject.Get());
        bool OldState = SelectedPtr->bEnableBoneMapping;
        SelectedPtr->bEnableBoneMapping = Enabled;
        for (auto& W : BoneMappingWidgets)
        {
            W->SetEnabled(Enabled);
            if (Enabled)
            {
                W->SetBoneChecked(true);
            }
        }
        SkeletonPickerComboButton->SetEnabled(Enabled);
        if (OldState != Enabled)
        {
            SelectedPtr->Modify(true);
        }
    }
}

#undef LOCTEXT_NAMESPACE
