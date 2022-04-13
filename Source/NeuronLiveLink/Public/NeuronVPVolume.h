// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeuronVPVolume.generated.h"

UCLASS()
class  NEURONLIVELINK_API ANeuronVPVolume : public AActor
{
	GENERATED_BODY()

public:
	ANeuronVPVolume();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Neuron VP Volume Controls")
		USceneComponent* NeuronRoot;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Neuron VP Volume Controls")
		UStaticMeshComponent* NeuronVPVolume;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Neuron VP Volume Controls")
		float VolumeWidth = 3.0f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Neuron VP Volume Controls")
		float VolumeDepth = 3.0f;

protected:

	virtual void BeginPlay() override;

public:

	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Neuron VP Volume Cotnrols")
		void NeuronChangeVolumeScale(float newWidth, float newDepth);


};