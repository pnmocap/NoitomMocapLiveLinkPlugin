// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuronVPVolume.h"
#include "Core.h"
#include "Interfaces/IPluginManager.h"
#include "Misc/Paths.h"
#include "Engine/EngineTypes.h"
#include "Engine/StaticMesh.h"
#include "Components\StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

float DefaultVolumeWidth = 3.0f;
float DefaultVolumeDepth = 3.0f;

ANeuronVPVolume::ANeuronVPVolume()
{
	PrimaryActorTick.bCanEverTick = true;

	NeuronRoot = CreateDefaultSubobject<USceneComponent>(TEXT("NeuronVPRoot"));
	NeuronRoot->SetupAttachment(RootComponent);

	NeuronVPVolume = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NeuronVPVolume"));
	NeuronVPVolume->SetupAttachment(NeuronRoot);

	//Finds the current UE project Plugins folder
	//FString NeuronPluginDir = FPaths::ProjectPluginsDir();
	//Makes a new path string from the current project's plugins folder and combines it with the relative path to our static mesh plane uasset
	//FString NeuronPlanePath = FPaths::Combine(*NeuronPluginDir, TEXT("StaticMesh'/NeuronLiveLink/VirtualProduction/Plane.Plane'"));
	//Creates an object based off the static mesh item found in the path above by reference. Effectiuvely creates a visual asset to populate in the scene
	static ConstructorHelpers::FObjectFinder<UStaticMesh>PlaneVisualAsset(TEXT("StaticMesh'/NeuronLiveLink/VirtualProduction/PN_VolumeGuide.PN_VolumeGuide'"));

	//static ConstructorHelpers::FObjectFinder<UStaticMesh>PlaneVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));


	if (PlaneVisualAsset.Succeeded())
	{
		NeuronVPVolume->SetStaticMesh(PlaneVisualAsset.Object);

		NeuronVPVolume->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

		NeuronVPVolume->SetWorldScale3D(FVector(VolumeDepth, VolumeWidth, 1.0f));
	}
	
}

void ANeuronVPVolume::BeginPlay()
{
	Super::BeginPlay();
}

void ANeuronVPVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

		if (VolumeDepth != DefaultVolumeDepth ) 
		{
			NeuronChangeVolumeScale(VolumeWidth, VolumeDepth);
		}
		else if (VolumeWidth != DefaultVolumeWidth)
		{
			NeuronChangeVolumeScale(VolumeWidth, VolumeDepth);
		}

		NeuronVPVolume->SetWorldScale3D(FVector(VolumeDepth, VolumeWidth, 1.0f));
	
}

void ANeuronVPVolume::NeuronChangeVolumeScale(float newWidth, float newDepth)
{
	FVector currentFloorScale = NeuronVPVolume->GetRelativeScale3D();

	NeuronVPVolume->SetWorldScale3D(FVector(newDepth, newWidth, currentFloorScale.Z));
	
}