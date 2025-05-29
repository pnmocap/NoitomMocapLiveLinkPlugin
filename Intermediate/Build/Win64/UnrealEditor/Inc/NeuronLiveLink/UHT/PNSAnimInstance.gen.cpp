// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/PNSAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePNSAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
NEURONLIVELINK_API UClass* Z_Construct_UClass_UPNSAnimInstance();
NEURONLIVELINK_API UClass* Z_Construct_UClass_UPNSAnimInstance_NoRegister();
NEURONLIVELINK_API UClass* Z_Construct_UClass_USubjectNameSetter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References

// Begin Class UPNSAnimInstance Function SetSubjectName
struct PNSAnimInstance_eventSetSubjectName_Parms
{
	FLiveLinkSubjectName Subject;
};
static const FName NAME_UPNSAnimInstance_SetSubjectName = FName(TEXT("SetSubjectName"));
void UPNSAnimInstance::SetSubjectName(FLiveLinkSubjectName Subject)
{
	UFunction* Func = FindFunctionChecked(NAME_UPNSAnimInstance_SetSubjectName);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		PNSAnimInstance_eventSetSubjectName_Parms Parms;
		Parms.Subject=Subject;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetSubjectName_Implementation(Subject);
	}
}
struct Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SubjectNameSetter" },
		{ "ModuleRelativePath", "Public/PNSAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PNSAnimInstance_eventSetSubjectName_Parms, Subject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(0, nullptr) }; // 463217522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::NewProp_Subject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPNSAnimInstance, nullptr, "SetSubjectName", nullptr, nullptr, Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::PropPointers), sizeof(PNSAnimInstance_eventSetSubjectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(PNSAnimInstance_eventSetSubjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPNSAnimInstance::execSetSubjectName)
{
	P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_Subject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubjectName_Implementation(Z_Param_Subject);
	P_NATIVE_END;
}
// End Class UPNSAnimInstance Function SetSubjectName

// Begin Class UPNSAnimInstance
void UPNSAnimInstance::StaticRegisterNativesUPNSAnimInstance()
{
	UClass* Class = UPNSAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSubjectName", &UPNSAnimInstance::execSetSubjectName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPNSAnimInstance);
UClass* Z_Construct_UClass_UPNSAnimInstance_NoRegister()
{
	return UPNSAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UPNSAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "PNSAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PNSAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "SubjectNameSetter" },
		{ "ModuleRelativePath", "Public/PNSAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName, "SetSubjectName" }, // 180797345
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPNSAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPNSAnimInstance_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPNSAnimInstance, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubjectName_MetaData), NewProp_SubjectName_MetaData) }; // 463217522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPNSAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPNSAnimInstance_Statics::NewProp_SubjectName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPNSAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPNSAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPNSAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPNSAnimInstance_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USubjectNameSetter_NoRegister, (int32)VTABLE_OFFSET(UPNSAnimInstance, ISubjectNameSetter), false },  // 2145339394
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPNSAnimInstance_Statics::ClassParams = {
	&UPNSAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPNSAnimInstance_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPNSAnimInstance_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPNSAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UPNSAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPNSAnimInstance()
{
	if (!Z_Registration_Info_UClass_UPNSAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPNSAnimInstance.OuterSingleton, Z_Construct_UClass_UPNSAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPNSAnimInstance.OuterSingleton;
}
template<> NEURONLIVELINK_API UClass* StaticClass<UPNSAnimInstance>()
{
	return UPNSAnimInstance::StaticClass();
}
UPNSAnimInstance::UPNSAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPNSAnimInstance);
UPNSAnimInstance::~UPNSAnimInstance() {}
// End Class UPNSAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPNSAnimInstance, UPNSAnimInstance::StaticClass, TEXT("UPNSAnimInstance"), &Z_Registration_Info_UClass_UPNSAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPNSAnimInstance), 2805795348U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_3009556210(TEXT("/Script/NeuronLiveLink"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
