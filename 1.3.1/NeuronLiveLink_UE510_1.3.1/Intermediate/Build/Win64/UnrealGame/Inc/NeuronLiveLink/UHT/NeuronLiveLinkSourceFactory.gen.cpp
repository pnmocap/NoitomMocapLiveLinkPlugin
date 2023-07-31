// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronLiveLinkSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronLiveLinkSourceFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkSourceFactory();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References
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
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NeuronLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuronLiveLinkSourceFactory>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuronLiveLinkSourceFactory, UNeuronLiveLinkSourceFactory::StaticClass, TEXT("UNeuronLiveLinkSourceFactory"), &Z_Registration_Info_UClass_UNeuronLiveLinkSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuronLiveLinkSourceFactory), 3351284327U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_186987453(TEXT("/Script/NeuronLiveLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
