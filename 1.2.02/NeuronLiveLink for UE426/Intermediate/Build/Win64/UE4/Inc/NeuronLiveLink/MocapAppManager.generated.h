// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMocapApp;
struct FMCAppSettings;
class AMocapAppManager;
#ifdef NEURONLIVELINK_MocapAppManager_generated_h
#error "MocapAppManager.generated.h already included, missing '#pragma once' in MocapAppManager.h"
#endif
#define NEURONLIVELINK_MocapAppManager_generated_h

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_SPARSE_DATA
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAvatarBuildinBoneNameAndParents); \
	DECLARE_FUNCTION(execDumpApp); \
	DECLARE_FUNCTION(execGetMocapApp); \
	DECLARE_FUNCTION(execDestroyAllApplications); \
	DECLARE_FUNCTION(execDestroyApplication); \
	DECLARE_FUNCTION(execStartApplication); \
	DECLARE_FUNCTION(execGetInstance);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAvatarBuildinBoneNameAndParents); \
	DECLARE_FUNCTION(execDumpApp); \
	DECLARE_FUNCTION(execGetMocapApp); \
	DECLARE_FUNCTION(execDestroyAllApplications); \
	DECLARE_FUNCTION(execDestroyApplication); \
	DECLARE_FUNCTION(execStartApplication); \
	DECLARE_FUNCTION(execGetInstance);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMocapAppManager(); \
	friend struct Z_Construct_UClass_AMocapAppManager_Statics; \
public: \
	DECLARE_CLASS(AMocapAppManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(AMocapAppManager)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_INCLASS \
private: \
	static void StaticRegisterNativesAMocapAppManager(); \
	friend struct Z_Construct_UClass_AMocapAppManager_Statics; \
public: \
	DECLARE_CLASS(AMocapAppManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(AMocapAppManager)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMocapAppManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMocapAppManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMocapAppManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMocapAppManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMocapAppManager(AMocapAppManager&&); \
	NO_API AMocapAppManager(const AMocapAppManager&); \
public:


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMocapAppManager(AMocapAppManager&&); \
	NO_API AMocapAppManager(const AMocapAppManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMocapAppManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMocapAppManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMocapAppManager)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_56_PROLOG
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_RPC_WRAPPERS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_INCLASS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class AMocapAppManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
