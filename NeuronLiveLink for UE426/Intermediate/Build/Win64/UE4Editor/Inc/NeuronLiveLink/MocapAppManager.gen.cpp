// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/MocapAppManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMocapAppManager() {}
// Cross Module References
	NEURONLIVELINK_API UClass* Z_Construct_UClass_AMocapAppManager_NoRegister();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_AMocapAppManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UMocapApp_NoRegister();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMCAppSettings();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMocapAppManager::execGetAvatarBuildinBoneNameAndParents)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Parents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAvatarBuildinBoneNameAndParents(Z_Param_Out_BoneNames,Z_Param_Out_Parents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMocapAppManager::execDumpApp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AppName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DumpApp(Z_Param_AppName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMocapAppManager::execGetMocapApp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AppName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMocapApp**)Z_Param__Result=P_THIS->GetMocapApp(Z_Param_AppName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMocapAppManager::execDestroyAllApplications)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyAllApplications();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMocapAppManager::execDestroyApplication)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AppName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyApplication(Z_Param_AppName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMocapAppManager::execStartApplication)
	{
		P_GET_STRUCT_REF(FMCAppSettings,Z_Param_Out_AppSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartApplication(Z_Param_Out_AppSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMocapAppManager::execGetInstance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AMocapAppManager**)Z_Param__Result=AMocapAppManager::GetInstance();
		P_NATIVE_END;
	}
	void AMocapAppManager::StaticRegisterNativesAMocapAppManager()
	{
		UClass* Class = AMocapAppManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyAllApplications", &AMocapAppManager::execDestroyAllApplications },
			{ "DestroyApplication", &AMocapAppManager::execDestroyApplication },
			{ "DumpApp", &AMocapAppManager::execDumpApp },
			{ "GetAvatarBuildinBoneNameAndParents", &AMocapAppManager::execGetAvatarBuildinBoneNameAndParents },
			{ "GetInstance", &AMocapAppManager::execGetInstance },
			{ "GetMocapApp", &AMocapAppManager::execGetMocapApp },
			{ "StartApplication", &AMocapAppManager::execStartApplication },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "DestroyAllApplications", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics
	{
		struct MocapAppManager_eventDestroyApplication_Parms
		{
			FString AppName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventDestroyApplication_Parms, AppName), METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "DestroyApplication", nullptr, nullptr, sizeof(MocapAppManager_eventDestroyApplication_Parms), Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_DestroyApplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics
	{
		struct MocapAppManager_eventDumpApp_Parms
		{
			FString AppName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventDumpApp_Parms, AppName), METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "DumpApp", nullptr, nullptr, sizeof(MocapAppManager_eventDumpApp_Parms), Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_DumpApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics
	{
		struct MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms
		{
			TArray<FName> BoneNames;
			TArray<int32> Parents;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Parents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Parents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "GetAvatarBuildinBoneNameAndParents", nullptr, nullptr, sizeof(MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms), Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics
	{
		struct MocapAppManager_eventGetInstance_Parms
		{
			AMocapAppManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_AMocapAppManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "GetInstance", nullptr, nullptr, sizeof(MocapAppManager_eventGetInstance_Parms), Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics
	{
		struct MocapAppManager_eventGetMocapApp_Parms
		{
			FString AppName;
			UMocapApp* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetMocapApp_Parms, AppName), METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetMocapApp_Parms, ReturnValue), Z_Construct_UClass_UMocapApp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "GetMocapApp", nullptr, nullptr, sizeof(MocapAppManager_eventGetMocapApp_Parms), Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_GetMocapApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics
	{
		struct MocapAppManager_eventStartApplication_Parms
		{
			FMCAppSettings AppSettings;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AppSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings = { "AppSettings", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventStartApplication_Parms, AppSettings), Z_Construct_UScriptStruct_FMCAppSettings, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings_MetaData)) };
	void Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapAppManager_eventStartApplication_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapAppManager_eventStartApplication_Parms), &Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "StartApplication", nullptr, nullptr, sizeof(MocapAppManager_eventStartApplication_Parms), Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_StartApplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMocapAppManager_NoRegister()
	{
		return AMocapAppManager::StaticClass();
	}
	struct Z_Construct_UClass_AMocapAppManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MocapAppSettings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MocapAppSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MocapAppSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoStartMocapApp_MetaData[];
#endif
		static void NewProp_AutoStartMocapApp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoStartMocapApp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMocapAppManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMocapAppManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications, "DestroyAllApplications" }, // 4006815896
		{ &Z_Construct_UFunction_AMocapAppManager_DestroyApplication, "DestroyApplication" }, // 1532051772
		{ &Z_Construct_UFunction_AMocapAppManager_DumpApp, "DumpApp" }, // 2297526465
		{ &Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents, "GetAvatarBuildinBoneNameAndParents" }, // 2223453535
		{ &Z_Construct_UFunction_AMocapAppManager_GetInstance, "GetInstance" }, // 2728681308
		{ &Z_Construct_UFunction_AMocapAppManager_GetMocapApp, "GetMocapApp" }, // 1008652868
		{ &Z_Construct_UFunction_AMocapAppManager_StartApplication, "StartApplication" }, // 797069581
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMocapAppManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* AMocapAppManager is actor class for manager UMocapApps and it use FMocapAppManager, you should add it in you level when not using livelink\n*/" },
		{ "IncludePath", "MocapAppManager.h" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AMocapAppManager is actor class for manager UMocapApps and it use FMocapAppManager, you should add it in you level when not using livelink" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_Inner = { "MocapAppSettings", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMCAppSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_MetaData[] = {
		{ "Category", "MocapApi|Setting" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings = { "MocapAppSettings", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMocapAppManager, MocapAppSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "CaliActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMocapAppManager, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_MetaData[] = {
		{ "Category", "MocapApi|Setting" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	void Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_SetBit(void* Obj)
	{
		((AMocapAppManager*)Obj)->AutoStartMocapApp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp = { "AutoStartMocapApp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMocapAppManager), &Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMocapAppManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMocapAppManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMocapAppManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMocapAppManager_Statics::ClassParams = {
		&AMocapAppManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMocapAppManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMocapAppManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMocapAppManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMocapAppManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMocapAppManager, 3683556072);
	template<> NEURONLIVELINK_API UClass* StaticClass<AMocapAppManager>()
	{
		return AMocapAppManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMocapAppManager(Z_Construct_UClass_AMocapAppManager, &AMocapAppManager::StaticClass, TEXT("/Script/NeuronLiveLink"), TEXT("AMocapAppManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMocapAppManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
