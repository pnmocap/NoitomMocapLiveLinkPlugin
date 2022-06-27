// Copyright Epic Games, Inc. All Rights Reserved.

#include "NeuronEditorWindowCommands.h"

#define LOCTEXT_NAMESPACE "FNeuronEditorWindowModule"

void FNeuronEditorWindowCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "Neuron", "Bring up NeuronEditorWindow window", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
