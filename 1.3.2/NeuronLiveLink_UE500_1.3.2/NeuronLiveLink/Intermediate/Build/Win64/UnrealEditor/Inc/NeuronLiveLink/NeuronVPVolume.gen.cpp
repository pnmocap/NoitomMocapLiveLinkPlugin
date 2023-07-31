// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronVPVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronVPVolume() {}
// Cross Module References
	NEURONLIVELINK_API UClass* Z_Construct_UClass_ANeuronVPVolume_NoRegister();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_ANeuronVPVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANeuronVPVolume::execNeuronChangeVolumeScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_newWidth);
		P_GET_PROPERTY(FFloatProperty,Z_Param_newDepth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NeuronChangeVolumeScale(Z_Param_newWidth,Z_Param_newDepth);
		P_NATIVE_END;
	}
	void ANeuronVPVolume::StaticRegisterNativesANeuronVPVolume()
	{
		UClass* Class = ANeuronVPVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NeuronChangeVolumeScale", &ANeuronVPVolume::execNeuronChangeVolumeScale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics
	{
		struct NeuronVPVolume_eventNeuronChangeVolumeScale_Parms
		{
			float newWidth;
			float newDepth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newWidth;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_newDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NewProp_newWidth = { "newWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NeuronVPVolume_eventNeuronChangeVolumeScale_Parms, newWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NewProp_newDepth = { "newDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NeuronVPVolume_eventNeuronChangeVolumeScale_Parms, newDepth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NewProp_newWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NewProp_newDepth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Neuron VP Volume Cotnrols" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANeuronVPVolume, nullptr, "NeuronChangeVolumeScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NeuronVPVolume_eventNeuronChangeVolumeScale_Parms), Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANeuronVPVolume);
	UClass* Z_Construct_UClass_ANeuronVPVolume_NoRegister()
	{
		return ANeuronVPVolume::StaticClass();
	}
	struct Z_Construct_UClass_ANeuronVPVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeuronRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuronRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeuronVPVolume_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuronVPVolume;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeDepth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeDepth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANeuronVPVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANeuronVPVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale, "NeuronChangeVolumeScale" }, // 1437530565
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANeuronVPVolume_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NeuronVPVolume.h" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronRoot_MetaData[] = {
		{ "Category", "Neuron VP Volume Controls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronRoot = { "NeuronRoot", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANeuronVPVolume, NeuronRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronVPVolume_MetaData[] = {
		{ "Category", "Neuron VP Volume Controls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronVPVolume = { "NeuronVPVolume", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANeuronVPVolume, NeuronVPVolume), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronVPVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronVPVolume_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeWidth_MetaData[] = {
		{ "Category", "Neuron VP Volume Controls" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeWidth = { "VolumeWidth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANeuronVPVolume, VolumeWidth), METADATA_PARAMS(Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeDepth_MetaData[] = {
		{ "Category", "Neuron VP Volume Controls" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeDepth = { "VolumeDepth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANeuronVPVolume, VolumeDepth), METADATA_PARAMS(Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeDepth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeDepth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANeuronVPVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronVPVolume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeDepth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANeuronVPVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANeuronVPVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANeuronVPVolume_Statics::ClassParams = {
		&ANeuronVPVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANeuronVPVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANeuronVPVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANeuronVPVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANeuronVPVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANeuronVPVolume()
	{
		if (!Z_Registration_Info_UClass_ANeuronVPVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANeuronVPVolume.OuterSingleton, Z_Construct_UClass_ANeuronVPVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANeuronVPVolume.OuterSingleton;
	}
	template<> NEURONLIVELINK_API UClass* StaticClass<ANeuronVPVolume>()
	{
		return ANeuronVPVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANeuronVPVolume);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANeuronVPVolume, ANeuronVPVolume::StaticClass, TEXT("ANeuronVPVolume"), &Z_Registration_Info_UClass_ANeuronVPVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANeuronVPVolume), 1878321055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_2874841238(TEXT("/Script/NeuronLiveLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
