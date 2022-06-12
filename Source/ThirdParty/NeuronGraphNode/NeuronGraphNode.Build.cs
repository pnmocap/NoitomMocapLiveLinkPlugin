// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NeuronGraphNode : ModuleRules
{
	public NeuronGraphNode(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(
				new string[]
				{

				}
			);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					"AnimationCore",
					"AnimGraphRuntime",
					"Core",
					"CoreUObject",
					"Engine",
					"InputCore",
					"KismetCompiler",
					"LiveLink",
					"LiveLinkInterface",
					"Persona",
					"SlateCore",
					"NeuronLiveLink",
				}
			);

			if (Target.bBuildEditor == true)
			{
				PrivateDependencyModuleNames.AddRange(
					new string[]
					{
						"UnrealEd",
						"Kismet",
						"AnimGraph",
						"BlueprintGraph",
					}
				);
			}
	}
}
