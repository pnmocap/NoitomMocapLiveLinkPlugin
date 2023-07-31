// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/PNSAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePNSAnimInstance() {}
// Cross Module References
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UPNSAnimInstance_NoRegister();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UPNSAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSubjectName();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_USubjectNameSetter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPNSAnimInstance::execSetSubjectName)
	{
		P_GET_STRUCT(FLiveLinkSubjectName,Z_Param_Subject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSubjectName_Implementation(Z_Param_Subject);
		P_NATIVE_END;
	}
	static FName NAME_UPNSAnimInstance_SetSubjectName = FName(TEXT("SetSubjectName"));
	void UPNSAnimInstance::SetSubjectName(FLiveLinkSubjectName Subject)
	{
		PNSAnimInstance_eventSetSubjectName_Parms Parms;
		Parms.Subject=Subject;
		ProcessEvent(FindFunctionChecked(NAME_UPNSAnimInstance_SetSubjectName),&Parms);
	}
	void UPNSAnimInstance::StaticRegisterNativesUPNSAnimInstance()
	{
		UClass* Class = UPNSAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSubjectName", &UPNSAnimInstance::execSetSubjectName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Subject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::NewProp_Subject = { "Subject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PNSAnimInstance_eventSetSubjectName_Parms, Subject), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(nullptr, 0) }; // 1633295967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::NewProp_Subject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubjectNameSetter" },
		{ "ModuleRelativePath", "Public/PNSAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPNSAnimInstance, nullptr, "SetSubjectName", nullptr, nullptr, sizeof(PNSAnimInstance_eventSetSubjectName_Parms), Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPNSAnimInstance);
	UClass* Z_Construct_UClass_UPNSAnimInstance_NoRegister()
	{
		return UPNSAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UPNSAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPNSAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPNSAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPNSAnimInstance_SetSubjectName, "SetSubjectName" }, // 3157501653
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPNSAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance AnimInstance" },
		{ "IncludePath", "PNSAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PNSAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPNSAnimInstance_Statics::NewProp_SubjectName_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "SubjectNameSetter" },
		{ "ModuleRelativePath", "Public/PNSAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPNSAnimInstance_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPNSAnimInstance, SubjectName), Z_Construct_UScriptStruct_FLiveLinkSubjectName, METADATA_PARAMS(Z_Construct_UClass_UPNSAnimInstance_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPNSAnimInstance_Statics::NewProp_SubjectName_MetaData)) }; // 1633295967
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPNSAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPNSAnimInstance_Statics::NewProp_SubjectName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPNSAnimInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_USubjectNameSetter_NoRegister, (int32)VTABLE_OFFSET(UPNSAnimInstance, ISubjectNameSetter), false },  // 855170366
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPNSAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPNSAnimInstance>::IsAbstract,
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
		METADATA_PARAMS(Z_Construct_UClass_UPNSAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPNSAnimInstance_Statics::Class_MetaDataParams))
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
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPNSAnimInstance);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPNSAnimInstance, UPNSAnimInstance::StaticClass, TEXT("UPNSAnimInstance"), &Z_Registration_Info_UClass_UPNSAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPNSAnimInstance), 1771299955U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_3387100730(TEXT("/Script/NeuronLiveLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_PNSAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
