// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/MocapStructs.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMocapStructs() {}
// Cross Module References
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandType();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapServerCommand();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapRecordNotify();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapAvatar();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapTracker();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapRigidBody();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMCRenderSetting();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMCAppSettings();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UMocapApp_NoRegister();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UMocapApp();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static UEnum* EMCCommandParamName_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCCommandParamName"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCommandParamName>()
	{
		return EMCCommandParamName_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCCommandParamName(EMCCommandParamName_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCCommandParamName"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName_Hash() { return 583237742U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCCommandParamName"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCCommandParamName::ParamStopCatpureExtraFlag", (int64)EMCCommandParamName::ParamStopCatpureExtraFlag },
				{ "EMCCommandParamName::ParamDeviceRadio", (int64)EMCCommandParamName::ParamDeviceRadio },
				{ "EMCCommandParamName::ParamAvatarName", (int64)EMCCommandParamName::ParamAvatarName },
				{ "EMCCommandParamName::ParamTakeName", (int64)EMCCommandParamName::ParamTakeName },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "ParamAvatarName.Name", "EMCCommandParamName::ParamAvatarName" },
				{ "ParamDeviceRadio.Name", "EMCCommandParamName::ParamDeviceRadio" },
				{ "ParamStopCatpureExtraFlag.Name", "EMCCommandParamName::ParamStopCatpureExtraFlag" },
				{ "ParamTakeName.Name", "EMCCommandParamName::ParamTakeName" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCCommandParamName",
				"EMCCommandParamName",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCCommandExtraFlag_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCCommandExtraFlag"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCommandExtraFlag>()
	{
		return EMCCommandExtraFlag_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCCommandExtraFlag(EMCCommandExtraFlag_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCCommandExtraFlag"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag_Hash() { return 3786727114U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCCommandExtraFlag"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesPowerOff", (int64)EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesPowerOff },
				{ "EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesHibernate", (int64)EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesHibernate },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * EMCCommandExtraFlag is the unreal type for MocapApi EMCPCommandStopCatpureExtraFlag etc.\n */" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "StopCatpureExtraFlag_SensorsModulesHibernate.Name", "EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesHibernate" },
				{ "StopCatpureExtraFlag_SensorsModulesPowerOff.Name", "EMCCommandExtraFlag::StopCatpureExtraFlag_SensorsModulesPowerOff" },
				{ "ToolTip", "EMCCommandExtraFlag is the unreal type for MocapApi EMCPCommandStopCatpureExtraFlag etc." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCCommandExtraFlag",
				"EMCCommandExtraFlag",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCCommandType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCCommandType, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCCommandType"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCommandType>()
	{
		return EMCCommandType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCCommandType(EMCCommandType_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCCommandType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCCommandType_Hash() { return 1265844252U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCCommandType"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCCommandType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCCommandType::StartCapture", (int64)EMCCommandType::StartCapture },
				{ "EMCCommandType::StopCapture", (int64)EMCCommandType::StopCapture },
				{ "EMCCommandType::ZeroPosition", (int64)EMCCommandType::ZeroPosition },
				{ "EMCCommandType::CalibrateMotion", (int64)EMCCommandType::CalibrateMotion },
				{ "EMCCommandType::StartRecored", (int64)EMCCommandType::StartRecored },
				{ "EMCCommandType::StopRecored", (int64)EMCCommandType::StopRecored },
				{ "EMCCommandType::ResumeOriginalPosture", (int64)EMCCommandType::ResumeOriginalPosture },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CalibrateMotion.Name", "EMCCommandType::CalibrateMotion" },
				{ "Comment", "/**\n * EMCCommandType is the unreal type for MocapApi EMCPCommand\n */" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "ResumeOriginalPosture.Name", "EMCCommandType::ResumeOriginalPosture" },
				{ "StartCapture.Name", "EMCCommandType::StartCapture" },
				{ "StartRecored.Name", "EMCCommandType::StartRecored" },
				{ "StopCapture.Name", "EMCCommandType::StopCapture" },
				{ "StopRecored.Name", "EMCCommandType::StopRecored" },
				{ "ToolTip", "EMCCommandType is the unreal type for MocapApi EMCPCommand" },
				{ "ZeroPosition.Name", "EMCCommandType::ZeroPosition" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCCommandType",
				"EMCCommandType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCDistanceUnit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCDistanceUnit"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCDistanceUnit>()
	{
		return EMCDistanceUnit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCDistanceUnit(EMCDistanceUnit_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCDistanceUnit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit_Hash() { return 137504402U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCDistanceUnit"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCDistanceUnit::Centimeter", (int64)EMCDistanceUnit::Centimeter },
				{ "EMCDistanceUnit::Meter", (int64)EMCDistanceUnit::Meter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Centimeter.Name", "EMCDistanceUnit::Centimeter" },
				{ "Comment", "/**\n * EMCDistanceUnit is the unreal type for MocapApi EMCPUnit\n */" },
				{ "Meter.Name", "EMCDistanceUnit::Meter" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "ToolTip", "EMCDistanceUnit is the unreal type for MocapApi EMCPUnit" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCDistanceUnit",
				"EMCDistanceUnit",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCRotatingDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCRotatingDirection"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCRotatingDirection>()
	{
		return EMCRotatingDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCRotatingDirection(EMCRotatingDirection_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCRotatingDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection_Hash() { return 3260109080U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCRotatingDirection"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCRotatingDirection::CW", (int64)EMCRotatingDirection::CW },
				{ "EMCRotatingDirection::CCW", (int64)EMCRotatingDirection::CCW },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CCW.Name", "EMCRotatingDirection::CCW" },
				{ "Comment", "/**\n * EMCRotatingDirection is the unreal type for MocapApi EMCRotatingDirection\n */" },
				{ "CW.Name", "EMCRotatingDirection::CW" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "ToolTip", "EMCRotatingDirection is the unreal type for MocapApi EMCRotatingDirection" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCRotatingDirection",
				"EMCRotatingDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCCoordSystem_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCCoordSystem"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCCoordSystem>()
	{
		return EMCCoordSystem_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCCoordSystem(EMCCoordSystem_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCCoordSystem"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem_Hash() { return 897705144U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCCoordSystem"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCCoordSystem::RightHanded", (int64)EMCCoordSystem::RightHanded },
				{ "EMCCoordSystem::LeftHanded", (int64)EMCCoordSystem::LeftHanded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * EMCCoordSystem is the unreal type for MocapApi EMCPCoordSystem\n */" },
				{ "LeftHanded.Name", "EMCCoordSystem::LeftHanded" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "RightHanded.Name", "EMCCoordSystem::RightHanded" },
				{ "ToolTip", "EMCCoordSystem is the unreal type for MocapApi EMCPCoordSystem" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCCoordSystem",
				"EMCCoordSystem",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCFrontAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCFrontAxis"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCFrontAxis>()
	{
		return EMCFrontAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCFrontAxis(EMCFrontAxis_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCFrontAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis_Hash() { return 3659743534U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCFrontAxis"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCFrontAxis::Unknown", (int64)EMCFrontAxis::Unknown },
				{ "EMCFrontAxis::ParityEven", (int64)EMCFrontAxis::ParityEven },
				{ "EMCFrontAxis::ParityOdd", (int64)EMCFrontAxis::ParityOdd },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * EMCFrontAxis is the unreal type for MocapApi EMCPFrontVector\n */" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "ParityEven.Name", "EMCFrontAxis::ParityEven" },
				{ "ParityOdd.Name", "EMCFrontAxis::ParityOdd" },
				{ "ToolTip", "EMCFrontAxis is the unreal type for MocapApi EMCPFrontVector" },
				{ "Unknown.Name", "EMCFrontAxis::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCFrontAxis",
				"EMCFrontAxis",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCUpAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCUpAxis"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCUpAxis>()
	{
		return EMCUpAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCUpAxis(EMCUpAxis_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCUpAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis_Hash() { return 3399162367U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCUpAxis"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCUpAxis::Unknown", (int64)EMCUpAxis::Unknown },
				{ "EMCUpAxis::X", (int64)EMCUpAxis::X },
				{ "EMCUpAxis::Y", (int64)EMCUpAxis::Y },
				{ "EMCUpAxis::Z", (int64)EMCUpAxis::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * EMCUpAxis is the unreal type for MocapApi EMCPUpVector\n */" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "ToolTip", "EMCUpAxis is the unreal type for MocapApi EMCPUpVector" },
				{ "Unknown.Name", "EMCUpAxis::Unknown" },
				{ "X.Name", "EMCUpAxis::X" },
				{ "Y.Name", "EMCUpAxis::Y" },
				{ "Z.Name", "EMCUpAxis::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCUpAxis",
				"EMCUpAxis",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCAppProtocol_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCAppProtocol"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCAppProtocol>()
	{
		return EMCAppProtocol_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCAppProtocol(EMCAppProtocol_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCAppProtocol"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol_Hash() { return 270568831U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCAppProtocol"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCAppProtocol::UDP", (int64)EMCAppProtocol::UDP },
				{ "EMCAppProtocol::TCP", (int64)EMCAppProtocol::TCP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * EMCAppProtocol is the protpocol used for MocapApi\n */" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "TCP.Name", "EMCAppProtocol::TCP" },
				{ "ToolTip", "EMCAppProtocol is the protpocol used for MocapApi" },
				{ "UDP.Name", "EMCAppProtocol::UDP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCAppProtocol",
				"EMCAppProtocol",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCBvhDataFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCBvhDataFormat"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCBvhDataFormat>()
	{
		return EMCBvhDataFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCBvhDataFormat(EMCBvhDataFormat_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCBvhDataFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat_Hash() { return 2400561346U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCBvhDataFormat"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCBvhDataFormat::String", (int64)EMCBvhDataFormat::String },
				{ "EMCBvhDataFormat::BinaryWithOldFrameHeader", (int64)EMCBvhDataFormat::BinaryWithOldFrameHeader },
				{ "EMCBvhDataFormat::Binary", (int64)EMCBvhDataFormat::Binary },
				{ "EMCBvhDataFormat::Mask_LegacyHumanHierarchy", (int64)EMCBvhDataFormat::Mask_LegacyHumanHierarchy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Binary.Name", "EMCBvhDataFormat::Binary" },
				{ "BinaryWithOldFrameHeader.Name", "EMCBvhDataFormat::BinaryWithOldFrameHeader" },
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n * EMCBvhDataFormat is the unreal type for MocapApi EMCPBvhData\n */" },
				{ "Mask_LegacyHumanHierarchy.Name", "EMCBvhDataFormat::Mask_LegacyHumanHierarchy" },
				{ "ModuleRelativePath", "Public/MocapStructs.h" },
				{ "String.Name", "EMCBvhDataFormat::String" },
				{ "ToolTip", "EMCBvhDataFormat is the unreal type for MocapApi EMCPBvhData" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCBvhDataFormat",
				"EMCBvhDataFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EMCBvhRotationOrder_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("EMCBvhRotationOrder"));
		}
		return Singleton;
	}
	template<> NEURONLIVELINK_API UEnum* StaticEnum<EMCBvhRotationOrder>()
	{
		return EMCBvhRotationOrder_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMCBvhRotationOrder(EMCBvhRotationOrder_StaticEnum, TEXT("/Script/NeuronLiveLink"), TEXT("EMCBvhRotationOrder"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder_Hash() { return 3692267682U; }
	UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMCBvhRotationOrder"), 0, Get_Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMCBvhRotationOrder::XYZ", (int64)EMCBvhRotationOrder::XYZ },
				{ "EMCBvhRotationOrder::XZY", (int64)EMCBvhRotationOrder::XZY },
				{ "EMCBvhRotationOrder::YXZ", (int64)EMCBvhRotationOrder::YXZ },
				{ "EMCBvhRotationOrder::YZX", (int64)EMCBvhRotationOrder::YZX },
				{ "EMCBvhRotationOrder::ZXY", (int64)EMCBvhRotationOrder::ZXY },
				{ "EMCBvhRotationOrder::ZYX", (int64)EMCBvhRotationOrder::ZYX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_NeuronLiveLink,
				nullptr,
				"EMCBvhRotationOrder",
				"EMCBvhRotationOrder",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMocapServerCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NEURONLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FMocapServerCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapServerCommand, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapServerCommand"), sizeof(FMocapServerCommand), Get_Z_Construct_UScriptStruct_FMocapServerCommand_Hash());
	}
	return Singleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapServerCommand>()
{
	return FMocapServerCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMocapServerCommand(FMocapServerCommand::StaticStruct, TEXT("/Script/NeuronLiveLink"), TEXT("MocapServerCommand"), false, nullptr, nullptr);
static struct FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapServerCommand
{
	FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapServerCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MocapServerCommand")),new UScriptStruct::TCppStructOps<FMocapServerCommand>);
	}
} ScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapServerCommand;
	struct Z_Construct_UScriptStruct_FMocapServerCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cmd_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Cmd;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Params_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Params_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Params_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Params;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapServerCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapServerCommand>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapServerCommand, Cmd), Z_Construct_UEnum_NeuronLiveLink_EMCCommandType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_ValueProp = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_Key_KeyProp = { "Params_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapServerCommand, Params), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Result_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapServerCommand, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapServerCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Cmd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapServerCommand_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapServerCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
		nullptr,
		&NewStructOps,
		"MocapServerCommand",
		sizeof(FMocapServerCommand),
		alignof(FMocapServerCommand),
		Z_Construct_UScriptStruct_FMocapServerCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapServerCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMocapServerCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMocapServerCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MocapServerCommand"), sizeof(FMocapServerCommand), Get_Z_Construct_UScriptStruct_FMocapServerCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMocapServerCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMocapServerCommand_Hash() { return 214487807U; }
class UScriptStruct* FMocapRecordNotify::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NEURONLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FMocapRecordNotify_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapRecordNotify, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapRecordNotify"), sizeof(FMocapRecordNotify), Get_Z_Construct_UScriptStruct_FMocapRecordNotify_Hash());
	}
	return Singleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapRecordNotify>()
{
	return FMocapRecordNotify::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMocapRecordNotify(FMocapRecordNotify::StaticStruct, TEXT("/Script/NeuronLiveLink"), TEXT("MocapRecordNotify"), false, nullptr, nullptr);
static struct FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapRecordNotify
{
	FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapRecordNotify()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MocapRecordNotify")),new UScriptStruct::TCppStructOps<FMocapRecordNotify>);
	}
} ScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapRecordNotify;
	struct Z_Construct_UScriptStruct_FMocapRecordNotify_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotifyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NotifyType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TakeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TakePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeSaveDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TakeSaveDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TakeFileSuffix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TakeFileSuffix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMocapRecordNotify is the unreal type for MocapApi IMCPRecordNotify\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMocapRecordNotify is the unreal type for MocapApi IMCPRecordNotify" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapRecordNotify>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_NotifyType_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_NotifyType = { "NotifyType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRecordNotify, NotifyType), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_NotifyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_NotifyType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeName = { "TakeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRecordNotify, TakeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakePath_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakePath = { "TakePath", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRecordNotify, TakePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeSaveDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeSaveDir = { "TakeSaveDir", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRecordNotify, TakeSaveDir), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeSaveDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeSaveDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeFileSuffix_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeFileSuffix = { "TakeFileSuffix", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRecordNotify, TakeFileSuffix), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeFileSuffix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeFileSuffix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_NotifyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeSaveDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::NewProp_TakeFileSuffix,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
		nullptr,
		&NewStructOps,
		"MocapRecordNotify",
		sizeof(FMocapRecordNotify),
		alignof(FMocapRecordNotify),
		Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMocapRecordNotify()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMocapRecordNotify_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MocapRecordNotify"), sizeof(FMocapRecordNotify), Get_Z_Construct_UScriptStruct_FMocapRecordNotify_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMocapRecordNotify_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMocapRecordNotify_Hash() { return 2535685951U; }
class UScriptStruct* FMocapAvatar::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NEURONLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FMocapAvatar_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapAvatar, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapAvatar"), sizeof(FMocapAvatar), Get_Z_Construct_UScriptStruct_FMocapAvatar_Hash());
	}
	return Singleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapAvatar>()
{
	return FMocapAvatar::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMocapAvatar(FMocapAvatar::StaticStruct, TEXT("/Script/NeuronLiveLink"), TEXT("MocapAvatar"), false, nullptr, nullptr);
static struct FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapAvatar
{
	FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapAvatar()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MocapAvatar")),new UScriptStruct::TCppStructOps<FMocapAvatar>);
	}
} ScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapAvatar;
	struct Z_Construct_UScriptStruct_FMocapAvatar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootJointTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RootJointTag;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BoneParents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneParents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneParents;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasLocalPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasLocalPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HasLocalPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultLocalPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLocalPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultLocalPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalRotation_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostureIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PostureIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FMocapAvatar is the unreal type for MocapApi IMCPAvatar\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMocapAvatar is the unreal type for MocapApi IMCPAvatar" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapAvatar>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, Index), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_RootJointTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_RootJointTag = { "RootJointTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, RootJointTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_RootJointTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_RootJointTag_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents_MetaData[] = {
		{ "Comment", "//[tag] = name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "[tag] = name" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, BoneParents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions_Inner = { "HasLocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions_MetaData[] = {
		{ "Comment", "//[tag] = parentTag -1 if is root\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "[tag] = parentTag -1 if is root" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions = { "HasLocalPositions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, HasLocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions_Inner = { "DefaultLocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions = { "DefaultLocalPositions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, DefaultLocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions_Inner = { "LocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions = { "LocalPositions", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, LocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation_Inner = { "LocalRotation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation = { "LocalRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, LocalRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_PostureIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_PostureIndex = { "PostureIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapAvatar, PostureIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_PostureIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_PostureIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_RootJointTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_BoneParents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_HasLocalPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_DefaultLocalPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_LocalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapAvatar_Statics::NewProp_PostureIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapAvatar_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
		nullptr,
		&NewStructOps,
		"MocapAvatar",
		sizeof(FMocapAvatar),
		alignof(FMocapAvatar),
		Z_Construct_UScriptStruct_FMocapAvatar_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapAvatar_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapAvatar_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMocapAvatar()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMocapAvatar_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MocapAvatar"), sizeof(FMocapAvatar), Get_Z_Construct_UScriptStruct_FMocapAvatar_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMocapAvatar_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMocapAvatar_Hash() { return 2999756022U; }
class UScriptStruct* FMocapTracker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NEURONLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FMocapTracker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapTracker, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapTracker"), sizeof(FMocapTracker), Get_Z_Construct_UScriptStruct_FMocapTracker_Hash());
	}
	return Singleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapTracker>()
{
	return FMocapTracker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMocapTracker(FMocapTracker::StaticStruct, TEXT("/Script/NeuronLiveLink"), TEXT("MocapTracker"), false, nullptr, nullptr);
static struct FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapTracker
{
	FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapTracker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MocapTracker")),new UScriptStruct::TCppStructOps<FMocapTracker>);
	}
} ScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapTracker;
	struct Z_Construct_UScriptStruct_FMocapTracker_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapTracker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMocapTracker is the unreal type for MocapApi IMCPTracker\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMocapTracker is the unreal type for MocapApi IMCPTracker" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMocapTracker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapTracker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapTracker, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//int ID;\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "UPROPERTY()\nint ID;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapTracker, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapTracker, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapTracker, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Status_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapTracker_Statics::NewProp_Status,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapTracker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
		nullptr,
		&NewStructOps,
		"MocapTracker",
		sizeof(FMocapTracker),
		alignof(FMocapTracker),
		Z_Construct_UScriptStruct_FMocapTracker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapTracker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapTracker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapTracker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMocapTracker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMocapTracker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MocapTracker"), sizeof(FMocapTracker), Get_Z_Construct_UScriptStruct_FMocapTracker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMocapTracker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMocapTracker_Hash() { return 2789678126U; }
class UScriptStruct* FMocapRigidBody::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NEURONLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FMocapRigidBody_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMocapRigidBody, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MocapRigidBody"), sizeof(FMocapRigidBody), Get_Z_Construct_UScriptStruct_FMocapRigidBody_Hash());
	}
	return Singleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMocapRigidBody>()
{
	return FMocapRigidBody::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMocapRigidBody(FMocapRigidBody::StaticStruct, TEXT("/Script/NeuronLiveLink"), TEXT("MocapRigidBody"), false, nullptr, nullptr);
static struct FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapRigidBody
{
	FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapRigidBody()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MocapRigidBody")),new UScriptStruct::TCppStructOps<FMocapRigidBody>);
	}
} ScriptStruct_NeuronLiveLink_StaticRegisterNativesFMocapRigidBody;
	struct Z_Construct_UScriptStruct_FMocapRigidBody_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_JointTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRigidBody_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMocapRigidBody is the unreal type for MocapApi IMCPRigidBody\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMocapRigidBody is the unreal type for MocapApi IMCPRigidBody" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMocapRigidBody>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRigidBody, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//int ID;\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "UPROPERTY()\nint ID;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRigidBody, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRigidBody, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRigidBody, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_JointTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_JointTag = { "JointTag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMocapRigidBody, JointTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_JointTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_JointTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMocapRigidBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMocapRigidBody_Statics::NewProp_JointTag,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMocapRigidBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
		nullptr,
		&NewStructOps,
		"MocapRigidBody",
		sizeof(FMocapRigidBody),
		alignof(FMocapRigidBody),
		Z_Construct_UScriptStruct_FMocapRigidBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMocapRigidBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMocapRigidBody()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMocapRigidBody_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MocapRigidBody"), sizeof(FMocapRigidBody), Get_Z_Construct_UScriptStruct_FMocapRigidBody_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMocapRigidBody_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMocapRigidBody_Hash() { return 2361110606U; }
class UScriptStruct* FMCRenderSetting::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NEURONLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FMCRenderSetting_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMCRenderSetting, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MCRenderSetting"), sizeof(FMCRenderSetting), Get_Z_Construct_UScriptStruct_FMCRenderSetting_Hash());
	}
	return Singleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMCRenderSetting>()
{
	return FMCRenderSetting::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMCRenderSetting(FMCRenderSetting::StaticStruct, TEXT("/Script/NeuronLiveLink"), TEXT("MCRenderSetting"), false, nullptr, nullptr);
static struct FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMCRenderSetting
{
	FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMCRenderSetting()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MCRenderSetting")),new UScriptStruct::TCppStructOps<FMCRenderSetting>);
	}
} ScriptStruct_NeuronLiveLink_StaticRegisterNativesFMCRenderSetting;
	struct Z_Construct_UScriptStruct_FMCRenderSetting_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Up_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Up_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Up;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Front_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Front_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Front;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Coord_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Coord;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RotatingDir_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotatingDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RotatingDir;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Unit_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Unit_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Unit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCRenderSetting_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMCRenderSetting is the unreal type for MocapApi IMCPRenderSettings\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMCRenderSetting is the unreal type for MocapApi IMCPRenderSettings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMCRenderSetting>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCRenderSetting, Up), Z_Construct_UEnum_NeuronLiveLink_EMCUpAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front = { "Front", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCRenderSetting, Front), Z_Construct_UEnum_NeuronLiveLink_EMCFrontAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCRenderSetting, Coord), Z_Construct_UEnum_NeuronLiveLink_EMCCoordSystem, METADATA_PARAMS(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir = { "RotatingDir", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCRenderSetting, RotatingDir), Z_Construct_UEnum_NeuronLiveLink_EMCRotatingDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit = { "Unit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCRenderSetting, Unit), Z_Construct_UEnum_NeuronLiveLink_EMCDistanceUnit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMCRenderSetting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Up,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Front,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Coord,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_RotatingDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCRenderSetting_Statics::NewProp_Unit,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMCRenderSetting_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
		nullptr,
		&NewStructOps,
		"MCRenderSetting",
		sizeof(FMCRenderSetting),
		alignof(FMCRenderSetting),
		Z_Construct_UScriptStruct_FMCRenderSetting_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCRenderSetting_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMCRenderSetting()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMCRenderSetting_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MCRenderSetting"), sizeof(FMCRenderSetting), Get_Z_Construct_UScriptStruct_FMCRenderSetting_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMCRenderSetting_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMCRenderSetting_Hash() { return 148844025U; }
class UScriptStruct* FMCAppSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NEURONLIVELINK_API uint32 Get_Z_Construct_UScriptStruct_FMCAppSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMCAppSettings, Z_Construct_UPackage__Script_NeuronLiveLink(), TEXT("MCAppSettings"), sizeof(FMCAppSettings), Get_Z_Construct_UScriptStruct_FMCAppSettings_Hash());
	}
	return Singleton;
}
template<> NEURONLIVELINK_API UScriptStruct* StaticStruct<FMCAppSettings>()
{
	return FMCAppSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMCAppSettings(FMCAppSettings::StaticStruct, TEXT("/Script/NeuronLiveLink"), TEXT("MCAppSettings"), false, nullptr, nullptr);
static struct FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMCAppSettings
{
	FScriptStruct_NeuronLiveLink_StaticRegisterNativesFMCAppSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MCAppSettings")),new UScriptStruct::TCppStructOps<FMCAppSettings>);
	}
} ScriptStruct_NeuronLiveLink_StaticRegisterNativesFMCAppSettings;
	struct Z_Construct_UScriptStruct_FMCAppSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Protocol_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Protocol_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Protocol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Port;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecvPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RecvPort;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BvhRotation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BvhRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BvhRotation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bvhDataFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bvhDataFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_bvhDataFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCAppSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * FMCAppSettings is the unreal type for MocapApi IMCPSettings\n */" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "FMCAppSettings is the unreal type for MocapApi IMCPSettings" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMCAppSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "// MocapApp name, used for query\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "MocapApp name, used for query" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCAppSettings, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol = { "Protocol", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCAppSettings, Protocol), Z_Construct_UEnum_NeuronLiveLink_EMCAppProtocol, METADATA_PARAMS(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RemoteIP_MetaData[] = {
		{ "Comment", "// Remote server IP when use TCP protocol\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "Remote server IP when use TCP protocol" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RemoteIP = { "RemoteIP", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCAppSettings, RemoteIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RemoteIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RemoteIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Port_MetaData[] = {
		{ "Comment", "// Port used in mocapapi, remote server port for TCP, local port for UDP\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "Port used in mocapapi, remote server port for TCP, local port for UDP" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCAppSettings, Port), METADATA_PARAMS(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Port_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RecvPort_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RecvPort = { "RecvPort", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCAppSettings, RecvPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RecvPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RecvPort_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation = { "BvhRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCAppSettings, BvhRotation), Z_Construct_UEnum_NeuronLiveLink_EMCBvhRotationOrder, METADATA_PARAMS(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat_MetaData[] = {
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat = { "bvhDataFormat", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMCAppSettings, bvhDataFormat), Z_Construct_UEnum_NeuronLiveLink_EMCBvhDataFormat, METADATA_PARAMS(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMCAppSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Protocol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RemoteIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_RecvPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_BvhRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMCAppSettings_Statics::NewProp_bvhDataFormat,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMCAppSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
		nullptr,
		&NewStructOps,
		"MCAppSettings",
		sizeof(FMCAppSettings),
		alignof(FMCAppSettings),
		Z_Construct_UScriptStruct_FMCAppSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMCAppSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMCAppSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMCAppSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMCAppSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NeuronLiveLink();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MCAppSettings"), sizeof(FMCAppSettings), Get_Z_Construct_UScriptStruct_FMCAppSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMCAppSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMCAppSettings_Hash() { return 98718792U; }
	DEFINE_FUNCTION(UMocapApp::execHasMocapCommandInQueue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasMocapCommandInQueue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMocapApp::execQueueMocapCommand)
	{
		P_GET_STRUCT_REF(FMocapServerCommand,Z_Param_Out_Cmd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QueueMocapCommand(Z_Param_Out_Cmd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMocapApp::execGetLastErrorId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLastErrorId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMocapApp::execGetLastErrorMessage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLastErrorMessage();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMocapApp::execGetIsReadyToUse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsReadyToUse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMocapApp::execGetIsConnecting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsConnecting();
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMocapApp::execGetAllAvatarNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_NameArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllAvatarNames(Z_Param_Out_NameArray);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMocapApp::execGetAllRigidBodyNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_NameArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllRigidBodyNames(Z_Param_Out_NameArray);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(UMocapApp::execGetAllTrackerNames)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_NameArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllTrackerNames(Z_Param_Out_NameArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMocapApp::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMocapApp::execConnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Connect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMocapApp::execGetConnectionString)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetConnectionString();
		P_NATIVE_END;
	}
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
	struct Z_Construct_UFunction_UMocapApp_Connect_Statics
	{
		struct MocapApp_eventConnect_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMocapApp_Connect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapApp_eventConnect_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapApp_eventConnect_Parms), &Z_Construct_UFunction_UMocapApp_Connect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_Connect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// connect to server side\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "connect to server side" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "Connect", nullptr, nullptr, sizeof(MocapApp_eventConnect_Parms), Z_Construct_UFunction_UMocapApp_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_Disconnect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// disconnect from server side\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "disconnect from server side" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "Disconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics
	{
		struct MocapApp_eventGetAllAvatarNames_Parms
		{
			TArray<FString> NameArray;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NameArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAllAvatarNames_Parms, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::NewProp_NameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::NewProp_NameArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query all avatar names for this mocapapp\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query all avatar names for this mocapapp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAllAvatarNames", nullptr, nullptr, sizeof(MocapApp_eventGetAllAvatarNames_Parms), Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetAllAvatarNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAllAvatarNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics
	{
		struct MocapApp_eventGetAllRigidBodyNames_Parms
		{
			TArray<FString> NameArray;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NameArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAllRigidBodyNames_Parms, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::NewProp_NameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::NewProp_NameArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query all rigidbody names for this mocapapp\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query all rigidbody names for this mocapapp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAllRigidBodyNames", nullptr, nullptr, sizeof(MocapApp_eventGetAllRigidBodyNames_Parms), Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics
	{
		struct MocapApp_eventGetAllTrackerNames_Parms
		{
			TArray<FString> NameArray;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NameArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::NewProp_NameArray_Inner = { "NameArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::NewProp_NameArray = { "NameArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAllTrackerNames_Parms, NameArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::NewProp_NameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::NewProp_NameArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query all tracker names for this mocapapp\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query all tracker names for this mocapapp" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAllTrackerNames", nullptr, nullptr, sizeof(MocapApp_eventGetAllTrackerNames_Parms), Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetAllTrackerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAllTrackerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AvatarName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalPositions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocalRotations_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LocalRotations;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_AvatarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_AvatarName = { "AvatarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarData_Parms, AvatarName), METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_AvatarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_AvatarName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalPositions_Inner = { "LocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalPositions = { "LocalPositions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarData_Parms, LocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalRotations_Inner = { "LocalRotations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalRotations = { "LocalRotations", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarData_Parms, LocalRotations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapApp_eventGetAvatarData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapApp_eventGetAvatarData_Parms), &Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_AvatarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalRotations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_LocalRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query avatar data(positions and location for each bone) by name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query avatar data(positions and location for each bone) by name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAvatarData", nullptr, nullptr, sizeof(MocapApp_eventGetAvatarData_Parms), Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetAvatarData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAvatarData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AvatarName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RootJointTag;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneNames;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_BoneParents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BoneParents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultLocalPositions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultLocalPositions;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_AvatarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_AvatarName = { "AvatarName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, AvatarName), METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_AvatarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_AvatarName_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_RootJointTag = { "RootJointTag", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, RootJointTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneNames_Inner = { "BoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneNames = { "BoneNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, BoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneParents_Inner = { "BoneParents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneParents = { "BoneParents", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, BoneParents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_DefaultLocalPositions_Inner = { "DefaultLocalPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_DefaultLocalPositions = { "DefaultLocalPositions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetAvatarStaticData_Parms, DefaultLocalPositions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapApp_eventGetAvatarStaticData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapApp_eventGetAvatarStaticData_Parms), &Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_AvatarName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_RootJointTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneParents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_BoneParents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_DefaultLocalPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_DefaultLocalPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query avatar static data(root, bone names and herarchy) by name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query avatar static data(root, bone names and herarchy) by name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetAvatarStaticData", nullptr, nullptr, sizeof(MocapApp_eventGetAvatarStaticData_Parms), Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetAvatarStaticData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetAvatarStaticData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics
	{
		struct MocapApp_eventGetConnectionString_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetConnectionString_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetConnectionString", nullptr, nullptr, sizeof(MocapApp_eventGetConnectionString_Parms), Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetConnectionString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetConnectionString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics
	{
		struct MocapApp_eventGetIsConnecting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapApp_eventGetIsConnecting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapApp_eventGetIsConnecting_Parms), &Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// if MocapApp is connected\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "if MocapApp is connected" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetIsConnecting", nullptr, nullptr, sizeof(MocapApp_eventGetIsConnecting_Parms), Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetIsConnecting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetIsConnecting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics
	{
		struct MocapApp_eventGetIsReadyToUse_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapApp_eventGetIsReadyToUse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapApp_eventGetIsReadyToUse_Parms), &Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetIsReadyToUse", nullptr, nullptr, sizeof(MocapApp_eventGetIsReadyToUse_Parms), Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetIsReadyToUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetIsReadyToUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics
	{
		struct MocapApp_eventGetLastErrorId_Parms
		{
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetLastErrorId_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetLastErrorId", nullptr, nullptr, sizeof(MocapApp_eventGetLastErrorId_Parms), Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetLastErrorId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetLastErrorId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics
	{
		struct MocapApp_eventGetLastErrorMessage_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetLastErrorMessage_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetLastErrorMessage", nullptr, nullptr, sizeof(MocapApp_eventGetLastErrorMessage_Parms), Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetLastErrorMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetLastErrorMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics
	{
		struct MocapApp_eventGetLastErrorStr_Parms
		{
			int32 ErrorId;
			FString Str;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ErrorId;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::NewProp_ErrorId = { "ErrorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetLastErrorStr_Parms, ErrorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetLastErrorStr_Parms, Str), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::NewProp_ErrorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::NewProp_Str,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// get last error message for error handling\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "get last error message for error handling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetLastErrorStr", nullptr, nullptr, sizeof(MocapApp_eventGetLastErrorStr_Parms), Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetLastErrorStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetLastErrorStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RigidName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RigidName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Status;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_JointTag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_RigidName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_RigidName = { "RigidName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, RigidName), METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_RigidName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_RigidName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, Status), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_JointTag = { "JointTag", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetRigidBody_Parms, JointTag), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapApp_eventGetRigidBody_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapApp_eventGetRigidBody_Parms), &Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_RigidName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_JointTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query rigidbody data by name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query rigidbody data by name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetRigidBody", nullptr, nullptr, sizeof(MocapApp_eventGetRigidBody_Parms), Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetRigidBody()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetRigidBody_Statics::FuncParams);
		}
		return ReturnFunction;
	}
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TrackerName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Status;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_TrackerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_TrackerName = { "TrackerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetTracker_Parms, TrackerName), METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_TrackerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_TrackerName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetTracker_Parms, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetTracker_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventGetTracker_Parms, Status), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapApp_eventGetTracker_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapApp_eventGetTracker_Parms), &Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_GetTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_TrackerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_GetTracker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_GetTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "Comment", "// query tracker data by name\n" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "query tracker data by name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_GetTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "GetTracker", nullptr, nullptr, sizeof(MocapApp_eventGetTracker_Parms), Z_Construct_UFunction_UMocapApp_GetTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_GetTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_GetTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_GetTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics
	{
		struct MocapApp_eventHasMocapCommandInQueue_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MocapApp_eventHasMocapCommandInQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MocapApp_eventHasMocapCommandInQueue_Parms), &Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "HasMocapCommandInQueue", nullptr, nullptr, sizeof(MocapApp_eventHasMocapCommandInQueue_Parms), Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics
	{
		struct MocapApp_eventQueueMocapCommand_Parms
		{
			FMocapServerCommand Cmd;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cmd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Cmd;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::NewProp_Cmd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MocapApp_eventQueueMocapCommand_Parms, Cmd), Z_Construct_UScriptStruct_FMocapServerCommand, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::NewProp_Cmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::NewProp_Cmd_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::NewProp_Cmd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMocapApp, nullptr, "QueueMocapCommand", nullptr, nullptr, sizeof(MocapApp_eventQueueMocapCommand_Parms), Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMocapApp_QueueMocapCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMocapApp_QueueMocapCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMocapApp_NoRegister()
	{
		return UMocapApp::StaticClass();
	}
	struct Z_Construct_UClass_UMocapApp_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AppSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RenderSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppHandleInternal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AppHandleInternal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMocapApp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMocapApp_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMocapApp_Connect, "Connect" }, // 2322586497
		{ &Z_Construct_UFunction_UMocapApp_Disconnect, "Disconnect" }, // 3994502109
		{ &Z_Construct_UFunction_UMocapApp_GetAllAvatarNames, "GetAllAvatarNames" }, // 3183006631
		{ &Z_Construct_UFunction_UMocapApp_GetAllRigidBodyNames, "GetAllRigidBodyNames" }, // 2866584208
		{ &Z_Construct_UFunction_UMocapApp_GetAllTrackerNames, "GetAllTrackerNames" }, // 482695368
		{ &Z_Construct_UFunction_UMocapApp_GetAvatarData, "GetAvatarData" }, // 3686200689
		{ &Z_Construct_UFunction_UMocapApp_GetAvatarStaticData, "GetAvatarStaticData" }, // 4198842866
		{ &Z_Construct_UFunction_UMocapApp_GetConnectionString, "GetConnectionString" }, // 1492372601
		{ &Z_Construct_UFunction_UMocapApp_GetIsConnecting, "GetIsConnecting" }, // 644410645
		{ &Z_Construct_UFunction_UMocapApp_GetIsReadyToUse, "GetIsReadyToUse" }, // 49671163
		{ &Z_Construct_UFunction_UMocapApp_GetLastErrorId, "GetLastErrorId" }, // 4077781568
		{ &Z_Construct_UFunction_UMocapApp_GetLastErrorMessage, "GetLastErrorMessage" }, // 1226988758
		{ &Z_Construct_UFunction_UMocapApp_GetLastErrorStr, "GetLastErrorStr" }, // 4121075652
		{ &Z_Construct_UFunction_UMocapApp_GetRigidBody, "GetRigidBody" }, // 4003949157
		{ &Z_Construct_UFunction_UMocapApp_GetTracker, "GetTracker" }, // 1498921204
		{ &Z_Construct_UFunction_UMocapApp_HasMocapCommandInQueue, "HasMocapCommandInQueue" }, // 845358566
		{ &Z_Construct_UFunction_UMocapApp_QueueMocapCommand, "QueueMocapCommand" }, // 3625597609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMocapApp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UMocapApp is the unreal type for MocapApi IMCPApplication\n */" },
		{ "IncludePath", "MocapStructs.h" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
		{ "ToolTip", "UMocapApp is the unreal type for MocapApi IMCPApplication" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMocapApp_Statics::NewProp_AppName_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMocapApp_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMocapApp, AppName), METADATA_PARAMS(Z_Construct_UClass_UMocapApp_Statics::NewProp_AppName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMocapApp_Statics::NewProp_AppName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMocapApp_Statics::NewProp_AppSettings_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMocapApp_Statics::NewProp_AppSettings = { "AppSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMocapApp, AppSettings), Z_Construct_UScriptStruct_FMCAppSettings, METADATA_PARAMS(Z_Construct_UClass_UMocapApp_Statics::NewProp_AppSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMocapApp_Statics::NewProp_AppSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMocapApp_Statics::NewProp_RenderSettings_MetaData[] = {
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMocapApp_Statics::NewProp_RenderSettings = { "RenderSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMocapApp, RenderSettings), Z_Construct_UScriptStruct_FMCRenderSetting, METADATA_PARAMS(Z_Construct_UClass_UMocapApp_Statics::NewProp_RenderSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMocapApp_Statics::NewProp_RenderSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMocapApp_Statics::NewProp_AppHandleInternal_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "MocapApi" },
		{ "ModuleRelativePath", "Public/MocapStructs.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMocapApp_Statics::NewProp_AppHandleInternal = { "AppHandleInternal", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMocapApp, AppHandleInternal), METADATA_PARAMS(Z_Construct_UClass_UMocapApp_Statics::NewProp_AppHandleInternal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMocapApp_Statics::NewProp_AppHandleInternal_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMocapApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMocapApp_Statics::NewProp_AppName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMocapApp_Statics::NewProp_AppSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMocapApp_Statics::NewProp_RenderSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMocapApp_Statics::NewProp_AppHandleInternal,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMocapApp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMocapApp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMocapApp_Statics::ClassParams = {
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
		METADATA_PARAMS(Z_Construct_UClass_UMocapApp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMocapApp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMocapApp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMocapApp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMocapApp, 2190165826);
	template<> NEURONLIVELINK_API UClass* StaticClass<UMocapApp>()
	{
		return UMocapApp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMocapApp(Z_Construct_UClass_UMocapApp, &UMocapApp::StaticClass, TEXT("/Script/NeuronLiveLink"), TEXT("UMocapApp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMocapApp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
