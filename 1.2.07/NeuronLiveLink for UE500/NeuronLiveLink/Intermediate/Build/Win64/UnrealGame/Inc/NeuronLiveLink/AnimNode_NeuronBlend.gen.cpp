// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/AnimNode_NeuronBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_NeuronBlend() {}
// Cross Module References
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_NeuronBlend();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkRemapAsset_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputBlendPose();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECurveBlendOption();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerBoneBlendWeight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_NeuronBlend>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_NeuronBlend cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_NeuronBlend;
class UScriptStruct* FAnimNode_NeuronBlend::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_NeuronBlend.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_NeuronBlend.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("AnimNode_NeuronBlend"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_NeuronBlend.OuterSingleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FAnimNode_NeuronBlend>()
{
	return FAnimNode_NeuronBlend::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LiveLinkSubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LiveLinkSubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAssetWithDisp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAssetWithDisp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendPoseBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BlendPoseBoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LayerSetup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerSetup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerSetup;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceRotationBlend_MetaData[];
#endif
		static void NewProp_bMeshSpaceRotationBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceRotationBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMeshSpaceScaleBlend_MetaData[];
#endif
		static void NewProp_bMeshSpaceScaleBlend_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshSpaceScaleBlend;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveBlendOption_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveBlendOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBlendRootMotionBasedOnRootBone_MetaData[];
#endif
		static void NewProp_bBlendRootMotionBasedOnRootBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBlendRootMotionBasedOnRootBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODThreshold;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerBoneBlendWeights_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerBoneBlendWeights_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerBoneBlendWeights;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletonGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VirtualBoneGuid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_NeuronBlend>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_InputPose_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_InputPose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LiveLinkSubjectName_MetaData[] = {
		{ "Category", "SourceData" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LiveLinkSubjectName = { "LiveLinkSubjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, LiveLinkSubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LiveLinkSubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LiveLinkSubjectName_MetaData)) }; // 1633295967
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, RetargetAsset), Z_Construct_UClass_UNeuronLiveLinkRemapAsset_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, CurrentRetargetAsset), Z_Construct_UClass_UNeuronLiveLinkRemapAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAssetWithDisp_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAssetWithDisp = { "CurrentRetargetAssetWithDisp", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, CurrentRetargetAssetWithDisp), Z_Construct_UClass_UNeuronLiveLinkRemapAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAssetWithDisp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAssetWithDisp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendPoseBoneName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendPoseBoneName = { "BlendPoseBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, BlendPoseBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendPoseBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendPoseBoneName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LayerSetup_Inner = { "LayerSetup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputBlendPose, METADATA_PARAMS(nullptr, 0) }; // 3313333549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LayerSetup_MetaData[] = {
		{ "Comment", "/**\n\x09 * Configuration for the parts of the skeleton to blend for each layer. Allows\n\x09 * certain parts of the tree to be blended out or omitted from the pose.\n\x09 *///UPROPERTY(EditAnywhere, editfixedsize, Category = Config)\n" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "ToolTip", "Configuration for the parts of the skeleton to blend for each layer. Allows\ncertain parts of the tree to be blended out or omitted from the pose.\n        //UPROPERTY(EditAnywhere, editfixedsize, Category = Config)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LayerSetup = { "LayerSetup", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, LayerSetup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LayerSetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LayerSetup_MetaData)) }; // 3313333549
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendWeights_Inner = { "BlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendWeights_MetaData[] = {
		{ "Category", "Runtime" },
		{ "Comment", "/** The weights of each layer */" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "The weights of each layer" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendWeights = { "BlendWeights", nullptr, (EPropertyFlags)0x0010000000000045, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, BlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendWeights_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceRotationBlend_MetaData[] = {
		{ "Comment", "/** Whether to blend bone rotations in mesh space or in local space *///UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)\n" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "ToolTip", "Whether to blend bone rotations in mesh space or in local space //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceRotationBlend_SetBit(void* Obj)
	{
		((FAnimNode_NeuronBlend*)Obj)->bMeshSpaceRotationBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceRotationBlend = { "bMeshSpaceRotationBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_NeuronBlend), &Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceRotationBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceRotationBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceRotationBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceScaleBlend_MetaData[] = {
		{ "Comment", "/** Whether to blend bone scales in mesh space or in local space *///UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)\n" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "ToolTip", "Whether to blend bone scales in mesh space or in local space //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceScaleBlend_SetBit(void* Obj)
	{
		((FAnimNode_NeuronBlend*)Obj)->bMeshSpaceScaleBlend = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceScaleBlend = { "bMeshSpaceScaleBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_NeuronBlend), &Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceScaleBlend_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceScaleBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceScaleBlend_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurveBlendOption_MetaData[] = {
		{ "Comment", "/** How to blend the layers together *///UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)\n" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "ToolTip", "How to blend the layers together //UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Config)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurveBlendOption = { "CurveBlendOption", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, CurveBlendOption), Z_Construct_UEnum_Engine_ECurveBlendOption, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurveBlendOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurveBlendOption_MetaData)) }; // 138824138
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_MetaData[] = {
		{ "Comment", "/** Whether to incorporate the per-bone blend weight of the root bone when lending root motion *///UPROPERTY(EditAnywhere, Category = Config)\n" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "ToolTip", "Whether to incorporate the per-bone blend weight of the root bone when lending root motion //UPROPERTY(EditAnywhere, Category = Config)" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_SetBit(void* Obj)
	{
		((FAnimNode_NeuronBlend*)Obj)->bBlendRootMotionBasedOnRootBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone = { "bBlendRootMotionBasedOnRootBone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_NeuronBlend), &Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LODThreshold_MetaData[] = {
		{ "Comment", "/*\n\x09 * Max LOD that this node is allowed to run\n\x09 * For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n\x09 * when the component LOD becomes 3, it will stop update/evaluate\n\x09 * currently transition would be issue and that has to be re-visited\n\x09 *///UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Performance, meta = (DisplayName = \"LOD Threshold\"))\n" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "ToolTip", "* Max LOD that this node is allowed to run\n* For example if you have LODThreadhold to be 2, it will run until LOD 2 (based on 0 index)\n* when the component LOD becomes 3, it will stop update/evaluate\n* currently transition would be issue and that has to be re-visited\n//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Performance, meta = (DisplayName = \"LOD Threshold\"))" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LODThreshold = { "LODThreshold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, LODThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LODThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LODThreshold_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_PerBoneBlendWeights_Inner = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPerBoneBlendWeight, METADATA_PARAMS(nullptr, 0) }; // 4165084729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_PerBoneBlendWeights_MetaData[] = {
		{ "Comment", "// This is buffer to serialize blend weight data for each joints\n// This has to save with the corresponding SkeletopnGuid\n// If not, it will rebuild in run-time\n" },
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
		{ "ToolTip", "This is buffer to serialize blend weight data for each joints\nThis has to save with the corresponding SkeletopnGuid\nIf not, it will rebuild in run-time" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_PerBoneBlendWeights = { "PerBoneBlendWeights", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, PerBoneBlendWeights), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_PerBoneBlendWeights_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_PerBoneBlendWeights_MetaData)) }; // 4165084729
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_SkeletonGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_SkeletonGuid = { "SkeletonGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, SkeletonGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_SkeletonGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_SkeletonGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_VirtualBoneGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_NeuronBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_VirtualBoneGuid = { "VirtualBoneGuid", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_NeuronBlend, VirtualBoneGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_VirtualBoneGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_VirtualBoneGuid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_InputPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LiveLinkSubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_RetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurrentRetargetAssetWithDisp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendPoseBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LayerSetup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LayerSetup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_BlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceRotationBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bMeshSpaceScaleBlend,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_CurveBlendOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_bBlendRootMotionBasedOnRootBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_LODThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_PerBoneBlendWeights_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_PerBoneBlendWeights,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_SkeletonGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewProp_VirtualBoneGuid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_NeuronBlend",
		sizeof(FAnimNode_NeuronBlend),
		alignof(FAnimNode_NeuronBlend),
		Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_NeuronBlend()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_NeuronBlend.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_NeuronBlend.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_NeuronBlend.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_AnimNode_NeuronBlend_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_AnimNode_NeuronBlend_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_NeuronBlend::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_NeuronBlend_Statics::NewStructOps, TEXT("AnimNode_NeuronBlend"), &Z_Registration_Info_UScriptStruct_AnimNode_NeuronBlend, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_NeuronBlend), 308508480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_AnimNode_NeuronBlend_h_3255015100(TEXT("/Script/NeuronLiveLink"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_AnimNode_NeuronBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_AnimNode_NeuronBlend_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
