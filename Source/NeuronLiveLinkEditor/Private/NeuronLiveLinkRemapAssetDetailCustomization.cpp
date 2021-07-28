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
		//Hide the Map default UI
		//TSharedRef<IPropertyHandle> ControllersProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UNeuronLiveLinkRemapAsset, BoneNameMap));
		//ControllersProperty->MarkHiddenByCustomization();
        FName BonePrefix = SelectedPtr->GetBonePrefix();
        CandidateBoneNames.Reset();
        if (SelectedPtr->bEnableBoneMapping)
        {
            TArray<FName> NeuronBoneNames = UMocapApp::GetAvatarBuildinBoneNames();

            TSharedRef<IPropertyHandle> ControllersProperty = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UNeuronLiveLinkRemapAsset, BoneMapping));
            ControllersProperty->MarkHiddenByCustomization();

            //Get hook to the controller map. If that fails, early exit
            //TSharedPtr<IPropertyHandleMap> MapHandle = ControllersProperty->AsMap();
            //if (MapHandle.IsValid())
            //{
                uint32 Count = NeuronBoneNames.Num();
                //MapHandle->GetNumElements(Count);

                for (uint32 i = 0; i < Count; ++i)
                {
                    //TSharedPtr<IPropertyHandle> EntryHandle = ControllersProperty->GetChildHandle(i);
                    //if (!EntryHandle.IsValid())
                    //{
                    //    continue;
                    //}

                    FName FromName = NeuronBoneNames[i];
                    //FName ToName;
                    //TSharedPtr<IPropertyHandle> KeyHandle = EntryHandle->GetKeyHandle();
                    //KeyHandle->GetValue(FromName);
                    //EntryHandle->GetValue(ToName);

                    IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(BoneMappingCategory);
                    //Category.AddProperty(EntryHandle);
                    FDetailWidgetRow& MergeRow = Category.AddCustomRow(LOCTEXT("BoneMapping", "BoneMapping"))
                        .WholeRowContent()
                        [
                            SNew(SSplitter)
                            .Orientation(EOrientation::Orient_Horizontal)
                            + SSplitter::Slot()
                            .Value(0.1f)
                            [
                                SNew(STextBlock)
                                .Text(FText::FromString(FString::FromInt(i)))
                            ]
                            +SSplitter::Slot()
                            .Value(0.9f)
                            [
                                SNew(SNeuronBoneMappingWidget)
                                .Asset(SelectedPtr)
                                .SrcBoneName(FromName)
                                .BoneNameList(&CandidateBoneNames)
                                .Tooltip(LOCTEXT("EditDstBoneName", "Edit name"))
                            ]
                    ];
            }

            IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(BoneMappingCategory);
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
                            .Font(FEditorStyle::GetFontStyle("BoldFont"))
                            .Text(LOCTEXT("SelSkeleton", "Select a skeleton for mapping"))
                        ]
                        + SVerticalBox::Slot()
                        .AutoHeight()
                        [
                            SAssignNew(SkeletonPickerComboButton, SComboButton)
                            //.ButtonStyle(FEditorStyle::Get(), "NoBorder")
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
	}
}

TSharedRef<SWidget> FNeuronLiveLinkRemapAssetDetailCustomization::MakeSkeletonPickerMenu()
{
    FContentBrowserModule& ContentBrowserModule = FModuleManager::Get().LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));

    FAssetPickerConfig AssetPickerConfig;

    UClass* FilterClass = USkeleton::StaticClass();
    if (FilterClass != NULL)
    {
        AssetPickerConfig.Filter.ClassNames.Add(FilterClass->GetFName());
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

#undef LOCTEXT_NAMESPACE
