// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/MocapAppManager.h"
#include "NeuronLiveLink/Public/MocapStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMocapAppManager() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NEURONLIVELINK_API UClass* Z_Construct_UClass_AMocapAppManager();
NEURONLIVELINK_API UClass* Z_Construct_UClass_AMocapAppManager_NoRegister();
NEURONLIVELINK_API UClass* Z_Construct_UClass_UMocapApp_NoRegister();
NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMCAppSettings();
UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References

// Begin Class AMocapAppManager Function DestroyAllApplications
struct Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "DestroyAllApplications", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMocapAppManager::execDestroyAllApplications)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyAllApplications();
	P_NATIVE_END;
}
// End Class AMocapAppManager Function DestroyAllApplications

// Begin Class AMocapAppManager Function DestroyApplication
struct Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics
{
	struct MocapAppManager_eventDestroyApplication_Parms
	{
		FString AppName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapAppManager_eventDestroyApplication_Parms, AppName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppName_MetaData), NewProp_AppName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::NewProp_AppName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "DestroyApplication", nullptr, nullptr, Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::MocapAppManager_eventDestroyApplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::MocapAppManager_eventDestroyApplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMocapAppManager_DestroyApplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_DestroyApplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMocapAppManager::execDestroyApplication)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AppName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DestroyApplication(Z_Param_AppName);
	P_NATIVE_END;
}
// End Class AMocapAppManager Function DestroyApplication

// Begin Class AMocapAppManager Function DumpApp
struct Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics
{
	struct MocapAppManager_eventDumpApp_Parms
	{
		FString AppName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapAppManager_eventDumpApp_Parms, AppName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppName_MetaData), NewProp_AppName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::NewProp_AppName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "DumpApp", nullptr, nullptr, Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::MocapAppManager_eventDumpApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::MocapAppManager_eventDumpApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMocapAppManager_DumpApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_DumpApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMocapAppManager::execDumpApp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AppName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DumpApp(Z_Param_AppName);
	P_NATIVE_END;
}
// End Class AMocapAppManager Function DumpApp

// Begin Class AMocapAppManager Function GetAvatarBuildinBoneNameAndParents
struct Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics
{
	struct MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms
	{
		TArray<FName> BoneNames;
		TArray<int32> Parents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Parents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Parents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents_Inner = { "Parents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents = { "Parents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms, Parents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::NewProp_Parents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "GetAvatarBuildinBoneNameAndParents", nullptr, nullptr, Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::MocapAppManager_eventGetAvatarBuildinBoneNameAndParents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMocapAppManager::execGetAvatarBuildinBoneNameAndParents)
{
	P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
	P_GET_TARRAY_REF(int32,Z_Param_Out_Parents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAvatarBuildinBoneNameAndParents(Z_Param_Out_BoneNames,Z_Param_Out_Parents);
	P_NATIVE_END;
}
// End Class AMocapAppManager Function GetAvatarBuildinBoneNameAndParents

// Begin Class AMocapAppManager Function GetInstance
struct Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics
{
	struct MocapAppManager_eventGetInstance_Parms
	{
		AMocapAppManager* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapAppManager_eventGetInstance_Parms, ReturnValue), Z_Construct_UClass_AMocapAppManager_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "GetInstance", nullptr, nullptr, Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::MocapAppManager_eventGetInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::MocapAppManager_eventGetInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMocapAppManager_GetInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_GetInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMocapAppManager::execGetInstance)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AMocapAppManager**)Z_Param__Result=AMocapAppManager::GetInstance();
	P_NATIVE_END;
}
// End Class AMocapAppManager Function GetInstance

// Begin Class AMocapAppManager Function GetMocapApp
struct Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics
{
	struct MocapAppManager_eventGetMocapApp_Parms
	{
		FString AppName;
		UMocapApp* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapAppManager_eventGetMocapApp_Parms, AppName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppName_MetaData), NewProp_AppName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapAppManager_eventGetMocapApp_Parms, ReturnValue), Z_Construct_UClass_UMocapApp_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_AppName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "GetMocapApp", nullptr, nullptr, Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::MocapAppManager_eventGetMocapApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::MocapAppManager_eventGetMocapApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMocapAppManager_GetMocapApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_GetMocapApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMocapAppManager::execGetMocapApp)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AppName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMocapApp**)Z_Param__Result=P_THIS->GetMocapApp(Z_Param_AppName);
	P_NATIVE_END;
}
// End Class AMocapAppManager Function GetMocapApp

// Begin Class AMocapAppManager Function StartApplication
struct Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics
{
	struct MocapAppManager_eventStartApplication_Parms
	{
		FMCAppSettings AppSettings;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppSettings;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings = { "AppSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapAppManager_eventStartApplication_Parms, AppSettings), Z_Construct_UScriptStruct_FMCAppSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppSettings_MetaData), NewProp_AppSettings_MetaData) }; // 3891776725
void Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MocapAppManager_eventStartApplication_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MocapAppManager_eventStartApplication_Parms), &Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_AppSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMocapAppManager, nullptr, "StartApplication", nullptr, nullptr, Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::MocapAppManager_eventStartApplication_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::MocapAppManager_eventStartApplication_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMocapAppManager_StartApplication()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMocapAppManager_StartApplication_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMocapAppManager::execStartApplication)
{
	P_GET_STRUCT_REF(FMCAppSettings,Z_Param_Out_AppSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartApplication(Z_Param_Out_AppSettings);
	P_NATIVE_END;
}
// End Class AMocapAppManager Function StartApplication

// Begin Class AMocapAppManager
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
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMocapAppManager);
UClass* Z_Construct_UClass_AMocapAppManager_NoRegister()
{
	return AMocapAppManager::StaticClass();
}
struct Z_Construct_UClass_AMocapAppManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n* AMocapAppManager is actor class for manager UMocapApps and it use FMocapAppManager, you should add it in you level when not using livelink\n*/" },
		{ "IncludePath", "MocapAppManager.h" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AMocapAppManager is actor class for manager UMocapApps and it use FMocapAppManager, you should add it in you level when not using livelink" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MocapAppSettings_MetaData[] = {
		{ "Category", "MocapApi|Setting" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSceneRoot_MetaData[] = {
		{ "Category", "CaliActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoStartMocapApp_MetaData[] = {
		{ "Category", "MocapApi|Setting" },
		{ "ModuleRelativePath", "Public/MocapAppManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MocapAppSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MocapAppSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultSceneRoot;
	static void NewProp_AutoStartMocapApp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoStartMocapApp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMocapAppManager_DestroyAllApplications, "DestroyAllApplications" }, // 3492267914
		{ &Z_Construct_UFunction_AMocapAppManager_DestroyApplication, "DestroyApplication" }, // 1419281921
		{ &Z_Construct_UFunction_AMocapAppManager_DumpApp, "DumpApp" }, // 625218093
		{ &Z_Construct_UFunction_AMocapAppManager_GetAvatarBuildinBoneNameAndParents, "GetAvatarBuildinBoneNameAndParents" }, // 2340424182
		{ &Z_Construct_UFunction_AMocapAppManager_GetInstance, "GetInstance" }, // 2498891715
		{ &Z_Construct_UFunction_AMocapAppManager_GetMocapApp, "GetMocapApp" }, // 3515185283
		{ &Z_Construct_UFunction_AMocapAppManager_StartApplication, "StartApplication" }, // 2269572067
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMocapAppManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_Inner = { "MocapAppSettings", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMCAppSettings, METADATA_PARAMS(0, nullptr) }; // 3891776725
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings = { "MocapAppSettings", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMocapAppManager, MocapAppSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MocapAppSettings_MetaData), NewProp_MocapAppSettings_MetaData) }; // 3891776725
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMocapAppManager, DefaultSceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSceneRoot_MetaData), NewProp_DefaultSceneRoot_MetaData) };
void Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_SetBit(void* Obj)
{
	((AMocapAppManager*)Obj)->AutoStartMocapApp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp = { "AutoStartMocapApp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMocapAppManager), &Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoStartMocapApp_MetaData), NewProp_AutoStartMocapApp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMocapAppManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_MocapAppSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_DefaultSceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMocapAppManager_Statics::NewProp_AutoStartMocapApp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMocapAppManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::DependentSingletons) < 16);
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMocapAppManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMocapAppManager_Statics::Class_MetaDataParams)
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
// End Class AMocapAppManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMocapAppManager, AMocapAppManager::StaticClass, TEXT("AMocapAppManager"), &Z_Registration_Info_UClass_AMocapAppManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMocapAppManager), 1248404622U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_2255886608(TEXT("/Script/NeuronLiveLink"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapAppManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
