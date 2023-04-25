#include "LiveLinkEditorPrivate.h"
#include "NeuronLiveLinkRemapAsset.h"
#include "NeuronLiveLinkRemapAssetDetailCustomization.h"
#include "NeuronEditorWindowStyle.h"
#include "NeuronEditorWindowCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "HAL/PlatformApplicationMisc.h"
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

		// Close tab when open a new level
		FLevelEditorModule& LevelEditor = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor");
		MapChangedHandler = LevelEditor.OnMapChanged().AddRaw(this, &FNeuronLiveLinkEditorModule::OnLevelMapChanged);

		RefreshLevelScriptActionsDelegateHandle = FWorldDelegates::RefreshLevelScriptActions.AddRaw(this, &FNeuronLiveLinkEditorModule::OnRefreshLevelScriptActions);
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

		// Close tab when open a new level
		if (MapChangedHandler.IsValid())
		{
			FLevelEditorModule& LevelEditor = FModuleManager::GetModuleChecked<FLevelEditorModule>("LevelEditor");
			// Notify level editors of the map change
			LevelEditor.OnMapChanged().Remove(MapChangedHandler);
		}

		if (RefreshLevelScriptActionsDelegateHandle.IsValid())
		{
			FWorldDelegates::RefreshLevelScriptActions.Remove(RefreshLevelScriptActionsDelegateHandle);
		}
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
			NeuronCommandTab = Tab;
			TSharedPtr<SWindow> ParentWindowPtr = Tab->GetParentWindow();
			if ((Tab->GetTabRole() == ETabRole::MajorTab || Tab->GetTabRole() == ETabRole::NomadTab) && ParentWindowPtr.IsValid() && ParentWindowPtr != FGlobalTabmanager::Get()->GetRootWindow())
			{
				FVector2D pos = ParentWindowPtr->GetPositionInScreen();
				float Dpi = FPlatformApplicationMisc::GetDPIScaleFactorAtPoint(pos.X, pos.Y);
				FVector2D ClientSize(400, 200);
				FVector2D WinSize = ParentWindowPtr->GetWindowSizeFromClientSize(ClientSize*Dpi, Dpi);
				ParentWindowPtr->Resize(WinSize);
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
            LOCTEXT("WindowWidgetText", "Failed to generate WBP_AxisStudio widget \n@ {0}\nin {1}\nPlease check Asset {2}"),
            FText::FromString(TEXT("FNeuronLiveLinkEditorModule::OnSpawnPluginTab")),
            FText::FromString(TEXT("NeuronLiveLinkEditorModule.cpp")),
			FText::FromString(WidgetClassName)
        );
		TSubclassOf<UUserWidget> WidgetClass = StaticLoadClass(UUserWidget::StaticClass(), nullptr, *WidgetClassName);
		TSharedRef<SWidget> ContentWidget = SNullWidget::NullWidget;
		UWorld* OwningObject = GEditor->GetEditorWorldContext().World();
		FWorldContext* PIEWorld = GEditor->GetPIEWorldContext();
		UUserWidget* Widget = nullptr;
		
		if (OwningObject)
		{
			if (PIEWorld == nullptr)
			{
				Widget = CreateWidget<UUserWidget>(OwningObject, WidgetClass);
			}
			else
			{
				WidgetText = FText::Format(
					LOCTEXT("WindowWidgetTextPIE", "Can't summon WBP_AxisStudio widget\n@ {0}\nin {1} when playing in editor."),
					FText::FromString(TEXT("FNeuronLiveLinkEditorModule::OnSpawnPluginTab")),
					FText::FromString(TEXT("NeuronLiveLinkEditorModule.cpp"))
				);
			}
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

	void OnLevelMapChanged(UWorld* World, EMapChangeType Type)
	{
		bool NeedCloseTab = Type == EMapChangeType::TearDownWorld;
		if (NeedCloseTab && NeuronCommandTab.IsValid())
		{
			if (EAppReturnType::Ok == FMessageDialog::Open(EAppMsgType::Ok, EAppReturnType::Ok, LOCTEXT("WindowWidgetTextPromptMapChanged", "This action will close NeuronEditorWindow.")))
			{
				NeuronCommandTab.Pin()->RequestCloseTab();
			}
		}
	}

	void OnRefreshLevelScriptActions(UWorld* World)
	{
		bool NeedCloseTab = (GEditor->GetPIEWorldContext() != nullptr);
		if (NeedCloseTab && NeuronCommandTab.IsValid())
		{
			if (EAppReturnType::Ok == FMessageDialog::Open(EAppMsgType::Ok, EAppReturnType::Ok, LOCTEXT("WindowWidgetTextPromptMapChanged", "This action will close NeuronEditorWindow.")))
			{
				NeuronCommandTab.Pin()->RequestCloseTab();
			}
		}
	}

private:
    TSharedPtr<class FUICommandList> PluginCommands;
	FDelegateHandle MapChangedHandler;
	FDelegateHandle RefreshLevelScriptActionsDelegateHandle;
	TWeakPtr<class SDockTab> NeuronCommandTab;
};

IMPLEMENT_MODULE(FNeuronLiveLinkEditorModule, NeuronLiveLinkEditor);

#undef LOCTEXT_NAMESPACE