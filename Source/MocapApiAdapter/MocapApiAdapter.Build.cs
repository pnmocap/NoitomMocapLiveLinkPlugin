// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{

    public class MocapApiAdapter : ModuleRules
    {
        public MocapApiAdapter(ReadOnlyTargetRules Target) : base(Target)
        {
            Type = ModuleType.CPlusPlus;
            PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

            PublicIncludePaths.AddRange(
                new string[] {
                    // ... add public include paths required here ...
                    Path.Combine(ModuleDirectory, "Public"),
                }
            );
            
        
            PrivateIncludePaths.AddRange(
                new string[] {
                    // ... add other private include paths required here ...
                }
            );
                
                // List of modules with header files that our module's private code files needs access to, but we don't need to "import" or link against.
            PrivateIncludePathModuleNames.AddRange(
                new string[] {
                    "Launch",
                }
            );

            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core",
                    
                    // ... add other public dependencies that you statically link with here ...
                }
            );
                
            
            PrivateDependencyModuleNames.AddRange(
                new string[]
                {
                    "CoreUObject",
                    "Engine",
                    "MocapApiLib",
                    "Projects",
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
}