// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NeuronLiveLinkEditor : ModuleRules
{
	public NeuronLiveLinkEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        //if (!System.IO.Directory.Exists(System.IO.Path.Combine(ModuleDirectory, @"Private")))
        if (!System.IO.File.Exists(System.IO.Path.Combine(ModuleDirectory, @"Private", @"NeuronLiveLinkEditorModule.cpp")))
        {
            bUsePrecompiled = true;
        }
        else
        {
            bPrecompile = true;
        }

        PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
                "LiveLinkInterface",
                "LiveLink",
                "SlateCore",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "Sockets",
                "InputCore",
				"AnimGraph",
				"AssetRegistry",
				"BlueprintGraph",
				"ClassViewer",
				"DetailCustomizations",
				"EditorStyle",
				"Engine",
				"KismetCompiler",
				"GraphEditor",
				"MessageLog",
				"Projects",
				"PropertyEditor",
				"Settings",
				"Sequencer",
				"Slate",
				"TimeManagement",
				"UnrealEd",
				"WorkspaceMenuStructure",
				"NeuronLiveLink",
				"ContentBrowser",
                "ToolMenus",
				"UMG",
				"ApplicationCore",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
