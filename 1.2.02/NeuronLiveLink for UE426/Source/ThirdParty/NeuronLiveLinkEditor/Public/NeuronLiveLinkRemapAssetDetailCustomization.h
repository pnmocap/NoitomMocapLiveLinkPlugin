#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "NeuronLiveLinkRemapAsset.h"
#include "ContentBrowserModule.h"
#include "IContentBrowserSingleton.h"

class FNeuronLiveLinkRemapAssetDetailCustomization : public IDetailCustomization
{
public:

	static TSharedRef<IDetailCustomization> MakeInstance()
	{
		return MakeShared<FNeuronLiveLinkRemapAssetDetailCustomization>();
	}

	// IDetailCustomization interface
	virtual void CustomizeDetails(class IDetailLayoutBuilder& DetailBuilder) override;
	// End IDetailCustomization interface
	
    TSharedRef<SWidget> MakeSkeletonPickerMenu();
    void OnAssetSelectedFromPicker(const FAssetData& AssetData);

    void OnEnableMappingCheckboxStateChanged(ECheckBoxState State);
protected:
	/** LiveLinkComponent on which we're acting */
	TWeakObjectPtr<UNeuronLiveLinkRemapAsset> EditedObject;

	/** Keep a reference to force refresh the layout */
	IDetailLayoutBuilder* DetailLayout = nullptr;

    TSharedPtr<STextBlock> SkeletonNameBlock;
    TSharedPtr<SComboButton> SkeletonPickerComboButton;
    TArray<TSharedPtr<FName>> CandidateBoneNames;

    TArray<TSharedPtr<SNeuronBoneMappingWidget>> BoneMappingWidgets;

};
