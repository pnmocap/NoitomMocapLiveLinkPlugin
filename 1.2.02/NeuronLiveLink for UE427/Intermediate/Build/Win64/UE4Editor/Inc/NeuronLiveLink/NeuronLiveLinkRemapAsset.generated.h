// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef NEURONLIVELINK_NeuronLiveLinkRemapAsset_generated_h
#error "NeuronLiveLinkRemapAsset.generated.h already included, missing '#pragma once' in NeuronLiveLinkRemapAsset.h"
#endif
#define NEURONLIVELINK_NeuronLiveLinkRemapAsset_generated_h

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_SPARSE_DATA
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_RPC_WRAPPERS \
	virtual void GetSkeletonForwardVector_Implementation(TEnumAsByte<EAxisOption::Type>& Axis) const; \
	virtual FName GetBonePrefix_Implementation() const; \
	virtual void RemapCurveElements_Implementation(TMap<FName,float>& CurveItems) const; \
	virtual FName GetRemappedCurveName_Implementation(FName CurveName) const; \
	virtual FName GetRemappedBoneName_Implementation(FName BoneName) const; \
 \
	DECLARE_FUNCTION(execGetSkeletonForwardVector); \
	DECLARE_FUNCTION(execGetBonePrefix); \
	DECLARE_FUNCTION(execRemapCurveElements); \
	DECLARE_FUNCTION(execGetRemappedCurveName); \
	DECLARE_FUNCTION(execGetRemappedBoneName);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetSkeletonForwardVector_Implementation(TEnumAsByte<EAxisOption::Type>& Axis) const; \
	virtual FName GetBonePrefix_Implementation() const; \
	virtual void RemapCurveElements_Implementation(TMap<FName,float>& CurveItems) const; \
	virtual FName GetRemappedCurveName_Implementation(FName CurveName) const; \
	virtual FName GetRemappedBoneName_Implementation(FName BoneName) const; \
 \
	DECLARE_FUNCTION(execGetSkeletonForwardVector); \
	DECLARE_FUNCTION(execGetBonePrefix); \
	DECLARE_FUNCTION(execRemapCurveElements); \
	DECLARE_FUNCTION(execGetRemappedCurveName); \
	DECLARE_FUNCTION(execGetRemappedBoneName);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_EVENT_PARMS \
	struct NeuronLiveLinkRemapAsset_eventGetBonePrefix_Parms \
	{ \
		FName ReturnValue; \
	}; \
	struct NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms \
	{ \
		FName BoneName; \
		FName ReturnValue; \
	}; \
	struct NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms \
	{ \
		FName CurveName; \
		FName ReturnValue; \
	}; \
	struct NeuronLiveLinkRemapAsset_eventGetSkeletonForwardVector_Parms \
	{ \
		TEnumAsByte<EAxisOption::Type> Axis; \
	}; \
	struct NeuronLiveLinkRemapAsset_eventRemapCurveElements_Parms \
	{ \
		TMap<FName,float> CurveItems; \
	};


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_CALLBACK_WRAPPERS
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNeuronLiveLinkRemapAsset(); \
	friend struct Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics; \
public: \
	DECLARE_CLASS(UNeuronLiveLinkRemapAsset, ULiveLinkRetargetAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UNeuronLiveLinkRemapAsset)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUNeuronLiveLinkRemapAsset(); \
	friend struct Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics; \
public: \
	DECLARE_CLASS(UNeuronLiveLinkRemapAsset, ULiveLinkRetargetAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UNeuronLiveLinkRemapAsset)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuronLiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuronLiveLinkRemapAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuronLiveLinkRemapAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuronLiveLinkRemapAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNeuronLiveLinkRemapAsset(UNeuronLiveLinkRemapAsset&&); \
	NO_API UNeuronLiveLinkRemapAsset(const UNeuronLiveLinkRemapAsset&); \
public:


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuronLiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNeuronLiveLinkRemapAsset(UNeuronLiveLinkRemapAsset&&); \
	NO_API UNeuronLiveLinkRemapAsset(const UNeuronLiveLinkRemapAsset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuronLiveLinkRemapAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuronLiveLinkRemapAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuronLiveLinkRemapAsset)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bHaveInit() { return STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, bHaveInit); } \
	FORCEINLINE static uint32 __PPO__WorldRotations() { return STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, WorldRotations); } \
	FORCEINLINE static uint32 __PPO__WorldPositions() { return STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, WorldPositions); } \
	FORCEINLINE static uint32 __PPO__HipsParentsTransform() { return STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, HipsParentsTransform); }


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_19_PROLOG \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_EVENT_PARMS


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_RPC_WRAPPERS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_CALLBACK_WRAPPERS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_INCLASS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_CALLBACK_WRAPPERS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NeuronLiveLinkRemapAsset."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class UNeuronLiveLinkRemapAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
