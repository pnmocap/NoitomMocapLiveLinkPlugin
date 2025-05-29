// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MocapAppManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMocapAppManager;
class UMocapApp;
struct FMCAppSettings;
#ifdef NEURONLIVELINK_MocapAppManager_generated_h
#error "MocapAppManager.generated.h already included, missing '#pragma once' in MocapAppManager.h"
#endif
#define NEURONLIVELINK_MocapAppManager_generated_h

#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAvatarBuildinBoneNameAndParents); \
	DECLARE_FUNCTION(execDumpApp); \
	DECLARE_FUNCTION(execGetMocapApp); \
	DECLARE_FUNCTION(execDestroyAllApplications); \
	DECLARE_FUNCTION(execDestroyApplication); \
	DECLARE_FUNCTION(execStartApplication); \
	DECLARE_FUNCTION(execGetInstance);


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMocapAppManager(); \
	friend struct Z_Construct_UClass_AMocapAppManager_Statics; \
public: \
	DECLARE_CLASS(AMocapAppManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(AMocapAppManager)


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMocapAppManager(AMocapAppManager&&); \
	AMocapAppManager(const AMocapAppManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMocapAppManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMocapAppManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMocapAppManager)


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_56_PROLOG
#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class AMocapAppManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
