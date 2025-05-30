// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuronLiveLinkSourceFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEURONLIVELINK_NeuronLiveLinkSourceFactory_generated_h
#error "NeuronLiveLinkSourceFactory.generated.h already included, missing '#pragma once' in NeuronLiveLinkSourceFactory.h"
#endif
#define NEURONLIVELINK_NeuronLiveLinkSourceFactory_generated_h

#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNeuronLiveLinkSourceFactory(); \
	friend struct Z_Construct_UClass_UNeuronLiveLinkSourceFactory_Statics; \
public: \
	DECLARE_CLASS(UNeuronLiveLinkSourceFactory, ULiveLinkSourceFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UNeuronLiveLinkSourceFactory)


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuronLiveLinkSourceFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuronLiveLinkSourceFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuronLiveLinkSourceFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuronLiveLinkSourceFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNeuronLiveLinkSourceFactory(UNeuronLiveLinkSourceFactory&&); \
	UNeuronLiveLinkSourceFactory(const UNeuronLiveLinkSourceFactory&); \
public: \
	NO_API virtual ~UNeuronLiveLinkSourceFactory();


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_13_PROLOG
#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_16_INCLASS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class UNeuronLiveLinkSourceFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkSourceFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
