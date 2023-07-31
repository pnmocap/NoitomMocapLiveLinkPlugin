// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FMocapServerCommand;
struct FLatentActionInfo;
enum class EMCCommandExtraFlag : uint8;
enum class EMCCommandParamName : uint8;
enum class EMCCommandType : uint8;
struct FVector;
struct FQuat;
struct FLiveLinkSourceHandle;
#ifdef NEURONLIVELINK_NeuronLiveLinkBPLibrary_generated_h
#error "NeuronLiveLinkBPLibrary.generated.h already included, missing '#pragma once' in NeuronLiveLinkBPLibrary.h"
#endif
#define NEURONLIVELINK_NeuronLiveLinkBPLibrary_generated_h

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_SPARSE_DATA
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDumpAllMocapApp); \
	DECLARE_FUNCTION(execRemoveMocapRecordNotifyEventHandler); \
	DECLARE_FUNCTION(execAddMocapRecordNotifyEventHandler); \
	DECLARE_FUNCTION(execSendNeuronCommand); \
	DECLARE_FUNCTION(execHasMocapCommandInQueue); \
	DECLARE_FUNCTION(execSetMocapCmdProgressHandler); \
	DECLARE_FUNCTION(execBuildMocapCmdParamStopCatpureExtraFlag); \
	DECLARE_FUNCTION(execBuildMocapCmdParam); \
	DECLARE_FUNCTION(execBuildMocapCmdParamInt); \
	DECLARE_FUNCTION(execClearMocapCmdParams); \
	DECLARE_FUNCTION(execMakeMocapCommand); \
	DECLARE_FUNCTION(execGetNeuronFrameInUE4); \
	DECLARE_FUNCTION(execNeuronBoneIndex); \
	DECLARE_FUNCTION(execGetRigidBodyNames); \
	DECLARE_FUNCTION(execGetTrackerNames); \
	DECLARE_FUNCTION(execGetAvatarNames); \
	DECLARE_FUNCTION(execGetAllMocapLivelinkSourceStatus); \
	DECLARE_FUNCTION(execGetMocapAppStatus); \
	DECLARE_FUNCTION(execRemoveAllMocapLivelinkSource); \
	DECLARE_FUNCTION(execRemoveMocapAppByName); \
	DECLARE_FUNCTION(execGetMocapAppNames); \
	DECLARE_FUNCTION(execGetNeuronParentJoint); \
	DECLARE_FUNCTION(execCreateSource);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDumpAllMocapApp); \
	DECLARE_FUNCTION(execRemoveMocapRecordNotifyEventHandler); \
	DECLARE_FUNCTION(execAddMocapRecordNotifyEventHandler); \
	DECLARE_FUNCTION(execSendNeuronCommand); \
	DECLARE_FUNCTION(execHasMocapCommandInQueue); \
	DECLARE_FUNCTION(execSetMocapCmdProgressHandler); \
	DECLARE_FUNCTION(execBuildMocapCmdParamStopCatpureExtraFlag); \
	DECLARE_FUNCTION(execBuildMocapCmdParam); \
	DECLARE_FUNCTION(execBuildMocapCmdParamInt); \
	DECLARE_FUNCTION(execClearMocapCmdParams); \
	DECLARE_FUNCTION(execMakeMocapCommand); \
	DECLARE_FUNCTION(execGetNeuronFrameInUE4); \
	DECLARE_FUNCTION(execNeuronBoneIndex); \
	DECLARE_FUNCTION(execGetRigidBodyNames); \
	DECLARE_FUNCTION(execGetTrackerNames); \
	DECLARE_FUNCTION(execGetAvatarNames); \
	DECLARE_FUNCTION(execGetAllMocapLivelinkSourceStatus); \
	DECLARE_FUNCTION(execGetMocapAppStatus); \
	DECLARE_FUNCTION(execRemoveAllMocapLivelinkSource); \
	DECLARE_FUNCTION(execRemoveMocapAppByName); \
	DECLARE_FUNCTION(execGetMocapAppNames); \
	DECLARE_FUNCTION(execGetNeuronParentJoint); \
	DECLARE_FUNCTION(execCreateSource);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuronLiveLinkBPLibrary(); \
	friend struct Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UNeuronLiveLinkBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UNeuronLiveLinkBPLibrary)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUNeuronLiveLinkBPLibrary(); \
	friend struct Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UNeuronLiveLinkBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UNeuronLiveLinkBPLibrary)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuronLiveLinkBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuronLiveLinkBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuronLiveLinkBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuronLiveLinkBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNeuronLiveLinkBPLibrary(UNeuronLiveLinkBPLibrary&&); \
	NO_API UNeuronLiveLinkBPLibrary(const UNeuronLiveLinkBPLibrary&); \
public:


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuronLiveLinkBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNeuronLiveLinkBPLibrary(UNeuronLiveLinkBPLibrary&&); \
	NO_API UNeuronLiveLinkBPLibrary(const UNeuronLiveLinkBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuronLiveLinkBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuronLiveLinkBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuronLiveLinkBPLibrary)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_29_PROLOG
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_RPC_WRAPPERS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_INCLASS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_32_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NeuronLiveLinkBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class UNeuronLiveLinkBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
