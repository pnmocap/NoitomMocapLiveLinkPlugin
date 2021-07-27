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
                                .Tooltip(LOCTEXT("EditDstBoneName", "Edit name"))
                            ]
                    ];
            }

            IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(BoneMappingCategory);
            FDetailWidgetRow& MergeRow = Category.AddCustomRow(LOCTEXT("Button", "Button"))
                .WholeRowContent()
                [
                    SNew(SHorizontalBox)
                    + SHorizontalBox::Slot()
                    .AutoWidth()
                    .VAlign(VAlign_Center)
                    [
                        SNew(SButton)
                        .Text(LOCTEXT("LoadSkeleton", "Load Skeleton"))
                        .ToolTipText(LOCTEXT("LoadSkeleton", "Load Skeleton"))
                    ]
                ];
        }
	}
}

#undef LOCTEXT_NAMESPACE
