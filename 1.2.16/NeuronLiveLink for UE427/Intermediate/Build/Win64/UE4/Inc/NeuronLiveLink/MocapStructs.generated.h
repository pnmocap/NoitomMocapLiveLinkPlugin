// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FMocapServerCommand;
struct FVector;
struct FRotator;
#ifdef NEURONLIVELINK_MocapStructs_generated_h
#error "MocapStructs.generated.h already included, missing '#pragma once' in MocapStructs.h"
#endif
#define NEURONLIVELINK_MocapStructs_generated_h

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_300_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMocapServerCommand_Statics; \
	NEURONLIVELINK_API static class UScriptStruct* StaticStruct();


template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<struct FMocapServerCommand>();

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMocapAvatar_Statics; \
	NEURONLIVELINK_API static class UScriptStruct* StaticStruct();


template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<struct FMocapAvatar>();

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_186_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMocapTracker_Statics; \
	NEURONLIVELINK_API static class UScriptStruct* StaticStruct();


template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<struct FMocapTracker>();

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_155_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMocapRigidBody_Statics; \
	NEURONLIVELINK_API static class UScriptStruct* StaticStruct();


template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<struct FMocapRigidBody>();

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_131_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMCRenderSetting_Statics; \
	NEURONLIVELINK_API static class UScriptStruct* StaticStruct();


template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<struct FMCRenderSetting>();

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMCAppSettings_Statics; \
	NEURONLIVELINK_API static class UScriptStruct* StaticStruct();


template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<struct FMCAppSettings>();

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_SPARSE_DATA
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasMocapCommandInQueue); \
	DECLARE_FUNCTION(execQueueMocapCommand); \
	DECLARE_FUNCTION(execGetLastErrorId); \
	DECLARE_FUNCTION(execGetLastErrorMessage); \
	DECLARE_FUNCTION(execGetLastErrorStr); \
	DECLARE_FUNCTION(execGetIsReadyToUse); \
	DECLARE_FUNCTION(execGetIsConnecting); \
	DECLARE_FUNCTION(execGetAvatarStaticData); \
	DECLARE_FUNCTION(execGetAvatarData); \
	DECLARE_FUNCTION(execGetAllAvatarNames); \
	DECLARE_FUNCTION(execGetRigidBody); \
	DECLARE_FUNCTION(execGetAllRigidBodyNames); \
	DECLARE_FUNCTION(execGetTracker); \
	DECLARE_FUNCTION(execGetAllTrackerNames); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execGetConnectionString);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasMocapCommandInQueue); \
	DECLARE_FUNCTION(execQueueMocapCommand); \
	DECLARE_FUNCTION(execGetLastErrorId); \
	DECLARE_FUNCTION(execGetLastErrorMessage); \
	DECLARE_FUNCTION(execGetLastErrorStr); \
	DECLARE_FUNCTION(execGetIsReadyToUse); \
	DECLARE_FUNCTION(execGetIsConnecting); \
	DECLARE_FUNCTION(execGetAvatarStaticData); \
	DECLARE_FUNCTION(execGetAvatarData); \
	DECLARE_FUNCTION(execGetAllAvatarNames); \
	DECLARE_FUNCTION(execGetRigidBody); \
	DECLARE_FUNCTION(execGetAllRigidBodyNames); \
	DECLARE_FUNCTION(execGetTracker); \
	DECLARE_FUNCTION(execGetAllTrackerNames); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect); \
	DECLARE_FUNCTION(execGetConnectionString);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMocapApp(); \
	friend struct Z_Construct_UClass_UMocapApp_Statics; \
public: \
	DECLARE_CLASS(UMocapApp, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UMocapApp)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_INCLASS \
private: \
	static void StaticRegisterNativesUMocapApp(); \
	friend struct Z_Construct_UClass_UMocapApp_Statics; \
public: \
	DECLARE_CLASS(UMocapApp, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UMocapApp)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMocapApp(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMocapApp) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMocapApp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMocapApp); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMocapApp(UMocapApp&&); \
	NO_API UMocapApp(const UMocapApp&); \
public:


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMocapApp(UMocapApp&&); \
	NO_API UMocapApp(const UMocapApp&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMocapApp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMocapApp); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMocapApp)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AppHandleInternal() { return STRUCT_OFFSET(UMocapApp, AppHandleInternal); }


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_341_PROLOG
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_RPC_WRAPPERS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_INCLASS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_344_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class UMocapApp>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h


#define FOREACH_ENUM_EMCCOMMANDPARAMNAME(op) \
	op(EMCCommandParamName::ParamStopCatpureExtraFlag) \
	op(EMCCommandParamName::ParamDeviceRadio) \
	op(EMCCommandParamName::ParamAvatarName) 

enum class EMCCommandParamName : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCommandParamName>();

#define FOREACH_ENUM_EMCCOMMANDEXTRAFLAG(op) \
	op(EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesPowerOff) \
	op(EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesHibernate) 

enum class EMCCommandExtraFlag : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCommandExtraFlag>();

#define FOREACH_ENUM_EMCCOMMANDTYPE(op) \
	op(EMCCommandType::StartCapture) \
	op(EMCCommandType::StopCapture) \
	op(EMCCommandType::ZeroPosition) \
	op(EMCCommandType::CalibrateMotion) \
	op(EMCCommandType::StartRecored) \
	op(EMCCommandType::StopRecored) \
	op(EMCCommandType::ResumeOriginalPosture) 

enum class EMCCommandType : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCommandType>();

#define FOREACH_ENUM_EMCDISTANCEUNIT(op) \
	op(EMCDistanceUnit::Centimeter) \
	op(EMCDistanceUnit::Meter) 

enum class EMCDistanceUnit : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCDistanceUnit>();

#define FOREACH_ENUM_EMCROTATINGDIRECTION(op) \
	op(EMCRotatingDirection::CW) \
	op(EMCRotatingDirection::CCW) 

enum class EMCRotatingDirection : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCRotatingDirection>();

#define FOREACH_ENUM_EMCCOORDSYSTEM(op) \
	op(EMCCoordSystem::RightHanded) \
	op(EMCCoordSystem::LeftHanded) 

enum class EMCCoordSystem : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCoordSystem>();

#define FOREACH_ENUM_EMCFRONTAXIS(op) \
	op(EMCFrontAxis::Unknown) \
	op(EMCFrontAxis::ParityEven) \
	op(EMCFrontAxis::ParityOdd) 

enum class EMCFrontAxis : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCFrontAxis>();

#define FOREACH_ENUM_EMCUPAXIS(op) \
	op(EMCUpAxis::Unknown) \
	op(EMCUpAxis::X) \
	op(EMCUpAxis::Y) \
	op(EMCUpAxis::Z) 

enum class EMCUpAxis : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCUpAxis>();

#define FOREACH_ENUM_EMCAPPPROTOCOL(op) \
	op(EMCAppProtocol::UDP) \
	op(EMCAppProtocol::TCP) 

enum class EMCAppProtocol : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCAppProtocol>();

#define FOREACH_ENUM_EMCBVHDATAFORMAT(op) \
	op(EMCBvhDataFormat::String) \
	op(EMCBvhDataFormat::BinaryWithOldFrameHeader) \
	op(EMCBvhDataFormat::Binary) \
	op(EMCBvhDataFormat::Mask_LegacyHumanHierarchy) 

enum class EMCBvhDataFormat : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCBvhDataFormat>();

#define FOREACH_ENUM_EMCBVHROTATIONORDER(op) \
	op(EMCBvhRotationOrder::XYZ) \
	op(EMCBvhRotationOrder::XZY) \
	op(EMCBvhRotationOrder::YXZ) \
	op(EMCBvhRotationOrder::YZX) \
	op(EMCBvhRotationOrder::ZXY) \
	op(EMCBvhRotationOrder::ZYX) 

enum class EMCBvhRotationOrder : uint8;
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCBvhRotationOrder>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
