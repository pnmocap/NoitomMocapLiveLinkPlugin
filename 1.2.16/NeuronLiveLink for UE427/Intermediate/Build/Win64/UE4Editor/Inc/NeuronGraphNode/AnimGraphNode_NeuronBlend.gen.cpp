// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronGraphNode/AnimGraphNode_NeuronBlend.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_NeuronBlend() {}
// Cross Module References
	NEURONGRAPHNODE_API UClass* Z_Construct_UClass_UAnimGraphNode_NeuronBlend_NoRegister();
	NEURONGRAPHNODE_API UClass* Z_Construct_UClass_UAnimGraphNode_NeuronBlend();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_Base();
	UPackage* Z_Construct_UPackage__Script_NeuronGraphNode();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_NeuronBlend();
// End Cross Module References
	void UAnimGraphNode_NeuronBlend::StaticRegisterNativesUAnimGraphNode_NeuronBlend()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_NeuronBlend_NoRegister()
	{
		return UAnimGraphNode_NeuronBlend::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_Base,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronGraphNode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_NeuronBlend.h" },
		{ "ModuleRelativePath", "AnimGraphNode_NeuronBlend.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "AnimGraphNode_NeuronBlend.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_NeuronBlend, Node), Z_Construct_UScriptStruct_FAnimNode_NeuronBlend, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_NeuronBlend>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_NeuronBlend_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_NeuronBlend, 1218285972);
	template<> NEURONGRAPHNODE_API UClass* StaticClass<UAnimGraphNode_NeuronBlend>()
	{
		return UAnimGraphNode_NeuronBlend::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_NeuronBlend(Z_Construct_UClass_UAnimGraphNode_NeuronBlend, &UAnimGraphNode_NeuronBlend::StaticClass, TEXT("/Script/NeuronGraphNode"), TEXT("UAnimGraphNode_NeuronBlend"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_NeuronBlend);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
