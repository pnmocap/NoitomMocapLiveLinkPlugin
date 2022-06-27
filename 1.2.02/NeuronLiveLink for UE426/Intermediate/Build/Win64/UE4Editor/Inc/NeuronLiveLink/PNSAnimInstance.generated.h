// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkSubjectName;
#ifdef NEURONLIVELINK_PNSAnimInstance_generated_h
#error "PNSAnimInstance.generated.h already included, missing '#pragma once' in PNSAnimInstance.h"
#endif
#define NEURONLIVELINK_PNSAnimInstance_generated_h

#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_SPARSE_DATA
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_RPC_WRAPPERS \
	virtual void SetSubjectName_Implementation(FLiveLinkSubjectName Subject); \
 \
	DECLARE_FUNCTION(execSetSubjectName);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSubjectName);


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_EVENT_PARMS \
	struct PNSAnimInstance_eventSetSubjectName_Parms \
	{ \
		FLiveLinkSubjectName Subject; \
	};


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_CALLBACK_WRAPPERS
#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPNSAnimInstance(); \
	friend struct Z_Construct_UClass_UPNSAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPNSAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UPNSAnimInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPNSAnimInstance*>(this); }


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPNSAnimInstance(); \
	friend struct Z_Construct_UClass_UPNSAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UPNSAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(UPNSAnimInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UPNSAnimInstance*>(this); }


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPNSAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPNSAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPNSAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPNSAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPNSAnimInstance(UPNSAnimInstance&&); \
	NO_API UPNSAnimInstance(const UPNSAnimInstance&); \
public:


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPNSAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPNSAnimInstance(UPNSAnimInstance&&); \
	NO_API UPNSAnimInstance(const UPNSAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPNSAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPNSAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPNSAnimInstance)


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SubjectName() { return STRUCT_OFFSET(UPNSAnimInstance, SubjectName); }


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_13_PROLOG \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_EVENT_PARMS


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_RPC_WRAPPERS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_INCLASS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_SPARSE_DATA \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_CALLBACK_WRAPPERS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class UPNSAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
