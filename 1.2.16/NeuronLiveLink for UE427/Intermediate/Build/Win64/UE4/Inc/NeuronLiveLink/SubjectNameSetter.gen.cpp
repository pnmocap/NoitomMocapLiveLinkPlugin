// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/SubjectNameSetter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubjectNameSetter() {}
// Cross Module References
	NEURONLIVELINK_API UClass* Z_Construct_UClass_USubjectNameSetter_NoRegister();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_USubjectNameSetter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
// End Cross Module References
	DEFINE_FUNCTION(ISubjectNameSetter::execSetSubjectName)
	{
		P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_Subject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubjectName_Implementation(Z_Param_Subject);
		P_NATIVE_END;
	}
	void ISubjectNameSetter::SetSubjectName(FLiveLinkSubjectName Subject)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetSubjectName instead.");
	}
	void USubjectNameSetter::StaticRegisterNativesUSubjectNameSetter()
	{
		UClass* Class = USubjectNameSetter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSubjectName", &ISubjectNameSetter::execSetSubjectName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Subject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SubjectNameSetter_eventSetSubjectName_Parms, Subject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::NewProp_Subject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubjectNameSetter" },
		{ "ModuleRelativePath", "Public/SubjectNameSetter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubjectNameSetter, nullptr, "SetSubjectName", nullptr, nullptr, sizeof(SubjectNameSetter_eventSetSubjectName_Parms), Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubjectNameSetter_SetSubjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USubjectNameSetter_SetSubjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USubjectNameSetter_NoRegister()
	{
		return USubjectNameSetter::StaticClass();
	}
	struct Z_Construct_UClass_USubjectNameSetter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubjectNameSetter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubjectNameSetter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubjectNameSetter_SetSubjectName, "SetSubjectName" }, // 879638370
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubjectNameSetter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SubjectNameSetter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubjectNameSetter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISubjectNameSetter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USubjectNameSetter_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_USubjectNameSetter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubjectNameSetter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubjectNameSetter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USubjectNameSetter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USubjectNameSetter, 1627309673);
	template<> NEURONLIVELINK_API UClass* StaticClass<USubjectNameSetter>()
	{
		return USubjectNameSetter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USubjectNameSetter(Z_Construct_UClass_USubjectNameSetter, &USubjectNameSetter::StaticClass, TEXT("/Script/NeuronLiveLink"), TEXT("USubjectNameSetter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubjectNameSetter);
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
