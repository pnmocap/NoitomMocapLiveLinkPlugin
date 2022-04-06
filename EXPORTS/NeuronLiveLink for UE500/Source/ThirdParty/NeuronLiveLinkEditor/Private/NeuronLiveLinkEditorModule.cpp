#include "LiveLinkEditorPrivate.h"
#include "NeuronLiveLinkRemapAsset.h"
#include "NeuronLiveLinkRemapAssetDetailCustomization.h"

#define LOCTEXT_NAMESPACE "NeuronLiveLinkModule"

DEFINE_LOG_CATEGORY(LogNeuronLiveLinkEditor);

class FNeuronLiveLinkEditorModule : public IModuleInterface
{

public:
	virtual void StartupModule() override
	{
		FPropertyEditorModule& PropertyEditorModule = FModuleManager::Get().LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyEditorModule.RegisterCustomClassLayout(UNeuronLiveLinkRemapAsset::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FNeuronLiveLinkRemapAssetDetailCustomization::MakeInstance));
        PropertyEditorModule.NotifyCustomizationModuleChanged();
	}
	
	virtual void ShutdownModule() override
	{
		if (UObjectInitialized() && !IsEngineExitRequested())
		{
			FPropertyEditorModule* PropertyEditorModule = FModuleManager::Get().GetModulePtr<FPropertyEditorModule>("PropertyEditor");
			if (PropertyEditorModule)
			{
				PropertyEditorModule->UnregisterCustomClassLayout(UNeuronLiveLinkRemapAsset::StaticClass()->GetFName());
                PropertyEditorModule->NotifyCustomizationModuleChanged();
			}
            
		}
	}

	virtual bool SupportsDynamicReloading() override
	{
		return false;
	}
	
};

IMPLEMENT_MODULE(FNeuronLiveLinkEditorModule, NeuronLiveLinkEditor);

#undef LOCTEXT_NAMESPACE