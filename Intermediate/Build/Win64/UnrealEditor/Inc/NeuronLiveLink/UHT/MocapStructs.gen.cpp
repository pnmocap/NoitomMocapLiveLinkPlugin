// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/MocapStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMocapStructs() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
NEURONLIVELINK_API UClass* Z_Construct_UClass_UMocapApp();
NEURONLIVELINK_API UClass* Z_Construct_UClass_UMocapApp_NoRegister();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandType();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection();
NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis();
NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMCAppSettings();
NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMCRenderSetting();
NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapAvatar();
NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapRecordNotify();
NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapRigidBody();
NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapServerCommand();
NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapTracker();
UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References

// Begin Enum EMCBvhRotationOrder
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCBvhRotationOrder;
static UEnum* EMCBvhRotationOrder_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCBvhRotationOrder.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCBvhRotationOrder.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCBvhRotationOrder"));
	}
	return Z_Registration_Info_UEnum_EMCBvhRotationOrder.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCBvhRotationOrder>()
{
	return EMCBvhRotationOrder_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EMCBvhRotationOrder is the unreal type for MocapApi EMCPBvhRotation \n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "EMCBvhRotationOrder is the unreal type for MocapApi EMCPBvhRotation" },
		{ "XYZ.Name", "EMCBvhRotationOrder::XYZ" },
		{ "XZY.Name", "EMCBvhRotationOrder::XZY" },
		{ "YXZ.Name", "EMCBvhRotationOrder::YXZ" },
		{ "YZX.Name", "EMCBvhRotationOrder::YZX" },
		{ "ZXY.Name", "EMCBvhRotationOrder::ZXY" },
		{ "ZYX.Name", "EMCBvhRotationOrder::ZYX" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCBvhRotationOrder::XYZ", (int64)EMCBvhRotationOrder::XYZ },
		{ "EMCBvhRotationOrder::XZY", (int64)EMCBvhRotationOrder::XZY },
		{ "EMCBvhRotationOrder::YXZ", (int64)EMCBvhRotationOrder::YXZ },
		{ "EMCBvhRotationOrder::YZX", (int64)EMCBvhRotationOrder::YZX },
		{ "EMCBvhRotationOrder::ZXY", (int64)EMCBvhRotationOrder::ZXY },
		{ "EMCBvhRotationOrder::ZYX", (int64)EMCBvhRotationOrder::ZYX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCBvhRotationOrder",
	"EMCBvhRotationOrder",
	Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder()
{
	if (!Z_Registration_Info_UEnum_EMCBvhRotationOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCBvhRotationOrder.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCBvhRotationOrder.InnerSingleton;
}
// End Enum EMCBvhRotationOrder

// Begin Enum EMCBvhDataFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCBvhDataFormat;
static UEnum* EMCBvhDataFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCBvhDataFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCBvhDataFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCBvhDataFormat"));
	}
	return Z_Registration_Info_UEnum_EMCBvhDataFormat.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCBvhDataFormat>()
{
	return EMCBvhDataFormat_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Binary.Name", "EMCBvhDataFormat::Binary" },
		{ "BinaryWithOldFrameHeader.Name", "EMCBvhDataFormat::BinaryWithOldFrameHeader" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EMCBvhDataFormat is the unreal type for MocapApi EMCPBvhData\n */" },
		{ "Mask_LegacyHumanHierarchy.Name", "EMCBvhDataFormat::Mask_LegacyHumanHierarchy" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "String.Name", "EMCBvhDataFormat::String" },
		{ "ToolTip", "EMCBvhDataFormat is the unreal type for MocapApi EMCPBvhData" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCBvhDataFormat::String", (int64)EMCBvhDataFormat::String },
		{ "EMCBvhDataFormat::BinaryWithOldFrameHeader", (int64)EMCBvhDataFormat::BinaryWithOldFrameHeader },
		{ "EMCBvhDataFormat::Binary", (int64)EMCBvhDataFormat::Binary },
		{ "EMCBvhDataFormat::Mask_LegacyHumanHierarchy", (int64)EMCBvhDataFormat::Mask_LegacyHumanHierarchy },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCBvhDataFormat",
	"EMCBvhDataFormat",
	Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat()
{
	if (!Z_Registration_Info_UEnum_EMCBvhDataFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCBvhDataFormat.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCBvhDataFormat.InnerSingleton;
}
// End Enum EMCBvhDataFormat

// Begin Enum EMCAppProtocol
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCAppProtocol;
static UEnum* EMCAppProtocol_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCAppProtocol.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCAppProtocol.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCAppProtocol"));
	}
	return Z_Registration_Info_UEnum_EMCAppProtocol.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCAppProtocol>()
{
	return EMCAppProtocol_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EMCAppProtocol is the protpocol used for MocapApi\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "TCP.Name", "EMCAppProtocol::TCP" },
		{ "ToolTip", "EMCAppProtocol is the protpocol used for MocapApi" },
		{ "UDP.Name", "EMCAppProtocol::UDP" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCAppProtocol::UDP", (int64)EMCAppProtocol::UDP },
		{ "EMCAppProtocol::TCP", (int64)EMCAppProtocol::TCP },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCAppProtocol",
	"EMCAppProtocol",
	Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol()
{
	if (!Z_Registration_Info_UEnum_EMCAppProtocol.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCAppProtocol.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCAppProtocol.InnerSingleton;
}
// End Enum EMCAppProtocol

// Begin ScriptStruct FMCAppSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MCAppSettings;
class UScriptStruct* FMCAppSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MCAppSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MCAppSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMCAppSettings, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MCAppSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MCAppSettings.OuterSingleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMCAppSettings>()
{
	return FMCAppSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMCAppSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMCAppSettings is the unreal type for MocapApi IMCPSettings\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMCAppSettings is the unreal type for MocapApi IMCPSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Comment", "// MocapApp name, used for query\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "MocapApp name, used for query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteIP_MetaData[] = {
		{ "Comment", "// Remote server IP when use TCP protocol\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "Remote server IP when use TCP protocol" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[] = {
		{ "Comment", "// Port used in mocapapi, remote server port for TCP, local port for UDP\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "Port used in mocapapi, remote server port for TCP, local port for UDP" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecvPort_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BvhRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bvhDataFormat_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Protocol_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Protocol;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RemoteIP;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecvPort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BvhRotation_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BvhRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_bvhDataFormat_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_bvhDataFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMCAppSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCAppSettings, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCAppSettings, Protocol), Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Protocol_MetaData), NewProp_Protocol_MetaData) }; // 1797529479
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RemoteIP = { "RemoteIP", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCAppSettings, RemoteIP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteIP_MetaData), NewProp_RemoteIP_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCAppSettings, Port), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Port_MetaData), NewProp_Port_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RecvPort = { "RecvPort", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCAppSettings, RecvPort), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecvPort_MetaData), NewProp_RecvPort_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation = { "BvhRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCAppSettings, BvhRotation), Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BvhRotation_MetaData), NewProp_BvhRotation_MetaData) }; // 2284967030
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat = { "bvhDataFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCAppSettings, bvhDataFormat), Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bvhDataFormat_MetaData), NewProp_bvhDataFormat_MetaData) }; // 1536037955
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMCAppSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RemoteIP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Port,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RecvPort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	&NewStructOps,
	"MCAppSettings",
	Z_Construct_UScriptStruct_FMCAppSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::PropPointers),
	sizeof(FMCAppSettings),
	alignof(FMCAppSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMCAppSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMCAppSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MCAppSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MCAppSettings.InnerSingleton, Z_Construct_UScriptStruct_FMCAppSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MCAppSettings.InnerSingleton;
}
// End ScriptStruct FMCAppSettings

// Begin Enum EMCUpAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCUpAxis;
static UEnum* EMCUpAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCUpAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCUpAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCUpAxis"));
	}
	return Z_Registration_Info_UEnum_EMCUpAxis.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCUpAxis>()
{
	return EMCUpAxis_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EMCUpAxis is the unreal type for MocapApi EMCPUpVector\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "EMCUpAxis is the unreal type for MocapApi EMCPUpVector" },
		{ "Unknown.Name", "EMCUpAxis::Unknown" },
		{ "X.Name", "EMCUpAxis::X" },
		{ "Y.Name", "EMCUpAxis::Y" },
		{ "Z.Name", "EMCUpAxis::Z" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCUpAxis::Unknown", (int64)EMCUpAxis::Unknown },
		{ "EMCUpAxis::X", (int64)EMCUpAxis::X },
		{ "EMCUpAxis::Y", (int64)EMCUpAxis::Y },
		{ "EMCUpAxis::Z", (int64)EMCUpAxis::Z },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCUpAxis",
	"EMCUpAxis",
	Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis()
{
	if (!Z_Registration_Info_UEnum_EMCUpAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCUpAxis.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCUpAxis.InnerSingleton;
}
// End Enum EMCUpAxis

// Begin Enum EMCFrontAxis
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCFrontAxis;
static UEnum* EMCFrontAxis_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCFrontAxis.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCFrontAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCFrontAxis"));
	}
	return Z_Registration_Info_UEnum_EMCFrontAxis.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCFrontAxis>()
{
	return EMCFrontAxis_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EMCFrontAxis is the unreal type for MocapApi EMCPFrontVector\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ParityEven.Name", "EMCFrontAxis::ParityEven" },
		{ "ParityOdd.Name", "EMCFrontAxis::ParityOdd" },
		{ "ToolTip", "EMCFrontAxis is the unreal type for MocapApi EMCPFrontVector" },
		{ "Unknown.Name", "EMCFrontAxis::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCFrontAxis::Unknown", (int64)EMCFrontAxis::Unknown },
		{ "EMCFrontAxis::ParityEven", (int64)EMCFrontAxis::ParityEven },
		{ "EMCFrontAxis::ParityOdd", (int64)EMCFrontAxis::ParityOdd },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCFrontAxis",
	"EMCFrontAxis",
	Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis()
{
	if (!Z_Registration_Info_UEnum_EMCFrontAxis.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCFrontAxis.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCFrontAxis.InnerSingleton;
}
// End Enum EMCFrontAxis

// Begin Enum EMCCoordSystem
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCCoordSystem;
static UEnum* EMCCoordSystem_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCCoordSystem.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCCoordSystem.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCCoordSystem"));
	}
	return Z_Registration_Info_UEnum_EMCCoordSystem.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCoordSystem>()
{
	return EMCCoordSystem_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EMCCoordSystem is the unreal type for MocapApi EMCPCoordSystem\n */" },
		{ "LeftHanded.Name", "EMCCoordSystem::LeftHanded" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "RightHanded.Name", "EMCCoordSystem::RightHanded" },
		{ "ToolTip", "EMCCoordSystem is the unreal type for MocapApi EMCPCoordSystem" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCCoordSystem::RightHanded", (int64)EMCCoordSystem::RightHanded },
		{ "EMCCoordSystem::LeftHanded", (int64)EMCCoordSystem::LeftHanded },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCCoordSystem",
	"EMCCoordSystem",
	Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem()
{
	if (!Z_Registration_Info_UEnum_EMCCoordSystem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCCoordSystem.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCCoordSystem.InnerSingleton;
}
// End Enum EMCCoordSystem

// Begin Enum EMCRotatingDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCRotatingDirection;
static UEnum* EMCRotatingDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCRotatingDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCRotatingDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCRotatingDirection"));
	}
	return Z_Registration_Info_UEnum_EMCRotatingDirection.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCRotatingDirection>()
{
	return EMCRotatingDirection_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CCW.Name", "EMCRotatingDirection::CCW" },
		{ "Comment", "/**\n * EMCRotatingDirection is the unreal type for MocapApi EMCRotatingDirection\n */" },
		{ "CW.Name", "EMCRotatingDirection::CW" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "EMCRotatingDirection is the unreal type for MocapApi EMCRotatingDirection" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCRotatingDirection::CW", (int64)EMCRotatingDirection::CW },
		{ "EMCRotatingDirection::CCW", (int64)EMCRotatingDirection::CCW },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCRotatingDirection",
	"EMCRotatingDirection",
	Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection()
{
	if (!Z_Registration_Info_UEnum_EMCRotatingDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCRotatingDirection.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCRotatingDirection.InnerSingleton;
}
// End Enum EMCRotatingDirection

// Begin Enum EMCDistanceUnit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCDistanceUnit;
static UEnum* EMCDistanceUnit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCDistanceUnit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCDistanceUnit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCDistanceUnit"));
	}
	return Z_Registration_Info_UEnum_EMCDistanceUnit.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCDistanceUnit>()
{
	return EMCDistanceUnit_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Centimeter.Name", "EMCDistanceUnit::Centimeter" },
		{ "Comment", "/**\n * EMCDistanceUnit is the unreal type for MocapApi EMCPUnit\n */" },
		{ "Meter.Name", "EMCDistanceUnit::Meter" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "EMCDistanceUnit is the unreal type for MocapApi EMCPUnit" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCDistanceUnit::Centimeter", (int64)EMCDistanceUnit::Centimeter },
		{ "EMCDistanceUnit::Meter", (int64)EMCDistanceUnit::Meter },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCDistanceUnit",
	"EMCDistanceUnit",
	Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit()
{
	if (!Z_Registration_Info_UEnum_EMCDistanceUnit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCDistanceUnit.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCDistanceUnit.InnerSingleton;
}
// End Enum EMCDistanceUnit

// Begin ScriptStruct FMCRenderSetting
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MCRenderSetting;
class UScriptStruct* FMCRenderSetting::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MCRenderSetting.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MCRenderSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMCRenderSetting, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MCRenderSetting"));
	}
	return Z_Registration_Info_UScriptStruct_MCRenderSetting.OuterSingleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMCRenderSetting>()
{
	return FMCRenderSetting::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMCRenderSetting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMCRenderSetting is the unreal type for MocapApi IMCPRenderSettings\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMCRenderSetting is the unreal type for MocapApi IMCPRenderSettings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotatingDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Up_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Up;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Front_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Front;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Coord_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Coord;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotatingDir_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotatingDir;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Unit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Unit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMCRenderSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCRenderSetting, Up), Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Up_MetaData), NewProp_Up_MetaData) }; // 2424016368
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCRenderSetting, Front), Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Front_MetaData), NewProp_Front_MetaData) }; // 3731400264
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCRenderSetting, Coord), Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coord_MetaData), NewProp_Coord_MetaData) }; // 1792349037
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir = { "RotatingDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCRenderSetting, RotatingDir), Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotatingDir_MetaData), NewProp_RotatingDir_MetaData) }; // 1789030968
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMCRenderSetting, Unit), Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Unit_MetaData), NewProp_Unit_MetaData) }; // 3901638817
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMCRenderSetting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	&NewStructOps,
	"MCRenderSetting",
	Z_Construct_UScriptStruct_FMCRenderSetting_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::PropPointers),
	sizeof(FMCRenderSetting),
	alignof(FMCRenderSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMCRenderSetting_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMCRenderSetting()
{
	if (!Z_Registration_Info_UScriptStruct_MCRenderSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MCRenderSetting.InnerSingleton, Z_Construct_UScriptStruct_FMCRenderSetting_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MCRenderSetting.InnerSingleton;
}
// End ScriptStruct FMCRenderSetting

// Begin ScriptStruct FMocapRigidBody
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MocapRigidBody;
class UScriptStruct* FMocapRigidBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MocapRigidBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MocapRigidBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapRigidBody, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapRigidBody"));
	}
	return Z_Registration_Info_UScriptStruct_MocapRigidBody.OuterSingleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapRigidBody>()
{
	return FMocapRigidBody::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMocapRigidBody_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMocapRigidBody is the unreal type for MocapApi IMCPRigidBody\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMocapRigidBody is the unreal type for MocapApi IMCPRigidBody" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//int ID;\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "UPROPERTY()\nint ID;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JointTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JointTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapRigidBody>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRigidBody, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRigidBody, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRigidBody, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRigidBody, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_JointTag = { "JointTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRigidBody, JointTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JointTag_MetaData), NewProp_JointTag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapRigidBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_JointTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	&NewStructOps,
	"MocapRigidBody",
	Z_Construct_UScriptStruct_FMocapRigidBody_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::PropPointers),
	sizeof(FMocapRigidBody),
	alignof(FMocapRigidBody),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMocapRigidBody_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMocapRigidBody()
{
	if (!Z_Registration_Info_UScriptStruct_MocapRigidBody.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MocapRigidBody.InnerSingleton, Z_Construct_UScriptStruct_FMocapRigidBody_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MocapRigidBody.InnerSingleton;
}
// End ScriptStruct FMocapRigidBody

// Begin ScriptStruct FMocapTracker
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MocapTracker;
class UScriptStruct* FMocapTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MocapTracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MocapTracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapTracker, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapTracker"));
	}
	return Z_Registration_Info_UScriptStruct_MocapTracker.OuterSingleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapTracker>()
{
	return FMocapTracker::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMocapTracker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMocapTracker is the unreal type for MocapApi IMCPTracker\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMocapTracker is the unreal type for MocapApi IMCPTracker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//int ID;\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "UPROPERTY()\nint ID;" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapTracker>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapTracker, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapTracker, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapTracker, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapTracker, Status), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Status,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapTracker_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	&NewStructOps,
	"MocapTracker",
	Z_Construct_UScriptStruct_FMocapTracker_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapTracker_Statics::PropPointers),
	sizeof(FMocapTracker),
	alignof(FMocapTracker),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapTracker_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMocapTracker_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMocapTracker()
{
	if (!Z_Registration_Info_UScriptStruct_MocapTracker.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MocapTracker.InnerSingleton, Z_Construct_UScriptStruct_FMocapTracker_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MocapTracker.InnerSingleton;
}
// End ScriptStruct FMocapTracker

// Begin ScriptStruct FMocapAvatar
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MocapAvatar;
class UScriptStruct* FMocapAvatar::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MocapAvatar.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MocapAvatar.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapAvatar, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapAvatar"));
	}
	return Z_Registration_Info_UScriptStruct_MocapAvatar.OuterSingleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapAvatar>()
{
	return FMocapAvatar::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMocapAvatar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FMocapAvatar is the unreal type for MocapApi IMCPAvatar\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMocapAvatar is the unreal type for MocapApi IMCPAvatar" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootJointTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneParents_MetaData[] = {
		{ "Comment", "//[tag] = name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "[tag] = name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasLocalPositions_MetaData[] = {
		{ "Comment", "//[tag] = parentTag -1 if is root\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "[tag] = parentTag -1 if is root" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLocalPositions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPositions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostureIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RootJointTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneParents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneParents;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasLocalPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HasLocalPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLocalPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultLocalPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRotation_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalRotation;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_PostureIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapAvatar>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_RootJointTag = { "RootJointTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, RootJointTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootJointTag_MetaData), NewProp_RootJointTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNames_MetaData), NewProp_BoneNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, BoneParents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneParents_MetaData), NewProp_BoneParents_MetaData) };
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions_Inner = { "HasLocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions = { "HasLocalPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, HasLocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasLocalPositions_MetaData), NewProp_HasLocalPositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions_Inner = { "DefaultLocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions = { "DefaultLocalPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, DefaultLocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLocalPositions_MetaData), NewProp_DefaultLocalPositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions_Inner = { "LocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions = { "LocalPositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, LocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPositions_MetaData), NewProp_LocalPositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation_Inner = { "LocalRotation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation = { "LocalRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, LocalRotation), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalRotation_MetaData), NewProp_LocalRotation_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_PostureIndex = { "PostureIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapAvatar, PostureIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostureIndex_MetaData), NewProp_PostureIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapAvatar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_RootJointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_PostureIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	&NewStructOps,
	"MocapAvatar",
	Z_Construct_UScriptStruct_FMocapAvatar_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::PropPointers),
	sizeof(FMocapAvatar),
	alignof(FMocapAvatar),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMocapAvatar_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMocapAvatar()
{
	if (!Z_Registration_Info_UScriptStruct_MocapAvatar.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MocapAvatar.InnerSingleton, Z_Construct_UScriptStruct_FMocapAvatar_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MocapAvatar.InnerSingleton;
}
// End ScriptStruct FMocapAvatar

// Begin ScriptStruct FMocapRecordNotify
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MocapRecordNotify;
class UScriptStruct* FMocapRecordNotify::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MocapRecordNotify.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MocapRecordNotify.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapRecordNotify, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapRecordNotify"));
	}
	return Z_Registration_Info_UScriptStruct_MocapRecordNotify.OuterSingleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapRecordNotify>()
{
	return FMocapRecordNotify::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMocapRecordNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMocapRecordNotify is the unreal type for MocapApi IMCPRecordNotify\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMocapRecordNotify is the unreal type for MocapApi IMCPRecordNotify" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeSaveDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TakeFileSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TakeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TakePath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TakeSaveDir;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TakeFileSuffix;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapRecordNotify>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_NotifyType = { "NotifyType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRecordNotify, NotifyType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyType_MetaData), NewProp_NotifyType_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeName = { "TakeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRecordNotify, TakeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeName_MetaData), NewProp_TakeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakePath = { "TakePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRecordNotify, TakePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakePath_MetaData), NewProp_TakePath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeSaveDir = { "TakeSaveDir", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRecordNotify, TakeSaveDir), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeSaveDir_MetaData), NewProp_TakeSaveDir_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeFileSuffix = { "TakeFileSuffix", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapRecordNotify, TakeFileSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TakeFileSuffix_MetaData), NewProp_TakeFileSuffix_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_NotifyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeSaveDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeFileSuffix,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	&NewStructOps,
	"MocapRecordNotify",
	Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::PropPointers),
	sizeof(FMocapRecordNotify),
	alignof(FMocapRecordNotify),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMocapRecordNotify()
{
	if (!Z_Registration_Info_UScriptStruct_MocapRecordNotify.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MocapRecordNotify.InnerSingleton, Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MocapRecordNotify.InnerSingleton;
}
// End ScriptStruct FMocapRecordNotify

// Begin Enum EMCCommandType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCCommandType;
static UEnum* EMCCommandType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCCommandType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCCommandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCCommandType, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCCommandType"));
	}
	return Z_Registration_Info_UEnum_EMCCommandType.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCommandType>()
{
	return EMCCommandType_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCCommandType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CalibrateMotion.Name", "EMCCommandType::CalibrateMotion" },
		{ "Comment", "/**\n * EMCCommandType is the unreal type for MocapApi EMCPCommand\n */" },
		{ "GetManualCaliPoses.Comment", "// commands below are alias on user side, do not have such commands in mocapapi \n// CalibrateMotion for manual\n" },
		{ "GetManualCaliPoses.Name", "EMCCommandType::GetManualCaliPoses" },
		{ "GetManualCaliPoses.ToolTip", "commands below are alias on user side, do not have such commands in mocapapi\nCalibrateMotion for manual" },
		{ "ManualCalibrateFinish.Name", "EMCCommandType::ManualCalibrateFinish" },
		{ "ManualCalibrateStep.Name", "EMCCommandType::ManualCalibrateStep" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ResumeOriginalPosture.Name", "EMCCommandType::ResumeOriginalPosture" },
		{ "StartCapture.Name", "EMCCommandType::StartCapture" },
		{ "StartRecored.Name", "EMCCommandType::StartRecored" },
		{ "StopCapture.Name", "EMCCommandType::StopCapture" },
		{ "StopRecored.Name", "EMCCommandType::StopRecored" },
		{ "ToolTip", "EMCCommandType is the unreal type for MocapApi EMCPCommand" },
		{ "ZeroPosition.Name", "EMCCommandType::ZeroPosition" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCCommandType::StartCapture", (int64)EMCCommandType::StartCapture },
		{ "EMCCommandType::StopCapture", (int64)EMCCommandType::StopCapture },
		{ "EMCCommandType::ZeroPosition", (int64)EMCCommandType::ZeroPosition },
		{ "EMCCommandType::CalibrateMotion", (int64)EMCCommandType::CalibrateMotion },
		{ "EMCCommandType::StartRecored", (int64)EMCCommandType::StartRecored },
		{ "EMCCommandType::StopRecored", (int64)EMCCommandType::StopRecored },
		{ "EMCCommandType::ResumeOriginalPosture", (int64)EMCCommandType::ResumeOriginalPosture },
		{ "EMCCommandType::GetManualCaliPoses", (int64)EMCCommandType::GetManualCaliPoses },
		{ "EMCCommandType::ManualCalibrateStep", (int64)EMCCommandType::ManualCalibrateStep },
		{ "EMCCommandType::ManualCalibrateFinish", (int64)EMCCommandType::ManualCalibrateFinish },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCCommandType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCCommandType",
	"EMCCommandType",
	Z_Construct_UEnum_NeuronLiveLink_EMCCommandType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCCommandType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCCommandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCCommandType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandType()
{
	if (!Z_Registration_Info_UEnum_EMCCommandType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCCommandType.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCCommandType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCCommandType.InnerSingleton;
}
// End Enum EMCCommandType

// Begin Enum EMCCommandExtraFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCCommandExtraFlag;
static UEnum* EMCCommandExtraFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCCommandExtraFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCCommandExtraFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCCommandExtraFlag"));
	}
	return Z_Registration_Info_UEnum_EMCCommandExtraFlag.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCommandExtraFlag>()
{
	return EMCCommandExtraFlag_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * EMCCommandExtraFlag is the unreal type for MocapApi EMCPCommandStopCatpureExtraFlag etc.\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "StopCatpureExtraFlag_SensorsModulesHibernate.Name", "EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesHibernate" },
		{ "StopCatpureExtraFlag_SensorsModulesPowerOff.Name", "EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesPowerOff" },
		{ "ToolTip", "EMCCommandExtraFlag is the unreal type for MocapApi EMCPCommandStopCatpureExtraFlag etc." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesPowerOff", (int64)EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesPowerOff },
		{ "EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesHibernate", (int64)EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesHibernate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCCommandExtraFlag",
	"EMCCommandExtraFlag",
	Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag()
{
	if (!Z_Registration_Info_UEnum_EMCCommandExtraFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCCommandExtraFlag.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCCommandExtraFlag.InnerSingleton;
}
// End Enum EMCCommandExtraFlag

// Begin Enum EMCCommandParamName
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMCCommandParamName;
static UEnum* EMCCommandParamName_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMCCommandParamName.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMCCommandParamName.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCCommandParamName"));
	}
	return Z_Registration_Info_UEnum_EMCCommandParamName.OuterSingleton;
}
template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCommandParamName>()
{
	return EMCCommandParamName_StaticEnum();
}
struct Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ParamAvatarName.Name", "EMCCommandParamName::ParamAvatarName" },
		{ "ParamCalibrateMotionFlag.Name", "EMCCommandParamName::ParamCalibrateMotionFlag" },
		{ "ParamCalibrateMotionOperation.Name", "EMCCommandParamName::ParamCalibrateMotionOperation" },
		{ "ParamDeviceRadio.Name", "EMCCommandParamName::ParamDeviceRadio" },
		{ "ParamStopCatpureExtraFlag.Name", "EMCCommandParamName::ParamStopCatpureExtraFlag" },
		{ "ParamTakeName.Name", "EMCCommandParamName::ParamTakeName" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMCCommandParamName::ParamStopCatpureExtraFlag", (int64)EMCCommandParamName::ParamStopCatpureExtraFlag },
		{ "EMCCommandParamName::ParamDeviceRadio", (int64)EMCCommandParamName::ParamDeviceRadio },
		{ "EMCCommandParamName::ParamAvatarName", (int64)EMCCommandParamName::ParamAvatarName },
		{ "EMCCommandParamName::ParamTakeName", (int64)EMCCommandParamName::ParamTakeName },
		{ "EMCCommandParamName::ParamCalibrateMotionFlag", (int64)EMCCommandParamName::ParamCalibrateMotionFlag },
		{ "EMCCommandParamName::ParamCalibrateMotionOperation", (int64)EMCCommandParamName::ParamCalibrateMotionOperation },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	"EMCCommandParamName",
	"EMCCommandParamName",
	Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName()
{
	if (!Z_Registration_Info_UEnum_EMCCommandParamName.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMCCommandParamName.InnerSingleton, Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMCCommandParamName.InnerSingleton;
}
// End Enum EMCCommandParamName

// Begin ScriptStruct FMocapServerCommand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MocapServerCommand;
class UScriptStruct* FMocapServerCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MocapServerCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MocapServerCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapServerCommand, (UObject*)Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapServerCommand"));
	}
	return Z_Registration_Info_UScriptStruct_MocapServerCommand.OuterSingleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapServerCommand>()
{
	return FMocapServerCommand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMocapServerCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Cmd_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Cmd;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Params_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Params_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Params_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Params;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapServerCommand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapServerCommand, Cmd), Z_Construct_UEnum_NeuronLiveLink_EMCCommandType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cmd_MetaData), NewProp_Cmd_MetaData) }; // 1382518245
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName, METADATA_PARAMS(0, nullptr) }; // 3985128668
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapServerCommand, Params), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Params_MetaData), NewProp_Params_MetaData) }; // 3985128668
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMocapServerCommand, Result), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapServerCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	nullptr,
	&NewStructOps,
	"MocapServerCommand",
	Z_Construct_UScriptStruct_FMocapServerCommand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::PropPointers),
	sizeof(FMocapServerCommand),
	alignof(FMocapServerCommand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMocapServerCommand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMocapServerCommand()
{
	if (!Z_Registration_Info_UScriptStruct_MocapServerCommand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MocapServerCommand.InnerSingleton, Z_Construct_UScriptStruct_FMocapServerCommand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MocapServerCommand.InnerSingleton;
}
// End ScriptStruct FMocapServerCommand

// Begin Class UMocapApp Function Connect
struct Z_Construct_UFunction_UMocapApp_Connect_Statics
{
	struct MocapApp_eventConnect_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// connect to server side\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "connect to server side" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMocapApp_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MocapApp_eventConnect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MocapApp_eventConnect_Parms), &Z_Construct_UFunction_UMocapApp_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_Connect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_Connect_Statics::MocapApp_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_Connect_Statics::MocapApp_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execConnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Connect();
	P_NATIVE_END;
}
// End Class UMocapApp Function Connect

// Begin Class UMocapApp Function Disconnect
struct Z_Construct_UFunction_UMocapApp_Disconnect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// disconnect from server side\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "disconnect from server side" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "Disconnect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_Disconnect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMocapApp_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execDisconnect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect();
	P_NATIVE_END;
}
// End Class UMocapApp Function Disconnect

// Begin Class UMocapApp Function GetAllAvatarNames
struct Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics
{
	struct MocapApp_eventGetAllAvatarNames_Parms
	{
		TArray<FString> NameArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query all avatar names for this mocapapp\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query all avatar names for this mocapapp" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NameArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAllAvatarNames_Parms, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::NewProp_NameArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::NewProp_NameArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAllAvatarNames", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::MocapApp_eventGetAllAvatarNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::MocapApp_eventGetAllAvatarNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetAllAvatarNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetAllAvatarNames)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_NameArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllAvatarNames(Z_Param_Out_NameArray);
	P_NATIVE_END;
}
// End Class UMocapApp Function GetAllAvatarNames

// Begin Class UMocapApp Function GetAllRigidBodyNames
struct Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics
{
	struct MocapApp_eventGetAllRigidBodyNames_Parms
	{
		TArray<FString> NameArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query all rigidbody names for this mocapapp\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query all rigidbody names for this mocapapp" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NameArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAllRigidBodyNames_Parms, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::NewProp_NameArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::NewProp_NameArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAllRigidBodyNames", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::MocapApp_eventGetAllRigidBodyNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::MocapApp_eventGetAllRigidBodyNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetAllRigidBodyNames)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_NameArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllRigidBodyNames(Z_Param_Out_NameArray);
	P_NATIVE_END;
}
// End Class UMocapApp Function GetAllRigidBodyNames

// Begin Class UMocapApp Function GetAllTrackerNames
struct Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics
{
	struct MocapApp_eventGetAllTrackerNames_Parms
	{
		TArray<FString> NameArray;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query all tracker names for this mocapapp\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query all tracker names for this mocapapp" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameArray_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NameArray;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAllTrackerNames_Parms, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::NewProp_NameArray_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::NewProp_NameArray,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAllTrackerNames", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::MocapApp_eventGetAllTrackerNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::MocapApp_eventGetAllTrackerNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetAllTrackerNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetAllTrackerNames)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_NameArray);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllTrackerNames(Z_Param_Out_NameArray);
	P_NATIVE_END;
}
// End Class UMocapApp Function GetAllTrackerNames

// Begin Class UMocapApp Function GetAvatarData
struct Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics
{
	struct MocapApp_eventGetAvatarData_Parms
	{
		FString AvatarName;
		TArray<FVector> LocalPositions;
		TArray<FRotator> LocalRotations;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query avatar data(positions and location for each bone) by name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query avatar data(positions and location for each bone) by name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalRotations;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_AvatarName = { "AvatarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarData_Parms, AvatarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarName_MetaData), NewProp_AvatarName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalPositions_Inner = { "LocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalPositions = { "LocalPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarData_Parms, LocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalRotations_Inner = { "LocalRotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalRotations = { "LocalRotations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarData_Parms, LocalRotations), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MocapApp_eventGetAvatarData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MocapApp_eventGetAvatarData_Parms), &Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_AvatarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalRotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalRotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAvatarData", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::MocapApp_eventGetAvatarData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::MocapApp_eventGetAvatarData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetAvatarData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetAvatarData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AvatarName);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_LocalPositions);
	P_GET_TARRAY_REF(FRotator,Z_Param_Out_LocalRotations);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAvatarData(Z_Param_AvatarName,Z_Param_Out_LocalPositions,Z_Param_Out_LocalRotations);
	P_NATIVE_END;
}
// End Class UMocapApp Function GetAvatarData

// Begin Class UMocapApp Function GetAvatarStaticData
struct Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics
{
	struct MocapApp_eventGetAvatarStaticData_Parms
	{
		FString AvatarName;
		int32 RootJointTag;
		TArray<FName> BoneNames;
		TArray<int32> BoneParents;
		TArray<FVector> DefaultLocalPositions;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query avatar static data(root, bone names and herarchy) by name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query avatar static data(root, bone names and herarchy) by name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AvatarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AvatarName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RootJointTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneParents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneParents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultLocalPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultLocalPositions;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_AvatarName = { "AvatarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, AvatarName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AvatarName_MetaData), NewProp_AvatarName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_RootJointTag = { "RootJointTag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, RootJointTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, BoneParents), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_DefaultLocalPositions_Inner = { "DefaultLocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_DefaultLocalPositions = { "DefaultLocalPositions", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, DefaultLocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MocapApp_eventGetAvatarStaticData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MocapApp_eventGetAvatarStaticData_Parms), &Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_AvatarName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_RootJointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneParents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneParents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_DefaultLocalPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_DefaultLocalPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAvatarStaticData", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::MocapApp_eventGetAvatarStaticData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::MocapApp_eventGetAvatarStaticData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetAvatarStaticData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetAvatarStaticData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AvatarName);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RootJointTag);
	P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNames);
	P_GET_TARRAY_REF(int32,Z_Param_Out_BoneParents);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_DefaultLocalPositions);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetAvatarStaticData(Z_Param_AvatarName,Z_Param_Out_RootJointTag,Z_Param_Out_BoneNames,Z_Param_Out_BoneParents,Z_Param_Out_DefaultLocalPositions);
	P_NATIVE_END;
}
// End Class UMocapApp Function GetAvatarStaticData

// Begin Class UMocapApp Function GetConnectionString
struct Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics
{
	struct MocapApp_eventGetConnectionString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetConnectionString_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetConnectionString", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::MocapApp_eventGetConnectionString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::MocapApp_eventGetConnectionString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetConnectionString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetConnectionString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetConnectionString();
	P_NATIVE_END;
}
// End Class UMocapApp Function GetConnectionString

// Begin Class UMocapApp Function GetIsConnecting
struct Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics
{
	struct MocapApp_eventGetIsConnecting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// if MocapApp is connected\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "if MocapApp is connected" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MocapApp_eventGetIsConnecting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MocapApp_eventGetIsConnecting_Parms), &Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetIsConnecting", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::MocapApp_eventGetIsConnecting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::MocapApp_eventGetIsConnecting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetIsConnecting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetIsConnecting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsConnecting();
	P_NATIVE_END;
}
// End Class UMocapApp Function GetIsConnecting

// Begin Class UMocapApp Function GetIsReadyToUse
struct Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics
{
	struct MocapApp_eventGetIsReadyToUse_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MocapApp_eventGetIsReadyToUse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MocapApp_eventGetIsReadyToUse_Parms), &Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetIsReadyToUse", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::MocapApp_eventGetIsReadyToUse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::MocapApp_eventGetIsReadyToUse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetIsReadyToUse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetIsReadyToUse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsReadyToUse();
	P_NATIVE_END;
}
// End Class UMocapApp Function GetIsReadyToUse

// Begin Class UMocapApp Function GetLastErrorId
struct Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics
{
	struct MocapApp_eventGetLastErrorId_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetLastErrorId_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetLastErrorId", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::MocapApp_eventGetLastErrorId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::MocapApp_eventGetLastErrorId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetLastErrorId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetLastErrorId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLastErrorId();
	P_NATIVE_END;
}
// End Class UMocapApp Function GetLastErrorId

// Begin Class UMocapApp Function GetLastErrorMessage
struct Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics
{
	struct MocapApp_eventGetLastErrorMessage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetLastErrorMessage_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetLastErrorMessage", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::MocapApp_eventGetLastErrorMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::MocapApp_eventGetLastErrorMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetLastErrorMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetLastErrorMessage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetLastErrorMessage();
	P_NATIVE_END;
}
// End Class UMocapApp Function GetLastErrorMessage

// Begin Class UMocapApp Function GetLastErrorStr
struct Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics
{
	struct MocapApp_eventGetLastErrorStr_Parms
	{
		int32 ErrorId;
		FString Str;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// get last error message for error handling\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "get last error message for error handling" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ErrorId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Str;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::NewProp_ErrorId = { "ErrorId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetLastErrorStr_Parms, ErrorId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetLastErrorStr_Parms, Str), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::NewProp_ErrorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::NewProp_Str,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetLastErrorStr", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::MocapApp_eventGetLastErrorStr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::MocapApp_eventGetLastErrorStr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetLastErrorStr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetLastErrorStr)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ErrorId);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Str);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMocapApp::GetLastErrorStr(Z_Param_ErrorId,Z_Param_Out_Str);
	P_NATIVE_END;
}
// End Class UMocapApp Function GetLastErrorStr

// Begin Class UMocapApp Function GetRigidBody
struct Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics
{
	struct MocapApp_eventGetRigidBody_Parms
	{
		FString RigidName;
		FVector Position;
		FRotator Rotation;
		int32 Status;
		int32 JointTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query rigidbody data by name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query rigidbody data by name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RigidName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RigidName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
	static const UECodeGen_Private::FIntPropertyParams NewProp_JointTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_RigidName = { "RigidName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, RigidName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RigidName_MetaData), NewProp_RigidName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, Status), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_JointTag = { "JointTag", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, JointTag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MocapApp_eventGetRigidBody_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MocapApp_eventGetRigidBody_Parms), &Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_RigidName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_JointTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetRigidBody", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::MocapApp_eventGetRigidBody_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::MocapApp_eventGetRigidBody_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetRigidBody()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetRigidBody)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RigidName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Status);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_JointTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRigidBody(Z_Param_RigidName,Z_Param_Out_Position,Z_Param_Out_Rotation,Z_Param_Out_Status,Z_Param_Out_JointTag);
	P_NATIVE_END;
}
// End Class UMocapApp Function GetRigidBody

// Begin Class UMocapApp Function GetTracker
struct Z_Construct_UFunction_UMocapApp_GetTracker_Statics
{
	struct MocapApp_eventGetTracker_Parms
	{
		FString TrackerName;
		FVector Position;
		FRotator Rotation;
		int32 Status;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query tracker data by name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query tracker data by name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_TrackerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Status;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_TrackerName = { "TrackerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetTracker_Parms, TrackerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackerName_MetaData), NewProp_TrackerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetTracker_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetTracker_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventGetTracker_Parms, Status), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MocapApp_eventGetTracker_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MocapApp_eventGetTracker_Parms), &Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_TrackerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetTracker", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_GetTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::MocapApp_eventGetTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_GetTracker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::MocapApp_eventGetTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_GetTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_GetTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execGetTracker)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_TrackerName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Position);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Status);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetTracker(Z_Param_TrackerName,Z_Param_Out_Position,Z_Param_Out_Rotation,Z_Param_Out_Status);
	P_NATIVE_END;
}
// End Class UMocapApp Function GetTracker

// Begin Class UMocapApp Function HasMocapCommandInQueue
struct Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics
{
	struct MocapApp_eventHasMocapCommandInQueue_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MocapApp_eventHasMocapCommandInQueue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MocapApp_eventHasMocapCommandInQueue_Parms), &Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "HasMocapCommandInQueue", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::MocapApp_eventHasMocapCommandInQueue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::MocapApp_eventHasMocapCommandInQueue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execHasMocapCommandInQueue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasMocapCommandInQueue();
	P_NATIVE_END;
}
// End Class UMocapApp Function HasMocapCommandInQueue

// Begin Class UMocapApp Function QueueMocapCommand
struct Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics
{
	struct MocapApp_eventQueueMocapCommand_Parms
	{
		FMocapServerCommand Cmd;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cmd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MocapApp_eventQueueMocapCommand_Parms, Cmd), Z_Construct_UScriptStruct_FMocapServerCommand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cmd_MetaData), NewProp_Cmd_MetaData) }; // 2794723335
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::NewProp_Cmd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "QueueMocapCommand", nullptr, nullptr, Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::MocapApp_eventQueueMocapCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::MocapApp_eventQueueMocapCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMocapApp_QueueMocapCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMocapApp::execQueueMocapCommand)
{
	P_GET_STRUCT_REF(FMocapServerCommand,Z_Param_Out_Cmd);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QueueMocapCommand(Z_Param_Out_Cmd);
	P_NATIVE_END;
}
// End Class UMocapApp Function QueueMocapCommand

// Begin Class UMocapApp
void UMocapApp::StaticRegisterNativesUMocapApp()
{
	UClass* Class = UMocapApp::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Connect", &UMocapApp::execConnect },
		{ "Disconnect", &UMocapApp::execDisconnect },
		{ "GetAllAvatarNames", &UMocapApp::execGetAllAvatarNames },
		{ "GetAllRigidBodyNames", &UMocapApp::execGetAllRigidBodyNames },
		{ "GetAllTrackerNames", &UMocapApp::execGetAllTrackerNames },
		{ "GetAvatarData", &UMocapApp::execGetAvatarData },
		{ "GetAvatarStaticData", &UMocapApp::execGetAvatarStaticData },
		{ "GetConnectionString", &UMocapApp::execGetConnectionString },
		{ "GetIsConnecting", &UMocapApp::execGetIsConnecting },
		{ "GetIsReadyToUse", &UMocapApp::execGetIsReadyToUse },
		{ "GetLastErrorId", &UMocapApp::execGetLastErrorId },
		{ "GetLastErrorMessage", &UMocapApp::execGetLastErrorMessage },
		{ "GetLastErrorStr", &UMocapApp::execGetLastErrorStr },
		{ "GetRigidBody", &UMocapApp::execGetRigidBody },
		{ "GetTracker", &UMocapApp::execGetTracker },
		{ "HasMocapCommandInQueue", &UMocapApp::execHasMocapCommandInQueue },
		{ "QueueMocapCommand", &UMocapApp::execQueueMocapCommand },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMocapApp);
UClass* Z_Construct_UClass_UMocapApp_NoRegister()
{
	return UMocapApp::StaticClass();
}
struct Z_Construct_UClass_UMocapApp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMocapApp is the unreal type for MocapApi IMCPApplication\n */" },
		{ "IncludePath", "MocapStructs.h" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "UMocapApp is the unreal type for MocapApi IMCPApplication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppSettings_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderSettings_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppHandleInternal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RenderSettings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AppHandleInternal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMocapApp_Connect, "Connect" }, // 3099508661
		{ &Z_Construct_UFunction_UMocapApp_Disconnect, "Disconnect" }, // 1505181403
		{ &Z_Construct_UFunction_UMocapApp_GetAllAvatarNames, "GetAllAvatarNames" }, // 3486774979
		{ &Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames, "GetAllRigidBodyNames" }, // 3239237942
		{ &Z_Construct_UFunction_UMocapApp_GetAllTrackerNames, "GetAllTrackerNames" }, // 2526033526
		{ &Z_Construct_UFunction_UMocapApp_GetAvatarData, "GetAvatarData" }, // 1754510142
		{ &Z_Construct_UFunction_UMocapApp_GetAvatarStaticData, "GetAvatarStaticData" }, // 2540485944
		{ &Z_Construct_UFunction_UMocapApp_GetConnectionString, "GetConnectionString" }, // 2010906003
		{ &Z_Construct_UFunction_UMocapApp_GetIsConnecting, "GetIsConnecting" }, // 1152650668
		{ &Z_Construct_UFunction_UMocapApp_GetIsReadyToUse, "GetIsReadyToUse" }, // 1371766968
		{ &Z_Construct_UFunction_UMocapApp_GetLastErrorId, "GetLastErrorId" }, // 376544197
		{ &Z_Construct_UFunction_UMocapApp_GetLastErrorMessage, "GetLastErrorMessage" }, // 3568970817
		{ &Z_Construct_UFunction_UMocapApp_GetLastErrorStr, "GetLastErrorStr" }, // 3804778207
		{ &Z_Construct_UFunction_UMocapApp_GetRigidBody, "GetRigidBody" }, // 963260511
		{ &Z_Construct_UFunction_UMocapApp_GetTracker, "GetTracker" }, // 1766384019
		{ &Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue, "HasMocapCommandInQueue" }, // 2705926073
		{ &Z_Construct_UFunction_UMocapApp_QueueMocapCommand, "QueueMocapCommand" }, // 4010433436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMocapApp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMocapApp_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMocapApp, AppName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppName_MetaData), NewProp_AppName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMocapApp_Statics::NewProp_AppSettings = { "AppSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMocapApp, AppSettings), Z_Construct_UScriptStruct_FMCAppSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppSettings_MetaData), NewProp_AppSettings_MetaData) }; // 3891776725
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMocapApp_Statics::NewProp_RenderSettings = { "RenderSettings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMocapApp, RenderSettings), Z_Construct_UScriptStruct_FMCRenderSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderSettings_MetaData), NewProp_RenderSettings_MetaData) }; // 216460272
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMocapApp_Statics::NewProp_AppHandleInternal = { "AppHandleInternal", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMocapApp, AppHandleInternal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppHandleInternal_MetaData), NewProp_AppHandleInternal_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMocapApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMocapApp_Statics::NewProp_AppName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMocapApp_Statics::NewProp_AppSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMocapApp_Statics::NewProp_RenderSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMocapApp_Statics::NewProp_AppHandleInternal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMocapApp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMocapApp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMocapApp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMocapApp_Statics::ClassParams = {
	&UMocapApp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMocapApp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMocapApp_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMocapApp_Statics::Class_MetaDataParams), Z_Construct_UClass_UMocapApp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMocapApp()
{
	if (!Z_Registration_Info_UClass_UMocapApp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMocapApp.OuterSingleton, Z_Construct_UClass_UMocapApp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMocapApp.OuterSingleton;
}
template<> NEURONLIVELINK_API UClass* StaticClass<UMocapApp>()
{
	return UMocapApp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMocapApp);
UMocapApp::~UMocapApp() {}
// End Class UMocapApp

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMCBvhRotationOrder_StaticEnum, TEXT("EMCBvhRotationOrder"), &Z_Registration_Info_UEnum_EMCBvhRotationOrder, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2284967030U) },
		{ EMCBvhDataFormat_StaticEnum, TEXT("EMCBvhDataFormat"), &Z_Registration_Info_UEnum_EMCBvhDataFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1536037955U) },
		{ EMCAppProtocol_StaticEnum, TEXT("EMCAppProtocol"), &Z_Registration_Info_UEnum_EMCAppProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1797529479U) },
		{ EMCUpAxis_StaticEnum, TEXT("EMCUpAxis"), &Z_Registration_Info_UEnum_EMCUpAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2424016368U) },
		{ EMCFrontAxis_StaticEnum, TEXT("EMCFrontAxis"), &Z_Registration_Info_UEnum_EMCFrontAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3731400264U) },
		{ EMCCoordSystem_StaticEnum, TEXT("EMCCoordSystem"), &Z_Registration_Info_UEnum_EMCCoordSystem, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1792349037U) },
		{ EMCRotatingDirection_StaticEnum, TEXT("EMCRotatingDirection"), &Z_Registration_Info_UEnum_EMCRotatingDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1789030968U) },
		{ EMCDistanceUnit_StaticEnum, TEXT("EMCDistanceUnit"), &Z_Registration_Info_UEnum_EMCDistanceUnit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3901638817U) },
		{ EMCCommandType_StaticEnum, TEXT("EMCCommandType"), &Z_Registration_Info_UEnum_EMCCommandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1382518245U) },
		{ EMCCommandExtraFlag_StaticEnum, TEXT("EMCCommandExtraFlag"), &Z_Registration_Info_UEnum_EMCCommandExtraFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2714648450U) },
		{ EMCCommandParamName_StaticEnum, TEXT("EMCCommandParamName"), &Z_Registration_Info_UEnum_EMCCommandParamName, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3985128668U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMCAppSettings::StaticStruct, Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewStructOps, TEXT("MCAppSettings"), &Z_Registration_Info_UScriptStruct_MCAppSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMCAppSettings), 3891776725U) },
		{ FMCRenderSetting::StaticStruct, Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewStructOps, TEXT("MCRenderSetting"), &Z_Registration_Info_UScriptStruct_MCRenderSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMCRenderSetting), 216460272U) },
		{ FMocapRigidBody::StaticStruct, Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewStructOps, TEXT("MocapRigidBody"), &Z_Registration_Info_UScriptStruct_MocapRigidBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMocapRigidBody), 1068460649U) },
		{ FMocapTracker::StaticStruct, Z_Construct_UScriptStruct_FMocapTracker_Statics::NewStructOps, TEXT("MocapTracker"), &Z_Registration_Info_UScriptStruct_MocapTracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMocapTracker), 4154828829U) },
		{ FMocapAvatar::StaticStruct, Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewStructOps, TEXT("MocapAvatar"), &Z_Registration_Info_UScriptStruct_MocapAvatar, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMocapAvatar), 3785252249U) },
		{ FMocapRecordNotify::StaticStruct, Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewStructOps, TEXT("MocapRecordNotify"), &Z_Registration_Info_UScriptStruct_MocapRecordNotify, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMocapRecordNotify), 2350486849U) },
		{ FMocapServerCommand::StaticStruct, Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewStructOps, TEXT("MocapServerCommand"), &Z_Registration_Info_UScriptStruct_MocapServerCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMocapServerCommand), 2794723335U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMocapApp, UMocapApp::StaticClass, TEXT("UMocapApp"), &Z_Registration_Info_UClass_UMocapApp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMocapApp), 1777718350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_924728618(TEXT("/Script/NeuronLiveLink"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_MocapStructs_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
