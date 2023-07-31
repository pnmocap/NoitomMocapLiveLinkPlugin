// Copyright Epic Games, Inc. All Rights Reserved.

#include "AnimGraphNode_NeuronBlend.h"

#include "EdGraph/EdGraphSchema.h"

#define LOCTEXT_NAMESPACE "NeuronGraphNode"

FText UAnimGraphNode_NeuronBlend::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return LOCTEXT("NodeTitle", "Neuron Blend");
}

FText UAnimGraphNode_NeuronBlend::GetTooltipText() const
{
	return LOCTEXT("NodeTooltip", "Retrieves the current pose associated with the supplied subject");
}

FText UAnimGraphNode_NeuronBlend::GetMenuCategory() const
{
	return LOCTEXT("NodeCategory", "NeuronGraphNode");
}

#undef LOCTEXT_NAMESPACE