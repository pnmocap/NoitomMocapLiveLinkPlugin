// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/MocapAppManager.h"
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
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "DestroyAllApplications", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventDestroyApplication_Parms, AppName), METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "DestroyApplication", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::MocapAppManager_eventDestroyApplication_Parms), Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_DestroyApplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventDumpApp_Parms, AppName), METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "DumpApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::MocapAppManager_eventDumpApp_Parms), Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_DumpApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::FuncParams);
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
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Parents_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "GetAvatarBuildinBoneNameAndParents", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms), Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics
	{
		struct MocapAppManager_eventGetInstance_Parms
		{
			AMocapAppManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_AMocapAppManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "GetInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::MocapAppManager_eventGetInstance_Parms), Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_GetInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetMocapApp_Parms, AppName), METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventGetMocapApp_Parms, ReturnValue), Z_Construct_UClass_UMocapApp_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "GetMocapApp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::MocapAppManager_eventGetMocapApp_Parms), Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_GetMocapApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::FuncParams);
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AppSettings;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings = { "AppSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapAppManager_eventStartApplication_Parms, AppSettings), Z_Construct_UScriptStruct_FMCAppSettings, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings_MetaData)) }; // 1748275099
	void Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapAppManager_eventStartApplication_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapAppManager_eventStartApplication_Parms), &Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "StartApplication", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::MocapAppManager_eventStartApplication_Parms), Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMocapAppManager_StartApplication()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMocapAppManager);
	UClass* Z_Construct_UClass_AMocapAppManager_NoRegister()
	{
		return AMocapAppManager::StaticClass();
	}
	struct Z_Construct_UClass_AMocapAppManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MocapAppSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MocapAppSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MocapAppSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoStartMocapApp_MetaData[];
#endif
		static void NewProp_AutoStartMocapApp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoStartMocapApp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMocapAppManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMocapAppManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications, "DestroyAllApplications" }, // 2304734650
		{ &Z_Construct_UFunction_AMocapAppManager_DestroyApplication, "DestroyApplication" }, // 4073856745
		{ &Z_Construct_UFunction_AMocapAppManager_DumpApp, "DumpApp" }, // 2844540978
		{ &Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents, "GetAvatarBuildinBoneNameAndParents" }, // 1900974093
		{ &Z_Construct_UFunction_AMocapAppManager_GetInstance, "GetInstance" }, // 3948409956
		{ &Z_Construct_UFunction_AMocapAppManager_GetMocapApp, "GetMocapApp" }, // 581335138
		{ &Z_Construct_UFunction_AMocapAppManager_StartApplication, "StartApplication" }, // 2389568639
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMocapAppManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* AMocapAppManager is actor class for manager UMocapApps and it use FMocapAppManager, you should add it in you level when not using livelink\n*/" },
		{ "IncludePath", "MocapAppManager.h" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AMocapAppManager is actor class for manager UMocapApps and it use FMocapAppManager, you should add it in you level when not using livelink" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_Inner = { "MocapAppSettings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMCAppSettings, METADATA_PARAMS(nullptr, 0) }; // 1748275099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_MetaData[] = {
		{ "Category", "MocapApi|Setting" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings = { "MocapAppSettings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMocapAppManager, MocapAppSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_MetaData)) }; // 1748275099
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "CaliActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMocapAppManager, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_MetaData[] = {
		{ "Category", "MocapApi|Setting" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif
	void Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_SetBit(void* Obj)
	{
		((AMocapAppManager*)Obj)->AutoStartMocapApp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp = { "AutoStartMocapApp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMocapAppManager), &Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMocapAppManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMocapAppManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMocapAppManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMocapAppManager_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_AMocapAppManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMocapAppManager.OuterSingleton, Z_Construct_UClass_AMocapAppManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMocapAppManager.OuterSingleton;
	}
	template<> NEURONLIVELINK_API UClass* StaticClass<AMocapAppManager>()
	{
		return AMocapAppManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMocapAppManager);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMocapAppManager, AMocapAppManager::StaticClass, TEXT("AMocapAppManager"), &Z_Registration_Info_UClass_AMocapAppManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMocapAppManager), 2887330709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_2630957771(TEXT("/Script/NeuronLiveLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
