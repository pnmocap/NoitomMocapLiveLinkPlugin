// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AnimGraphNode_Base.h"
#include "AnimNode_NeuronBlend.h"

#include "AnimGraphNode_NeuronBlend.generated.h"



UCLASS()
class UAnimGraphNode_NeuronBlend : public UAnimGraphNode_Base
{
	GENERATED_BODY()

public:

	//~ UEdGraphNode interface
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
	virtual FText GetTooltipText() const override;
	virtual FText GetMenuCategory() const;
	//~ End of UEdGraphNode

public:

	UPROPERTY(EditAnywhere, Category = Settings)
	FAnimNode_NeuronBlend Node;

};
