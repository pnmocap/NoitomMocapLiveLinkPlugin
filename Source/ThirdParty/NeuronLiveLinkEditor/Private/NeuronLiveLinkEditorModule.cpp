#include "LiveLinkEditorPrivate.h"
#include "NeuronLiveLinkRemapAsset.h"
#include "NeuronLiveLinkRemapAssetDetailCustomization.h"
#include "NeuronEditorWindowStyle.h"
#include "NeuronEditorWindowCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "ToolMenus.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/WidgetBlueprintGeneratedClass.h"
#include "BaseWidgetBlueprint.h"
#include "Kismet/GameplayStatics.h"
#include "EngineVersionCompare.h"

static const FName NeuronEditorWindowTabName("NeuronEditorWindow");

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

		FNeuronEditorWindowStyle::Initialize();
		FNeuronEditorWindowStyle::ReloadTextures();

		FNeuronEditorWindowCommands::Register();

		PluginCommands = MakeShareable(new FUICommandList);

		PluginCommands->MapAction(
			FNeuronEditorWindowCommands::Get().OpenPluginWindow,
			FExecuteAction::CreateRaw(this, &FNeuronLiveLinkEditorModule::PluginButtonClicked),
			FCanExecuteAction());

		UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FNeuronLiveLinkEditorModule::RegisterMenus));

		FGlobalTabmanager::Get()->RegisterNomadTabSpawner(NeuronEditorWindowTabName, FOnSpawnTab::CreateRaw(this, &FNeuronLiveLinkEditorModule::OnSpawnPluginTab))
			.SetDisplayName(LOCTEXT("FNeuronEditorWindowTabTitle", "Neuron"))
			.SetMenuType(ETabSpawnerMenuType::Hidden);
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

		UToolMenus::UnRegisterStartupCallback(this);
		UToolMenus::UnregisterOwner(this);
		FNeuronEditorWindowStyle::Shutdown();
		FNeuronEditorWindowCommands::Unregister();
		FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(NeuronEditorWindowTabName);
	}

	virtual bool SupportsDynamicReloading() override
	{
		return false;
	}
	
    /** This function will be bound to Command (by default it will bring up plugin window) */
    void PluginButtonClicked()
    {
#if UE_ENGINE_VER_LESS_THAN(5, 0)
		TSharedRef<class SDockTab> Tab = FGlobalTabmanager::Get()->InvokeTab(NeuronEditorWindowTabName);
#else
		TSharedPtr<class SDockTab> Tab = FGlobalTabmanager::Get()->TryInvokeTab(NeuronEditorWindowTabName);
#endif

#if !UE_ENGINE_VER_LESS_THAN(5, 0)
		if (Tab.IsValid())
#endif
		{
			TSharedPtr<SWindow> ParentWindowPtr = Tab->GetParentWindow();
			if ((Tab->GetTabRole() == ETabRole::MajorTab || Tab->GetTabRole() == ETabRole::NomadTab) && ParentWindowPtr.IsValid() && ParentWindowPtr != FGlobalTabmanager::Get()->GetRootWindow())
			{
				ParentWindowPtr->Resize(FVector2D(402, 126));
			}
		}
    }

private:

	void RegisterMenus()
	{
		// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
		FToolMenuOwnerScoped OwnerScoped(this);

		{
			UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
			{
				FToolMenuSection& Section = Menu->FindOrAddSection("Neuron");
				Section.AddMenuEntryWithCommandList(FNeuronEditorWindowCommands::Get().OpenPluginWindow, PluginCommands);
			}
		}

		{
#if UE_ENGINE_VER_LESS_THAN(5, 0)
			UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
#else
			UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
#endif
			{
				FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Neuron");
				{
					FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FNeuronEditorWindowCommands::Get().OpenPluginWindow));
					Entry.SetCommandList(PluginCommands);
				}
			}
		}
	}

    TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs)
    {
		FString WidgetClassName(TEXT("WidgetBlueprintGeneratedClass'/NeuronLiveLink/MocapCommandUI/WBP_AxisStudio.WBP_AxisStudio_C'"));
		FText WidgetText = FText::Format(
            LOCTEXT("WindowWidgetText", "Failed to generate WBP_AxisStudio widget @ {0} in {1}\nPlease check Asset {2}"),
            FText::FromString(TEXT("FNeuronLiveLinkEditorModule::OnSpawnPluginTab")),
            FText::FromString(TEXT("NeuronLiveLinkEditorModule.cpp")),
			FText::FromString(WidgetClassName)
        );
		TSubclassOf<UUserWidget> WidgetClass = StaticLoadClass(UUserWidget::StaticClass(), nullptr, *WidgetClassName);
		TSharedRef<SWidget> ContentWidget = SNullWidget::NullWidget;
		UWorld* World = GEditor->GetEditorWorldContext().World();
		UUserWidget* Widget = nullptr;
		if (World)
		{
			Widget = CreateWidget<UUserWidget>(World, WidgetClass);
		}
		if (Widget)
		{
			UFunction* Func = Widget->FindFunction(FName("DisableConnectPanel"));
			if (Func)
			{
				//struct FUNC_SetConnectPanelVisible_Struct
				//{
				//	bool Visibility;
				//};
				//struct FUNC_SetConnectPanelVisible_Struct Params;
				//Params.Visibility = false;
				Widget->ProcessEvent(Func, nullptr);
			}
			ContentWidget = Widget->TakeWidget();
		}
		else
		{
			ContentWidget = SNew(STextBlock).Text(WidgetText);
		}
        return SNew(SDockTab)
            .TabRole(ETabRole::NomadTab)
            [
                // Put your tab content here!
                SNew(SBox)
                .HAlign(HAlign_Left)
				.VAlign(VAlign_Top)
				[
					ContentWidget
				]
            ];
    }

private:
    TSharedPtr<class FUICommandList> PluginCommands;
};

IMPLEMENT_MODULE(FNeuronLiveLinkEditorModule, NeuronLiveLinkEditor);

#undef LOCTEXT_NAMESPACE