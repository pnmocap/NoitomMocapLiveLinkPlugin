// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuronVPVolume.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NEURONLIVELINK_NeuronVPVolume_generated_h
#error "NeuronVPVolume.generated.h already included, missing '#pragma once' in NeuronVPVolume.h"
#endif
#define NEURONLIVELINK_NeuronVPVolume_generated_h

#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execNeuronChangeVolumeScale);


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANeuronVPVolume(); \
	friend struct Z_Construct_UClass_ANeuronVPVolume_Statics; \
public: \
	DECLARE_CLASS(ANeuronVPVolume, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(ANeuronVPVolume)


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ANeuronVPVolume(ANeuronVPVolume&&); \
	ANeuronVPVolume(const ANeuronVPVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANeuronVPVolume); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANeuronVPVolume); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANeuronVPVolume) \
	NO_API virtual ~ANeuronVPVolume();


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_9_PROLOG
#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class ANeuronVPVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronVPVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
