// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronBoneMappingInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronBoneMappingInfo() {}
// Cross Module References
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FNeuronBoneMappingInfo();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References
class UScriptStruct* FNeuronBoneMappingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NEURONLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("NeuronBoneMappingInfo"), sizeof(FNeuronBoneMappingInfo), Get_Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Hash());
	}
	return Singleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FNeuronBoneMappingInfo>()
{
	return FNeuronBoneMappingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNeuronBoneMappingInfo(FNeuronBoneMappingInfo::StaticStruct, TEXT("/Script/NeuronLiveLink"), TEXT("NeuronBoneMappingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_NeuronLiveLink_StaticRegisterNativesFNeuronBoneMappingInfo
{
	FScriptStruct_NeuronLiveLink_StaticRegisterNativesFNeuronBoneMappingInfo()
	{
		UScriptStruct::DeferCppStructOps<FNeuronBoneMappingInfo>(FName(TEXT("NeuronBoneMappingInfo")));
	}
} ScriptStruct_NeuronLiveLink_StaticRegisterNativesFNeuronBoneMappingInfo;
	struct Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MappingName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// bone mapping struct mapping mocapapi bone name to your sleleton bone name\n" },
		{ "ModuleRelativePath", "Public/NeuronBoneMappingInfo.h" },
		{ "ToolTip", "bone mapping struct mapping mocapapi bone name to your sleleton bone name" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuronBoneMappingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/NeuronBoneMappingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNeuronBoneMappingInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_MappingName_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/NeuronBoneMappingInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNeuronBoneMappingInfo, MappingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_MappingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_MappingName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_MappingName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
		nullptr,
		&NewStructOps,
		"NeuronBoneMappingInfo",
		sizeof(FNeuronBoneMappingInfo),
		alignof(FNeuronBoneMappingInfo),
		Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeuronBoneMappingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NeuronBoneMappingInfo"), sizeof(FNeuronBoneMappingInfo), Get_Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Hash() { return 1010067848U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
