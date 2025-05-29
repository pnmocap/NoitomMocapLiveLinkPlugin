// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronLiveLinkSourceFactory() {}

// Begin Cross Module References
LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkSourceFactory();
NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkSourceFactory_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References

// Begin Class UNeuronLiveLinkSourceFactory
void UNeuronLiveLinkSourceFactory::StaticRegisterNativesUNeuronLiveLinkSourceFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuronLiveLinkSourceFactory);
UClass* Z_Construct_UClass_UNeuronLiveLinkSourceFactory_NoRegister()
{
	return UNeuronLiveLinkSourceFactory::StaticClass();
}
struct Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NeuronLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkSourceFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuronLiveLinkSourceFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::ClassParams = {
	&UNeuronLiveLinkSourceFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNeuronLiveLinkSourceFactory()
{
	if (!Z_Registration_Info_UClass_UNeuronLiveLinkSourceFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuronLiveLinkSourceFactory.OuterSingleton, Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNeuronLiveLinkSourceFactory.OuterSingleton;
}
template<> NEURONLIVELINK_API UClass* StaticClass<UNeuronLiveLinkSourceFactory>()
{
	return UNeuronLiveLinkSourceFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuronLiveLinkSourceFactory);
UNeuronLiveLinkSourceFactory::~UNeuronLiveLinkSourceFactory() {}
// End Class UNeuronLiveLinkSourceFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNeuronLiveLinkSourceFactory, UNeuronLiveLinkSourceFactory::StaticClass, TEXT("UNeuronLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UNeuronLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuronLiveLinkSourceFactory), 293035593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_3250223657(TEXT("/Script/NeuronLiveLink"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
