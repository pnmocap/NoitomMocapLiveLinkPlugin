// Copyright Epic Games, Inc. All Rights Reserved.

#include "NeuronEditorWindowCommands.h"

#define LOCTEXT_NAMESPACE "FNeuronEditorWindowModule"

void FNeuronEditorWindowCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "Neuron", "Bring up NeuronEditorWindow", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
