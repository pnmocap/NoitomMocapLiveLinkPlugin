// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Animation/AnimNodeBase.h"
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_LayeredBoneBlend.h"
#include "LiveLinkClientReference.h"
#include "LiveLinkRetargetAsset.h"
#include "LiveLinkTypes.h"
#include "NeuronLiveLinkRemapAsset.h"
#include "EngineVersionCompare.h"
#include "AnimNode_NeuronBlend.generated.h"


PRAGMA_DISABLE_DEPRECATION_WARNINGS

USTRUCT(BlueprintInternalUseOnly)
struct NEURONLIVELINK_API FAnimNode_NeuronBlend : public FAnimNode_Base
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Input)
	FPoseLink InputPose;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))
	FLiveLinkSubjectName LiveLinkSubjectName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Category = Retarget, meta = (NeverAsPin))
	TSubclassOf<UNeuronLiveLinkRemapAsset> RetargetAsset;

	UPROPERTY(transient)
		UNeuronLiveLinkRemapAsset* CurrentRetargetAsset;

	UPROPERTY(transient)
		UNeuronLiveLinkRemapAsset* CurrentRetargetAssetWithDisp;

public:
	FAnimNode_NeuronBlend();

	//~ FAnimNode_Base interface
	virtual void Initialize_AnyThread(const FAnimationInitializeContext& Context) override;
	virtual void CacheBones_AnyThread(const FAnimationCacheBonesContext & Context) override;
	virtual void Update_AnyThread(const FAnimationUpdateContext & Context) override;
	virtual void Evaluate_AnyThread(FPoseContext& Output) override;
	virtual bool HasPreUpdate() const { return true; }
	virtual void PreUpdate(const UAnimInstance* InAnimInstance) override;
	virtual void GatherDebugData(FNodeDebugData& DebugData) override;
	//~ End of FAnimNode_Base interface

	bool Serialize(FArchive& Ar);

protected:
	virtual void OnInitializeAnimInstance(const FAnimInstanceProxy* InProxy, const UAnimInstance* InAnimInstance) override;

private:
	//FAnimNode_LayeredBoneBlend BlendNode;

	FLiveLinkClientReference LiveLinkClient_GameThread;
	ILiveLinkClient* LiveLinkClient_AnyThread;
	// Delta time from update so that it can be passed to retargeter
	float CachedDeltaTime;

	// layered bone blend
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)
		FName BlendPoseBoneName;
	/**
	 * Configuration for the parts of the skeleton to blend for each layer. Allows
	 * certain parts of the tree to be blended out or omitted from the pose.
	 */
	//UPROPERTY(EditAnywhere, editfixedsize, Category = Config)
	UPROPERTY()
		TArray<FInputBlendPose> LayerSetup;

	/** The weights of each layer */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, editfixedsize, Category = Runtime, meta = (PinShownByDefault))
		TArray<float> BlendWeights;

	/** Whether to blend bone rotations in mesh space or in local space */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)
	UPROPERTY()
		bool bMeshSpaceRotationBlend;

	/** Whether to blend bone scales in mesh space or in local space */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)
	UPROPERTY()
		bool bMeshSpaceScaleBlend;

	/** How to blend the layers together */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)
	UPROPERTY()
		TEnumAsByte<enum ECurveBlendOption::Type>	CurveBlendOption;

	/** Whether to incorporate the per-bone blend weight of the root bone when lending root motion */
	//UPROPERTY(EditAnywhere, Category = Config)
	UPROPERTY()
		bool bBlendRootMotionBasedOnRootBone;

	bool bHasRelevantPoses;

	/*
	 * Max LOD that this node is allowed to run
	 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)
	 * when the component LOD becomes 3, it will stop update/evaluate
	 * currently transition would be issue and that has to be re-visited
	 */
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Performance, meta = (DisplayName = "LOD Threshold"))
	UPROPERTY()
		int32 LODThreshold;

protected:

	// This is buffer to serialize blend weight data for each joints
	// This has to save with the corresponding SkeletopnGuid
	// If not, it will rebuild in run-time
	UPROPERTY()
		TArray<FPerBoneBlendWeight>	PerBoneBlendWeights;

	UPROPERTY()
		FGuid						SkeletonGuid;

	UPROPERTY()
		FGuid						VirtualBoneGuid;


	// transient data to handle weight and target weight
	// this array changes based on required bones
	TArray<FPerBoneBlendWeight> DesiredBoneBlendWeights;
	TArray<FPerBoneBlendWeight> CurrentBoneBlendWeights;
#if UE_ENGINE_VER_GREAT_THAN(5,2)
    TBaseBlendedCurve<FDefaultAllocator, UE::Anim::FCurveElementIndexed> CurvePoseSourceIndices;
#else
	TArray<uint8> CurvePoseSourceIndices;
#endif

public:
	virtual int32 GetLODThreshold() const override { return LODThreshold; }

#if WITH_EDITOR
	// ideally you don't like to get to situation where it becomes inconsistent, but this happened, 
	// and we don't know what caused this. Possibly copy/paste, but I tried copy/paste and that didn't work
	// so here we add code to fix this up manually in editor, so that they can continue working on it. 
	void ValidateData();
	// FAnimNode_Base interface
	virtual void PostCompile(const class USkeleton* InSkeleton) override;
	// end FAnimNode_Base interface
#endif

	/** Reinitialize bone weights */
	void ReinitializeBoneBlendWeights(const FBoneContainer& RequiredBones, const USkeleton* Skeleton);

private:
	// Rebuild cache data from the skeleton
	void RebuildCacheData(const USkeleton* InSkeleton);
	bool IsCacheInvalid(const USkeleton* InSkeleton) const;
};

PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> struct TStructOpsTypeTraits<FAnimNode_NeuronBlend> : public TStructOpsTypeTraitsBase2<FAnimNode_NeuronBlend>
{
	enum 
	{ 
		WithSerializer = true
	};
};
