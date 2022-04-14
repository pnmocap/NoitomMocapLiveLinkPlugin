#pragma once

#include "CoreMinimal.h"
#include "NeuronBoneMappingInfo.generated.h"

// bone mapping struct mapping mocapapi bone name to your sleleton bone name
USTRUCT(BlueprintType)
struct NEURONLIVELINK_API FNeuronBoneMappingInfo
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, Category = "MocapApi")
    FName Name;

    UPROPERTY(EditAnywhere, Category = "MocapApi")
    FName MappingName;

    FNeuronBoneMappingInfo()
        : Name(NAME_None)
        , MappingName(NAME_None)
    {
    };

    FNeuronBoneMappingInfo(const FName& BoneName, const FName& ToName)
        : Name(BoneName)
        , MappingName(ToName)
    {

    };
};

FORCEINLINE bool operator==(const FNeuronBoneMappingInfo& Left, const FNeuronBoneMappingInfo& Right)
{
    return (Left.Name == Right.Name) && (Left.MappingName == Right.MappingName);
}

FORCEINLINE bool operator!=(const FNeuronBoneMappingInfo& Left, const FNeuronBoneMappingInfo& Right)
{
    return !(Left == Right);
}
