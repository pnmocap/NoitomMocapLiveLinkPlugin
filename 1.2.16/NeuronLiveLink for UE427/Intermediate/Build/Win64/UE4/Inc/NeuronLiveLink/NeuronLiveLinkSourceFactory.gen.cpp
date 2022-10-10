// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronLiveLinkSourceFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronLiveLinkSourceFactory() {}
// Cross Module References
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkSourceFactory_NoRegister();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkSourceFactory();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References
	void UNeuronLiveLinkSourceFactory::StaticRegisterNativesUNeuronLiveLinkSourceFactory()
	{
	}
	UClass* Z_Construct_UClass_UNeuronLiveLinkSourceFactory_NoRegister()
	{
		return UNeuronLiveLinkSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NeuronLiveLinkSourceFactory.h" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuronLiveLinkSourceFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNeuronLiveLinkSourceFactory, 1597560960);
	template<> NEURONLIVELINK_API UClass* StaticClass<UNeuronLiveLinkSourceFactory>()
	{
		return UNeuronLiveLinkSourceFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNeuronLiveLinkSourceFactory(Z_Construct_UClass_UNeuronLiveLinkSourceFactory, &UNeuronLiveLinkSourceFactory::StaticClass, TEXT("/Script/NeuronLiveLink"), TEXT("UNeuronLiveLinkSourceFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuronLiveLinkSourceFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
