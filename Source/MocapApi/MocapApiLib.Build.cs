// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{

    public class NeuronDataReader : ModuleRules
    {
        public NeuronDataReader(ReadOnlyTargetRules Target) : base(Target)
        {
            Type = ModuleType.External;

            if (Target.Platform == UnrealTargetPlatform.Win64)
            {
                PublicIncludePaths.AddRange(
                    new string[] {
                        // ... add public include paths required here ...
                        Path.Combine(ModuleDirectory, "include"),
                    }
                ); ;

                // Add the import library
                string lib_folder_path = Path.Combine(ModuleDirectory, "bin/x64");
                PublicLibraryPaths.Add(lib_folder_path);
                PublicAdditionalLibraries.Add(Path.Combine(lib_folder_path, "MocapApi.lib"));

                // Delay-load the DLL, so we can load it from the right place first
                PublicDelayLoadDLLs.Add("MocapApi.dll");

                // Runtime Dependencies for Project Package
                RuntimeDependencies.Add(Path.Combine(lib_folder_path, "MocapApi.dll"));
            }
        }
    }
}