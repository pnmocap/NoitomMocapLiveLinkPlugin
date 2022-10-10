// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "NeuronEditorWindowStyle.h"

class FNeuronEditorWindowCommands : public TCommands<FNeuronEditorWindowCommands>
{
public:

	FNeuronEditorWindowCommands()
		: TCommands<FNeuronEditorWindowCommands>(TEXT("NeuronEditorWindow"), NSLOCTEXT("Contexts", "NeuronEditorWindow", "NeuronEditorWindow Plugin"), NAME_None, FNeuronEditorWindowStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};