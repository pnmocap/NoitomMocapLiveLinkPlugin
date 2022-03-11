// Copyright 2021 Noitom Technology Co., Ltd. All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "Roles/LiveLinkAnimationTypes.h"
#include "Animation/AnimTypes.h"
#include "NeuronBoneMappingInfo.h"
#include "Runtime/Launch/Resources/Version.h"
#if ENGINE_MAJOR_VERSION > 4
#include "LiveLinkAnimationCore/Public/LiveLinkRetargetAsset.h"
#else
#include "LiveLinkRetargetAsset.h"
#endif
#include "NeuronLiveLinkRemapAsset.generated.h"

/*
* UNeuronLiveLinkRemapAsset  live link remap asset for retargeting
*/
UCLASS(Blueprintable)
class NEURONLIVELINK_API UNeuronLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
	GENERATED_UCLASS_BODY()

	//~ Begin UObject Interface
	virtual void BeginDestroy () override;
	//~ End UObject Interface

	//~ Begin ULiveLinkRetargetAsset interface
	//virtual void BuildPoseForSubject (float DeltaTime, const FLiveLinkSubjectFrame& InFrame, FCompactPose& OutPose, FBlendedCurve& OutCurve) override;
	virtual void BuildPoseFromAnimationData( float DeltaTime, const FLiveLinkSkeletonStaticData* InSkeletonData, const FLiveLinkAnimationFrameData* InFrameData, FCompactPose& OutPose ) override;
	virtual void BuildPoseAndCurveFromBaseData( float DeltaTime, const FLiveLinkBaseStaticData* InBaseStaticData, const FLiveLinkBaseFrameData* InBaseFrameData, FCompactPose& OutPose, FBlendedCurve& OutCurve ) override;
	//~ End ULiveLinkRetargetAsset interface

	/** Blueprint Implementable function for getting a remapped bone name from the original
	 * The value of BoneName is defined in NeuronLiveLink plugin.
	 * The return value is the whole name of a bone in the user skeleton.
	 */
	UFUNCTION( BlueprintCallable, BlueprintNativeEvent, Category = "AxisNeuron Live Link Remap" )
		FName GetRemappedBoneName (FName BoneName) const;

	/** Blueprint Implementable function for getting a remapped curve name from the original */
	UFUNCTION( BlueprintCallable, BlueprintNativeEvent, Category = "AxisNeuron Live Link Remap" )
		FName GetRemappedCurveName (FName CurveName) const;

	/** Blueprint Implementable function for remapping, adding or otherwise modifying the curve element data from Live Link. This is run after GetRemappedCurveName */
	UFUNCTION( BlueprintCallable, BlueprintNativeEvent, Category = "AxisNeuron Live Link Remap" )
		void RemapCurveElements (UPARAM (ref)TMap<FName, float>& CurveItems) const;

	UFUNCTION( BlueprintCallable, BlueprintNativeEvent, Category = "AxisNeuron Live Link Retarget" )
		FName GetBonePrefix( )const;

	UFUNCTION( BlueprintCallable, BlueprintNativeEvent, Category = "AxisNeuron Live Link Retarget" )
		void GetSkeletonForwardVector( TEnumAsByte<EAxisOption::Type>& Axis )const;

    UPROPERTY(EditAnywhere, meta = (InlineEditConditionToggle), Category = "AxisNeuron Bone Mapping")
        bool bEnableBoneNamePrefix = false;

    UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "AxisNeuron Bone Mapping", meta = (NeverAsPin, EditCondition = "bEnableBoneNamePrefix"))
        FString BoneNamePrefix;

    UPROPERTY(EditAnywhere, meta = (InlineEditConditionToggle), Category = "AxisNeuron Bone Mapping")
        bool bEnableBoneMapping = true;

    UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "AxisNeuron Bone Mapping", meta = (NeverAsPin, EditCondition = "bEnableBoneMapping"))
        TMap<FName, FName> BoneMapping;

    UPROPERTY(EditAnywhere, BlueprintReadonly, Category = "AxisNeuron Live Link Retarget")
        bool bUseDisplacementData = true;

private:

	void OnBlueprintClassCompiled (UBlueprint* TargetBlueprint);

	// Name mapping between source bone name and transformed bone name
	// (returned from GetRemappedBoneName)
    TMap<FName, FName> BoneNameMap;

	// Name mapping between source curve name and transformed curve name
	// (returned from GetRemappedCurveName)
	TMap<FName, FName> CurveNameMap;

private:
	/** Blueprint.OnCompiled delegate handle */
	FDelegateHandle OnBlueprintCompiledDelegate;

protected:
	UPROPERTY ()
		bool bHaveInit = false;

	// MeshBone 
	UPROPERTY ()
		TArray<FQuat> WorldRotations;

	// MeshBone
	UPROPERTY ()
		TArray<FVector> WorldPositions;

	UPROPERTY ()
		FTransform HipsParentsTransform = FTransform::Identity;
};