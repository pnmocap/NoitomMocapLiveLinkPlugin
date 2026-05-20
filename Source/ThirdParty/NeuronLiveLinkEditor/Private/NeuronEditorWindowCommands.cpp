// Copyright Epic Games, Inc. All Rights Reserved.

#include "NeuronEditorWindowCommands.h"

#define LOCTEXT_NAMESPACE "FNeuronEditorWindowModule"

void FNeuronEditorWindowCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "Neuron", "Bring up NeuronEditorWindow", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
