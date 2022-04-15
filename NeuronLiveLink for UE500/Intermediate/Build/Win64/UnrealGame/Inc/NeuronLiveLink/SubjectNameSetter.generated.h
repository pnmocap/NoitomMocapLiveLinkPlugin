// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLiveLinkSubjectName;
#ifdef NEURONLIVELINK_SubjectNameSetter_generated_h
#error "SubjectNameSetter.generated.h already included, missing '#pragma once' in SubjectNameSetter.h"
#endif
#define NEURONLIVELINK_SubjectNameSetter_generated_h

#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_SPARSE_DATA
#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_RPC_WRAPPERS \
	virtual void SetSubjectName_Implementation(FLiveLinkSubjectName Subject) {}; \
 \
	DECLARE_FUNCTION(execSetSubjectName);


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetSubjectName_Implementation(FLiveLinkSubjectName Subject) {}; \
 \
	DECLARE_FUNCTION(execSetSubjectName);


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_EVENT_PARMS \
	struct SubjectNameSetter_eventSetSubjectName_Parms \
	{ \
		FLiveLinkSubjectName Subject; \
	};


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubjectNameSetter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubjectNameSetter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubjectNameSetter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubjectNameSetter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubjectNameSetter(USubjectNameSetter&&); \
	NO_API USubjectNameSetter(const USubjectNameSetter&); \
public:


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubjectNameSetter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubjectNameSetter(USubjectNameSetter&&); \
	NO_API USubjectNameSetter(const USubjectNameSetter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubjectNameSetter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubjectNameSetter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubjectNameSetter)


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSubjectNameSetter(); \
	friend struct Z_Construct_UClass_USubjectNameSetter_Statics; \
public: \
	DECLARE_CLASS(USubjectNameSetter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NeuronLiveLink"), NO_API) \
	DECLARE_SERIALIZER(USubjectNameSetter)


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISubjectNameSetter() {} \
public: \
	typedef USubjectNameSetter UClassType; \
	typedef ISubjectNameSetter ThisClass; \
	static void Execute_SetSubjectName(UObject* O, FLiveLinkSubjectName Subject); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_INCLASS_IINTERFACE \
protected: \
	virtual ~ISubjectNameSetter() {} \
public: \
	typedef USubjectNameSetter UClassType; \
	typedef ISubjectNameSetter ThisClass; \
	static void Execute_SetSubjectName(UObject* O, FLiveLinkSubjectName Subject); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_11_PROLOG \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_EVENT_PARMS


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_RPC_WRAPPERS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_SPARSE_DATA \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NEURONLIVELINK_API UClass* StaticClass<class USubjectNameSetter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
