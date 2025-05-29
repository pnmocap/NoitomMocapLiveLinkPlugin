// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NeuronLiveLinkRemapAsset.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef NEURONLIVELINK_NeuronLiveLinkRemapAsset_generated_h
#error "NeuronLiveLinkRemapAsset.generated.h already included, missing '#pragma once' in NeuronLiveLinkRemapAsset.h"
#endif
#define NEURONLIVELINK_NeuronLiveLinkRemapAsset_generated_h

#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_RPC_WRAPPERS \
	virtual void GetSkeletonForwardVector_Implementation(TEnumAsByte<EAxisOption::Type>& Axis) const; \
	virtual FName GetBonePrefix_Implementation() const; \
	virtual void RemapCurveElements_Implementation(TMap<FName,float>& CurveItems) const; \
	virtual FName GetRemappedCurveName_Implementation(FName CurveName) const; \
	virtual FName GetRemappedBoneName_Implementation(FName BoneName) const; \
	DECLARE_FUNCTION(execGetSkeletonForwardVector); \
	DECLARE_FUNCTION(execGetBonePrefix); \
	DECLARE_FUNCTION(execRemapCurveElements); \
	DECLARE_FUNCTION(execGetRemappedCurveName); \
	DECLARE_FUNCTION(execGetRemappedBoneName);


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUNeuronLiveLinkRemapAsset(); \
	friend struct Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics; \
public: \
	DECLARE_CLASS(UNeuronLiveLinkRemapAsset, ULiveLinkRetargetAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UNeuronLiveLinkRemapAsset)


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNeuronLiveLinkRemapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNeuronLiveLinkRemapAsset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNeuronLiveLinkRemapAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNeuronLiveLinkRemapAsset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNeuronLiveLinkRemapAsset(UNeuronLiveLinkRemapAsset&&); \
	UNeuronLiveLinkRemapAsset(const UNeuronLiveLinkRemapAsset&); \
public: \
	NO_API virtual ~UNeuronLiveLinkRemapAsset();


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_19_PROLOG
#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_RPC_WRAPPERS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_INCLASS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class UNeuronLiveLinkRemapAsset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
