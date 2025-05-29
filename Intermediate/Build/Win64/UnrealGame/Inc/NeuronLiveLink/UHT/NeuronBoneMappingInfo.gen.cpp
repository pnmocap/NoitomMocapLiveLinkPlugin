// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronBoneMappingInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronBoneMappingInfo() {}

// Begin Cross Module References
NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FNeuronBoneMappingInfo();
UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References

// Begin ScriptStruct FNeuronBoneMappingInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NeuronBoneMappingInfo;
class UScriptStruct* FNeuronBoneMappingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NeuronBoneMappingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NeuronBoneMappingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("NeuronBoneMappingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_NeuronBoneMappingInfo.OuterSingleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FNeuronBoneMappingInfo>()
{
	return FNeuronBoneMappingInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// bone mapping struct mapping mocapapi bone name to your sleleton bone name\n" },
		{ "ModuleRelativePath", "Public/NeuronBoneMappingInfo.h" },
		{ "ToolTip", "bone mapping struct mapping mocapapi bone name to your sleleton bone name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/NeuronBoneMappingInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MappingName_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/NeuronBoneMappingInfo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MappingName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeuronBoneMappingInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuronBoneMappingInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_MappingName = { "MappingName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNeuronBoneMappingInfo, MappingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MappingName_MetaData), NewProp_MappingName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewProp_MappingName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	&NewStructOps,
	"NeuronBoneMappingInfo",
	Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::PropPointers),
	sizeof(FNeuronBoneMappingInfo),
	alignof(FNeuronBoneMappingInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNeuronBoneMappingInfo()
{
	if (!Z_Registration_Info_UScriptStruct_NeuronBoneMappingInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NeuronBoneMappingInfo.InnerSingleton, Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NeuronBoneMappingInfo.InnerSingleton;
}
// End ScriptStruct FNeuronBoneMappingInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronBoneMappingInfo_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNeuronBoneMappingInfo::StaticStruct, Z_Construct_UScriptStruct_FNeuronBoneMappingInfo_Statics::NewStructOps, TEXT("NeuronBoneMappingInfo"), &Z_Registration_Info_UScriptStruct_NeuronBoneMappingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNeuronBoneMappingInfo), 2574307263U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronBoneMappingInfo_h_1752239656(TEXT("/Script/NeuronLiveLink"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronBoneMappingInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronBoneMappingInfo_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
