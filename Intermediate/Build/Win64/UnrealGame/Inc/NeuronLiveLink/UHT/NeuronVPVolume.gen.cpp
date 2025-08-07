// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronVPVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronVPVolume() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
NEURONLIVELINK_API UClass* Z_Construct_UClass_ANeuronVPVolume();
NEURONLIVELINK_API UClass* Z_Construct_UClass_ANeuronVPVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References

// Begin Class ANeuronVPVolume Function NeuronChangeVolumeScale
struct Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics
{
	struct NeuronVPVolume_eventNeuronChangeVolumeScale_Parms
	{
		float newWidth;
		float newDepth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Neuron VP Volume Cotnrols" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_newDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NewProp_newWidth = { "newWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeuronVPVolume_eventNeuronChangeVolumeScale_Parms, newWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NewProp_newDepth = { "newDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeuronVPVolume_eventNeuronChangeVolumeScale_Parms, newDepth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NewProp_newWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NewProp_newDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANeuronVPVolume, nullptr, "NeuronChangeVolumeScale", nullptr, nullptr, Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NeuronVPVolume_eventNeuronChangeVolumeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::NeuronVPVolume_eventNeuronChangeVolumeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ANeuronVPVolume::execNeuronChangeVolumeScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_newWidth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_newDepth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NeuronChangeVolumeScale(Z_Param_newWidth,Z_Param_newDepth);
	P_NATIVE_END;
}
// End Class ANeuronVPVolume Function NeuronChangeVolumeScale

// Begin Class ANeuronVPVolume
void ANeuronVPVolume::StaticRegisterNativesANeuronVPVolume()
{
	UClass* Class = ANeuronVPVolume::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "NeuronChangeVolumeScale", &ANeuronVPVolume::execNeuronChangeVolumeScale },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANeuronVPVolume);
UClass* Z_Construct_UClass_ANeuronVPVolume_NoRegister()
{
	return ANeuronVPVolume::StaticClass();
}
struct Z_Construct_UClass_ANeuronVPVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NeuronVPVolume.h" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeuronRoot_MetaData[] = {
		{ "Category", "Neuron VP Volume Controls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeuronVPVolume_MetaData[] = {
		{ "Category", "Neuron VP Volume Controls" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeWidth_MetaData[] = {
		{ "Category", "Neuron VP Volume Controls" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeDepth_MetaData[] = {
		{ "Category", "Neuron VP Volume Controls" },
		{ "ModuleRelativePath", "Public/NeuronVPVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuronRoot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NeuronVPVolume;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeDepth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ANeuronVPVolume_NeuronChangeVolumeScale, "NeuronChangeVolumeScale" }, // 3447166381
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANeuronVPVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronRoot = { "NeuronRoot", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANeuronVPVolume, NeuronRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeuronRoot_MetaData), NewProp_NeuronRoot_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronVPVolume = { "NeuronVPVolume", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANeuronVPVolume, NeuronVPVolume), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeuronVPVolume_MetaData), NewProp_NeuronVPVolume_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeWidth = { "VolumeWidth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANeuronVPVolume, VolumeWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeWidth_MetaData), NewProp_VolumeWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeDepth = { "VolumeDepth", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ANeuronVPVolume, VolumeDepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeDepth_MetaData), NewProp_VolumeDepth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANeuronVPVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_NeuronVPVolume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANeuronVPVolume_Statics::NewProp_VolumeDepth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANeuronVPVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ANeuronVPVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANeuronVPVolume_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANeuronVPVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ANeuronVPVolume_Statics::Class_MetaDataParams)
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
ANeuronVPVolume::~ANeuronVPVolume() {}
// End Class ANeuronVPVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ANeuronVPVolume, ANeuronVPVolume::StaticClass, TEXT("ANeuronVPVolume"), &Z_Registration_Info_UClass_ANeuronVPVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANeuronVPVolume), 382117005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_3998790436(TEXT("/Script/NeuronLiveLink"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
