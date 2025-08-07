// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/SubjectNameSetter.h"
#include "Runtime/LiveLinkInterface/Public/LiveLinkTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubjectNameSetter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
NEURONLIVELINK_API UClass* Z_Construct_UClass_USubjectNameSetter();
NEURONLIVELINK_API UClass* Z_Construct_UClass_USubjectNameSetter_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References

// Begin Interface USubjectNameSetter Function SetSubjectName
struct SubjectNameSetter_eventSetSubjectName_Parms
{
	FLiveLinkSubjectName Subject;
};
void ISubjectNameSetter::SetSubjectName(FLiveLinkSubjectName Subject)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSubjectName instead.");
}
static FName NAME_USubjectNameSetter_SetSubjectName = FName(TEXT("SetSubjectName"));
void ISubjectNameSetter::Execute_SetSubjectName(UObject* O, FLiveLinkSubjectName Subject)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USubjectNameSetter::StaticClass()));
	SubjectNameSetter_eventSetSubjectName_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USubjectNameSetter_SetSubjectName);
	if (Func)
	{
		Parms.Subject=Subject;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISubjectNameSetter*)(O->GetNativeInterfaceAddress(USubjectNameSetter::StaticClass())))
	{
		I->SetSubjectName_Implementation(Subject);
	}
}
struct Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SubjectNameSetter" },
		{ "ModuleRelativePath", "Public/SubjectNameSetter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Subject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SubjectNameSetter_eventSetSubjectName_Parms, Subject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(0, nullptr) }; // 463217522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::NewProp_Subject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubjectNameSetter, nullptr, "SetSubjectName", nullptr, nullptr, Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::PropPointers), sizeof(SubjectNameSetter_eventSetSubjectName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::Function_MetaDataParams) };
static_assert(sizeof(SubjectNameSetter_eventSetSubjectName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USubjectNameSetter_SetSubjectName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISubjectNameSetter::execSetSubjectName)
{
	P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_Subject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubjectName_Implementation(Z_Param_Subject);
	P_NATIVE_END;
}
// End Interface USubjectNameSetter Function SetSubjectName

// Begin Interface USubjectNameSetter
void USubjectNameSetter::StaticRegisterNativesUSubjectNameSetter()
{
	UClass* Class = USubjectNameSetter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetSubjectName", &ISubjectNameSetter::execSetSubjectName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubjectNameSetter);
UClass* Z_Construct_UClass_USubjectNameSetter_NoRegister()
{
	return USubjectNameSetter::StaticClass();
}
struct Z_Construct_UClass_USubjectNameSetter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubjectNameSetter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USubjectNameSetter_SetSubjectName, "SetSubjectName" }, // 525920558
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISubjectNameSetter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USubjectNameSetter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USubjectNameSetter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USubjectNameSetter_Statics::ClassParams = {
	&USubjectNameSetter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USubjectNameSetter_Statics::Class_MetaDataParams), Z_Construct_UClass_USubjectNameSetter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USubjectNameSetter()
{
	if (!Z_Registration_Info_UClass_USubjectNameSetter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubjectNameSetter.OuterSingleton, Z_Construct_UClass_USubjectNameSetter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USubjectNameSetter.OuterSingleton;
}
template<> NEURONLIVELINK_API UClass* StaticClass<USubjectNameSetter>()
{
	return USubjectNameSetter::StaticClass();
}
USubjectNameSetter::USubjectNameSetter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USubjectNameSetter);
USubjectNameSetter::~USubjectNameSetter() {}
// End Interface USubjectNameSetter

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USubjectNameSetter, USubjectNameSetter::StaticClass, TEXT("USubjectNameSetter"), &Z_Registration_Info_UClass_USubjectNameSetter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubjectNameSetter), 2145339394U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_3897332298(TEXT("/Script/NeuronLiveLink"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_SubjectNameSetter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
