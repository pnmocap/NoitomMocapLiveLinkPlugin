#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "NeuronLiveLinkRemapAsset.h"

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
	
protected:
	/** LiveLinkComponent on which we're acting */
	TWeakObjectPtr<UNeuronLiveLinkRemapAsset> EditedObject;

	/** Keep a reference to force refresh the layout */
	IDetailLayoutBuilder* DetailLayout = nullptr;
};
