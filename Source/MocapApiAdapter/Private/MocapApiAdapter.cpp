// Copyright Epic Games, Inc. All Rights Reserved.

#include "MocapApiAdapter.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "Misc/MessageDialog.h"
#include "HAL/PlatformProcess.h"

#define LOCTEXT_NAMESPACE "FMocapApiAdapterModule"

void FMocapApiAdapterModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
    FString ThisPlugin = TEXT("NeuronLiveLink");
    FString BaseDir = IPluginManager::Get().FindPlugin(ThisPlugin)->GetBaseDir();
    FString LibraryPath;
#if PLATFORM_WINDOWS
    LibraryPath = FPaths::Combine(*BaseDir, TEXT("Source/MocapApi/bin/x64/MocapApi.dll"));
#endif // PLATFORM_WINDOWS

    MocapApiLibraryHandle = !LibraryPath.IsEmpty() ? FPlatformProcess::GetDllHandle(*LibraryPath) : nullptr;

    if (MocapApiLibraryHandle)
    {
        UE_LOG(LogTemp, Log, TEXT("MocapApi lib loaded success."));
    }
    else
    {
        FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("ThirdPartyLibraryError", "Failed to load MocapApi.dll."));
    }
}

void FMocapApiAdapterModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
    if (MocapApiLibraryHandle)
    {
        FPlatformProcess::FreeDllHandle(MocapApiLibraryHandle);
        MocapApiLibraryHandle = nullptr;
    }
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMocapApiAdapterModule, MocapApiAdapter)