// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ThirdParty/NeuronGraphNode/AnimGraphNode_NeuronBlend.h"
#include "NeuronLiveLink/Public/AnimNode_NeuronBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_NeuronBlend() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	NEURONGRAPHNODE_API UClass* Z_Construct_UClass_UAnimGraphNode_NeuronBlend();
	NEURONGRAPHNODE_API UClass* Z_Construct_UClass_UAnimGraphNode_NeuronBlend_NoRegister();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_NeuronBlend();
	UPackage* Z_Construct_UPackage__Script_NeuronGraphNode();
// End Cross Module References
	void UAnimGraphNode_NeuronBlend::StaticRegisterNativesUAnimGraphNode_NeuronBlend()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_NeuronBlend);
	UClass* Z_Construct_UClass_UAnimGraphNode_NeuronBlend_NoRegister()
	{
		return UAnimGraphNode_NeuronBlend::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronGraphNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_NeuronBlend.h" },
		{ "ModuleRelativePath", "AnimGraphNode_NeuronBlend.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "AnimGraphNode_NeuronBlend.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_NeuronBlend, Node), Z_Construct_UScriptStruct_FAnimNode_NeuronBlend, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node_MetaData)) }; // 634440184
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_NeuronBlend>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::ClassParams = {
		&UAnimGraphNode_NeuronBlend::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_NeuronBlend()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_NeuronBlend.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_NeuronBlend.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_NeuronBlend.OuterSingleton;
	}
	template<> NEURONGRAPHNODE_API UClass* StaticClass<UAnimGraphNode_NeuronBlend>()
	{
		return UAnimGraphNode_NeuronBlend::StaticClass();
	}
	UAnimGraphNode_NeuronBlend::UAnimGraphNode_NeuronBlend(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_NeuronBlend);
	UAnimGraphNode_NeuronBlend::~UAnimGraphNode_NeuronBlend() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_ThirdParty_NeuronGraphNode_AnimGraphNode_NeuronBlend_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_ThirdParty_NeuronGraphNode_AnimGraphNode_NeuronBlend_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_NeuronBlend, UAnimGraphNode_NeuronBlend::StaticClass, TEXT("UAnimGraphNode_NeuronBlend"), &Z_Registration_Info_UClass_UAnimGraphNode_NeuronBlend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_NeuronBlend), 528377459U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_ThirdParty_NeuronGraphNode_AnimGraphNode_NeuronBlend_h_3334837177(TEXT("/Script/NeuronGraphNode"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_ThirdParty_NeuronGraphNode_AnimGraphNode_NeuronBlend_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_ThirdParty_NeuronGraphNode_AnimGraphNode_NeuronBlend_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
