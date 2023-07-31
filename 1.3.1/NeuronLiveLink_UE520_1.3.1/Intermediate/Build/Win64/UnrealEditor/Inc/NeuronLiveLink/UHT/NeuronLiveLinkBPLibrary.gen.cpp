// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronLiveLinkBPLibrary.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "ILiveLinkSource.h"
#include "NeuronLiveLink/Public/MocapStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronLiveLinkBPLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSourceHandle();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkBPLibrary();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkBPLibrary_NoRegister();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName();
	NEURONLIVELINK_API UEnum* Z_Construct_UEnum_NeuronLiveLink_EMCCommandType();
	NEURONLIVELINK_API UScriptStruct* Z_Construct_UScriptStruct_FMocapServerCommand();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execDumpAllMocapApp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::DumpAllMocapApp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execRemoveMocapRecordNotifyEventHandler)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::RemoveMocapRecordNotifyEventHandler(Z_Param_obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execAddMocapRecordNotifyEventHandler)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::AddMocapRecordNotifyEventHandler(Z_Param_obj);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execSendNeuronCommand)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_AppName);
		P_GET_STRUCT_REF(FMocapServerCommand,Z_Param_Out_Cmd);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Result);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ResultStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::SendNeuronCommand(Z_Param_WorldContextObject,Z_Param_AppName,Z_Param_Out_Cmd,Z_Param_LatentInfo,Z_Param_Out_Result,Z_Param_Out_ResultStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execHasMocapCommandInQueue)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AppName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNeuronLiveLinkBPLibrary::HasMocapCommandInQueue(Z_Param_AppName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execSetMocapCmdProgressHandler)
	{
		P_GET_STRUCT_REF(FMocapServerCommand,Z_Param_Out_Cmd);
		P_GET_OBJECT(UObject,Z_Param_Obj);
		P_GET_PROPERTY(FNameProperty,Z_Param_Function);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::SetMocapCmdProgressHandler(Z_Param_Out_Cmd,Z_Param_Obj,Z_Param_Function);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execBuildMocapCmdParamStopCatpureExtraFlag)
	{
		P_GET_STRUCT_REF(FMocapServerCommand,Z_Param_Out_Cmd);
		P_GET_ENUM(EMCCommandExtraFlag,Z_Param_flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::BuildMocapCmdParamStopCatpureExtraFlag(Z_Param_Out_Cmd,EMCCommandExtraFlag(Z_Param_flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execBuildMocapCmdParam)
	{
		P_GET_STRUCT_REF(FMocapServerCommand,Z_Param_Out_Cmd);
		P_GET_ENUM(EMCCommandParamName,Z_Param_Name);
		P_GET_PROPERTY(FStrProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::BuildMocapCmdParam(Z_Param_Out_Cmd,EMCCommandParamName(Z_Param_Name),Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execBuildMocapCmdParamInt)
	{
		P_GET_STRUCT_REF(FMocapServerCommand,Z_Param_Out_Cmd);
		P_GET_ENUM(EMCCommandParamName,Z_Param_Name);
		P_GET_PROPERTY(FIntProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::BuildMocapCmdParamInt(Z_Param_Out_Cmd,EMCCommandParamName(Z_Param_Name),Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execClearMocapCmdParams)
	{
		P_GET_STRUCT_REF(FMocapServerCommand,Z_Param_Out_Cmd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::ClearMocapCmdParams(Z_Param_Out_Cmd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execMakeMocapCommand)
	{
		P_GET_ENUM(EMCCommandType,Z_Param_Cmd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMocapServerCommand*)Z_Param__Result=UNeuronLiveLinkBPLibrary::MakeMocapCommand(EMCCommandType(Z_Param_Cmd));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execGetNeuronFrameInUE4)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AvatarName);
		P_GET_UBOOL_REF(Z_Param_Out_WithDisplacement);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Locations);
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_Rotations);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::GetNeuronFrameInUE4(Z_Param_Out_AvatarName,Z_Param_Out_WithDisplacement,Z_Param_Out_Locations,Z_Param_Out_Rotations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execNeuronBoneIndex)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BoneIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::NeuronBoneIndex(Z_Param_Out_BoneName,Z_Param_Out_BoneIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execGetRigidBodyNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_RigidBodyNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::GetRigidBodyNames(Z_Param_Out_RigidBodyNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execGetTrackerNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_TrackerNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::GetTrackerNames(Z_Param_Out_TrackerNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execGetAvatarNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_AvatarNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::GetAvatarNames(Z_Param_Out_AvatarNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execGetAllMocapLivelinkSourceStatus)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_StatusArr);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::GetAllMocapLivelinkSourceStatus(Z_Param_Out_StatusArr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execGetMocapAppStatus)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AppName);
		P_GET_UBOOL_REF(Z_Param_Out_IsConnected);
		P_GET_UBOOL_REF(Z_Param_Out_IsReady);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::GetMocapAppStatus(Z_Param_AppName,Z_Param_Out_IsConnected,Z_Param_Out_IsReady);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execRemoveAllMocapLivelinkSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::RemoveAllMocapLivelinkSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execRemoveMocapAppByName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_AppName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::RemoveMocapAppByName(Z_Param_AppName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execGetMocapAppNames)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_AppNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::GetMocapAppNames(Z_Param_Out_AppNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execGetNeuronParentJoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_JointID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNeuronLiveLinkBPLibrary::GetNeuronParentJoint(Z_Param_JointID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkBPLibrary::execCreateSource)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ConnectionString);
		P_GET_STRUCT_REF(FLiveLinkSourceHandle,Z_Param_Out_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNeuronLiveLinkBPLibrary::CreateSource(Z_Param_ConnectionString,Z_Param_Out_Handle);
		P_NATIVE_END;
	}
	void UNeuronLiveLinkBPLibrary::StaticRegisterNativesUNeuronLiveLinkBPLibrary()
	{
		UClass* Class = UNeuronLiveLinkBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMocapRecordNotifyEventHandler", &UNeuronLiveLinkBPLibrary::execAddMocapRecordNotifyEventHandler },
			{ "BuildMocapCmdParam", &UNeuronLiveLinkBPLibrary::execBuildMocapCmdParam },
			{ "BuildMocapCmdParamInt", &UNeuronLiveLinkBPLibrary::execBuildMocapCmdParamInt },
			{ "BuildMocapCmdParamStopCatpureExtraFlag", &UNeuronLiveLinkBPLibrary::execBuildMocapCmdParamStopCatpureExtraFlag },
			{ "ClearMocapCmdParams", &UNeuronLiveLinkBPLibrary::execClearMocapCmdParams },
			{ "CreateSource", &UNeuronLiveLinkBPLibrary::execCreateSource },
			{ "DumpAllMocapApp", &UNeuronLiveLinkBPLibrary::execDumpAllMocapApp },
			{ "GetAllMocapLivelinkSourceStatus", &UNeuronLiveLinkBPLibrary::execGetAllMocapLivelinkSourceStatus },
			{ "GetAvatarNames", &UNeuronLiveLinkBPLibrary::execGetAvatarNames },
			{ "GetMocapAppNames", &UNeuronLiveLinkBPLibrary::execGetMocapAppNames },
			{ "GetMocapAppStatus", &UNeuronLiveLinkBPLibrary::execGetMocapAppStatus },
			{ "GetNeuronFrameInUE4", &UNeuronLiveLinkBPLibrary::execGetNeuronFrameInUE4 },
			{ "GetNeuronParentJoint", &UNeuronLiveLinkBPLibrary::execGetNeuronParentJoint },
			{ "GetRigidBodyNames", &UNeuronLiveLinkBPLibrary::execGetRigidBodyNames },
			{ "GetTrackerNames", &UNeuronLiveLinkBPLibrary::execGetTrackerNames },
			{ "HasMocapCommandInQueue", &UNeuronLiveLinkBPLibrary::execHasMocapCommandInQueue },
			{ "MakeMocapCommand", &UNeuronLiveLinkBPLibrary::execMakeMocapCommand },
			{ "NeuronBoneIndex", &UNeuronLiveLinkBPLibrary::execNeuronBoneIndex },
			{ "RemoveAllMocapLivelinkSource", &UNeuronLiveLinkBPLibrary::execRemoveAllMocapLivelinkSource },
			{ "RemoveMocapAppByName", &UNeuronLiveLinkBPLibrary::execRemoveMocapAppByName },
			{ "RemoveMocapRecordNotifyEventHandler", &UNeuronLiveLinkBPLibrary::execRemoveMocapRecordNotifyEventHandler },
			{ "SendNeuronCommand", &UNeuronLiveLinkBPLibrary::execSendNeuronCommand },
			{ "SetMocapCmdProgressHandler", &UNeuronLiveLinkBPLibrary::execSetMocapCmdProgressHandler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventAddMocapRecordNotifyEventHandler_Parms
		{
			const UObject* obj;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_obj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::NewProp_obj_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventAddMocapRecordNotifyEventHandler_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::NewProp_obj_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::NewProp_obj_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::NewProp_obj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "AddMocapRecordNotifyEventHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::NeuronLiveLinkBPLibrary_eventAddMocapRecordNotifyEventHandler_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventBuildMocapCmdParam_Parms
		{
			FMocapServerCommand Cmd;
			EMCCommandParamName Name;
			FString Val;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cmd;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Val_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventBuildMocapCmdParam_Parms, Cmd), Z_Construct_UScriptStruct_FMocapServerCommand, METADATA_PARAMS(nullptr, 0) }; // 60037917
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventBuildMocapCmdParam_Parms, Name), Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName, METADATA_PARAMS(nullptr, 0) }; // 724875752
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Val_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventBuildMocapCmdParam_Parms, Val), METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Val_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Val_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Cmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Name_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
		{ "Name", "ParamAvatarName" },
		{ "Val", "chr00" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "BuildMocapCmdParam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::NeuronLiveLinkBPLibrary_eventBuildMocapCmdParam_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventBuildMocapCmdParamInt_Parms
		{
			FMocapServerCommand Cmd;
			EMCCommandParamName Name;
			int32 Val;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cmd;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Name_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Name;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Val;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventBuildMocapCmdParamInt_Parms, Cmd), Z_Construct_UScriptStruct_FMocapServerCommand, METADATA_PARAMS(nullptr, 0) }; // 60037917
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::NewProp_Name_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventBuildMocapCmdParamInt_Parms, Name), Z_Construct_UEnum_NeuronLiveLink_EMCCommandParamName, METADATA_PARAMS(nullptr, 0) }; // 724875752
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventBuildMocapCmdParamInt_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::NewProp_Cmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::NewProp_Name_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
		{ "Name", "ParamDeviceRadio" },
		{ "Val", "2471" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "BuildMocapCmdParamInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::NeuronLiveLinkBPLibrary_eventBuildMocapCmdParamInt_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventBuildMocapCmdParamStopCatpureExtraFlag_Parms
		{
			FMocapServerCommand Cmd;
			EMCCommandExtraFlag flag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cmd;
		static const UECodeGen_Private::FBytePropertyParams NewProp_flag_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_flag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventBuildMocapCmdParamStopCatpureExtraFlag_Parms, Cmd), Z_Construct_UScriptStruct_FMocapServerCommand, METADATA_PARAMS(nullptr, 0) }; // 60037917
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::NewProp_flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventBuildMocapCmdParamStopCatpureExtraFlag_Parms, flag), Z_Construct_UEnum_NeuronLiveLink_EMCCommandExtraFlag, METADATA_PARAMS(nullptr, 0) }; // 3712683879
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::NewProp_Cmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::NewProp_flag_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "BuildMocapCmdParamStopCatpureExtraFlag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::NeuronLiveLinkBPLibrary_eventBuildMocapCmdParamStopCatpureExtraFlag_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventClearMocapCmdParams_Parms
		{
			FMocapServerCommand Cmd;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cmd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventClearMocapCmdParams_Parms, Cmd), Z_Construct_UScriptStruct_FMocapServerCommand, METADATA_PARAMS(nullptr, 0) }; // 60037917
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::NewProp_Cmd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
		{ "Name", "ParamDeviceRadio" },
		{ "Val", "2471" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "ClearMocapCmdParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::NeuronLiveLinkBPLibrary_eventClearMocapCmdParams_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventCreateSource_Parms
		{
			FString ConnectionString;
			FLiveLinkSourceHandle Handle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ConnectionString;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::NewProp_ConnectionString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::NewProp_ConnectionString = { "ConnectionString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventCreateSource_Parms, ConnectionString), METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::NewProp_ConnectionString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::NewProp_ConnectionString_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventCreateSource_Parms, Handle), Z_Construct_UScriptStruct_FLiveLinkSourceHandle, METADATA_PARAMS(nullptr, 0) }; // 3793506686
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::NewProp_ConnectionString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::NewProp_Handle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "Comment", "/**\n\x09\x09 * ConnectionString is like: \"LocalEndpoint, IsUDP, RemoteEndpoint, RotationOrder\"\n\x09\x09 * eg: \"127.0.0.1:7002, 0, 127.0.0.1:7001, YXZ\", YXZ can be lowercase.\n\x09\x09 */" },
		{ "DisplayName", "Create Neuron Live Link Source at runtime" },
		{ "Keywords", "create NeuronLiveLink source live link" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
		{ "ToolTip", "ConnectionString is like: \"LocalEndpoint, IsUDP, RemoteEndpoint, RotationOrder\"\neg: \"127.0.0.1:7002, 0, 127.0.0.1:7001, YXZ\", YXZ can be lowercase." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "CreateSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::NeuronLiveLinkBPLibrary_eventCreateSource_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_DumpAllMocapApp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_DumpAllMocapApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_DumpAllMocapApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "DumpAllMocapApp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_DumpAllMocapApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_DumpAllMocapApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_DumpAllMocapApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_DumpAllMocapApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventGetAllMocapLivelinkSourceStatus_Parms
		{
			TArray<FString> StatusArr;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_StatusArr_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StatusArr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::NewProp_StatusArr_Inner = { "StatusArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::NewProp_StatusArr = { "StatusArr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetAllMocapLivelinkSourceStatus_Parms, StatusArr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::NewProp_StatusArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::NewProp_StatusArr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "GetAllMocapLivelinkSourceStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::NeuronLiveLinkBPLibrary_eventGetAllMocapLivelinkSourceStatus_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventGetAvatarNames_Parms
		{
			TArray<FName> AvatarNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AvatarNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvatarNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::NewProp_AvatarNames_Inner = { "AvatarNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::NewProp_AvatarNames = { "AvatarNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetAvatarNames_Parms, AvatarNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::NewProp_AvatarNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::NewProp_AvatarNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "GetAvatarNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::NeuronLiveLinkBPLibrary_eventGetAvatarNames_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventGetMocapAppNames_Parms
		{
			TArray<FName> AppNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AppNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AppNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::NewProp_AppNames_Inner = { "AppNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::NewProp_AppNames = { "AppNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetMocapAppNames_Parms, AppNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::NewProp_AppNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::NewProp_AppNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "GetMocapAppNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::NeuronLiveLinkBPLibrary_eventGetMocapAppNames_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventGetMocapAppStatus_Parms
		{
			FName AppName;
			bool IsConnected;
			bool IsReady;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AppName;
		static void NewProp_IsConnected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsConnected;
		static void NewProp_IsReady_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsReady;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetMocapAppStatus_Parms, AppName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_IsConnected_SetBit(void* Obj)
	{
		((NeuronLiveLinkBPLibrary_eventGetMocapAppStatus_Parms*)Obj)->IsConnected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_IsConnected = { "IsConnected", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NeuronLiveLinkBPLibrary_eventGetMocapAppStatus_Parms), &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_IsConnected_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_IsReady_SetBit(void* Obj)
	{
		((NeuronLiveLinkBPLibrary_eventGetMocapAppStatus_Parms*)Obj)->IsReady = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_IsReady = { "IsReady", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NeuronLiveLinkBPLibrary_eventGetMocapAppStatus_Parms), &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_IsReady_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_AppName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_IsConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NewProp_IsReady,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "GetMocapAppStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::NeuronLiveLinkBPLibrary_eventGetMocapAppStatus_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventGetNeuronFrameInUE4_Parms
		{
			FName AvatarName;
			bool WithDisplacement;
			TArray<FVector> Locations;
			TArray<FQuat> Rotations;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvatarName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AvatarName;
		static void NewProp_WithDisplacement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WithDisplacement;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Locations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Locations;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotations_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rotations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_AvatarName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_AvatarName = { "AvatarName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetNeuronFrameInUE4_Parms, AvatarName), METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_AvatarName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_AvatarName_MetaData)) };
	void Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_WithDisplacement_SetBit(void* Obj)
	{
		((NeuronLiveLinkBPLibrary_eventGetNeuronFrameInUE4_Parms*)Obj)->WithDisplacement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_WithDisplacement = { "WithDisplacement", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NeuronLiveLinkBPLibrary_eventGetNeuronFrameInUE4_Parms), &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_WithDisplacement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_Locations_Inner = { "Locations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_Locations = { "Locations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetNeuronFrameInUE4_Parms, Locations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_Rotations_Inner = { "Rotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_Rotations = { "Rotations", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetNeuronFrameInUE4_Parms, Rotations), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_AvatarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_WithDisplacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_Locations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_Locations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_Rotations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NewProp_Rotations,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "Comment", "/**\n\x09 * Return the motion data in UE4 coordinate system.\n\x09 * The motion data is designed to be the combination\n\x09 * of the inverse of the world delta transformation of parent\n\x09 * and the world delta transformation of child.\n\x09 * It's (Pw\xce\x94).inverse() * (Cw\xce\x94), and (Cw\xce\x94) is applied first.\n\x09 * And the data recognize the positive x-axis of UE4 as the forward direction.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
		{ "ToolTip", "Return the motion data in UE4 coordinate system.\nThe motion data is designed to be the combination\nof the inverse of the world delta transformation of parent\nand the world delta transformation of child.\nIt's (Pw\xce\x94).inverse() * (Cw\xce\x94), and (Cw\xce\x94) is applied first.\nAnd the data recognize the positive x-axis of UE4 as the forward direction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "GetNeuronFrameInUE4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::NeuronLiveLinkBPLibrary_eventGetNeuronFrameInUE4_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventGetNeuronParentJoint_Parms
		{
			int32 JointID;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_JointID;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::NewProp_JointID = { "JointID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetNeuronParentJoint_Parms, JointID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetNeuronParentJoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::NewProp_JointID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "Comment", "/*\n\x09 * The JointID is a ENoitomBones_PNS value.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
		{ "ToolTip", "* The JointID is a ENoitomBones_PNS value." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "GetNeuronParentJoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::NeuronLiveLinkBPLibrary_eventGetNeuronParentJoint_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventGetRigidBodyNames_Parms
		{
			TArray<FName> RigidBodyNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_RigidBodyNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RigidBodyNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::NewProp_RigidBodyNames_Inner = { "RigidBodyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::NewProp_RigidBodyNames = { "RigidBodyNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetRigidBodyNames_Parms, RigidBodyNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::NewProp_RigidBodyNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::NewProp_RigidBodyNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "GetRigidBodyNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::NeuronLiveLinkBPLibrary_eventGetRigidBodyNames_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventGetTrackerNames_Parms
		{
			TArray<FName> TrackerNames;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TrackerNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackerNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::NewProp_TrackerNames_Inner = { "TrackerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::NewProp_TrackerNames = { "TrackerNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventGetTrackerNames_Parms, TrackerNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::NewProp_TrackerNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::NewProp_TrackerNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "GetTrackerNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::NeuronLiveLinkBPLibrary_eventGetTrackerNames_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventHasMocapCommandInQueue_Parms
		{
			FName AppName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AppName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventHasMocapCommandInQueue_Parms, AppName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NeuronLiveLinkBPLibrary_eventHasMocapCommandInQueue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NeuronLiveLinkBPLibrary_eventHasMocapCommandInQueue_Parms), &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::NewProp_AppName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "HasMocapCommandInQueue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::NeuronLiveLinkBPLibrary_eventHasMocapCommandInQueue_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventMakeMocapCommand_Parms
		{
			EMCCommandType Cmd;
			FMocapServerCommand ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Cmd_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Cmd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::NewProp_Cmd_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventMakeMocapCommand_Parms, Cmd), Z_Construct_UEnum_NeuronLiveLink_EMCCommandType, METADATA_PARAMS(nullptr, 0) }; // 3815046574
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventMakeMocapCommand_Parms, ReturnValue), Z_Construct_UScriptStruct_FMocapServerCommand, METADATA_PARAMS(nullptr, 0) }; // 60037917
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::NewProp_Cmd_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::NewProp_Cmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "MakeMocapCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::NeuronLiveLinkBPLibrary_eventMakeMocapCommand_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventNeuronBoneIndex_Parms
		{
			FName BoneName;
			int32 BoneIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventNeuronBoneIndex_Parms, BoneName), METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventNeuronBoneIndex_Parms, BoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::NewProp_BoneIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "NeuronBoneIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::NeuronLiveLinkBPLibrary_eventNeuronBoneIndex_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveAllMocapLivelinkSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveAllMocapLivelinkSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveAllMocapLivelinkSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "RemoveAllMocapLivelinkSource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveAllMocapLivelinkSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveAllMocapLivelinkSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveAllMocapLivelinkSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveAllMocapLivelinkSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventRemoveMocapAppByName_Parms
		{
			FName AppName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_AppName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventRemoveMocapAppByName_Parms, AppName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::NewProp_AppName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "RemoveMocapAppByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::NeuronLiveLinkBPLibrary_eventRemoveMocapAppByName_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventRemoveMocapRecordNotifyEventHandler_Parms
		{
			const UObject* obj;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_obj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::NewProp_obj_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventRemoveMocapRecordNotifyEventHandler_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::NewProp_obj_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::NewProp_obj_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::NewProp_obj,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "RemoveMocapRecordNotifyEventHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::NeuronLiveLinkBPLibrary_eventRemoveMocapRecordNotifyEventHandler_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventSendNeuronCommand_Parms
		{
			const UObject* WorldContextObject;
			FName AppName;
			FMocapServerCommand Cmd;
			FLatentActionInfo LatentInfo;
			int32 Result;
			FString ResultStr;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AppName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cmd;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResultStr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventSendNeuronCommand_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_AppName = { "AppName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventSendNeuronCommand_Parms, AppName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventSendNeuronCommand_Parms, Cmd), Z_Construct_UScriptStruct_FMocapServerCommand, METADATA_PARAMS(nullptr, 0) }; // 60037917
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventSendNeuronCommand_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventSendNeuronCommand_Parms, Result), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_ResultStr = { "ResultStr", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventSendNeuronCommand_Parms, ResultStr), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_AppName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_Cmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_LatentInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NewProp_ResultStr,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "SendNeuronCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::NeuronLiveLinkBPLibrary_eventSendNeuronCommand_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics
	{
		struct NeuronLiveLinkBPLibrary_eventSetMocapCmdProgressHandler_Parms
		{
			FMocapServerCommand Cmd;
			UObject* Obj;
			FName Function;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Cmd;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Obj;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Function;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::NewProp_Cmd = { "Cmd", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventSetMocapCmdProgressHandler_Parms, Cmd), Z_Construct_UScriptStruct_FMocapServerCommand, METADATA_PARAMS(nullptr, 0) }; // 60037917
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventSetMocapCmdProgressHandler_Parms, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::NewProp_Function = { "Function", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NeuronLiveLinkBPLibrary_eventSetMocapCmdProgressHandler_Parms, Function), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::NewProp_Cmd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::NewProp_Obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::NewProp_Function,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::Function_MetaDataParams[] = {
		{ "Category", "NeuronLiveLink" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkBPLibrary, nullptr, "SetMocapCmdProgressHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::NeuronLiveLinkBPLibrary_eventSetMocapCmdProgressHandler_Parms), Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuronLiveLinkBPLibrary);
	UClass* Z_Construct_UClass_UNeuronLiveLinkBPLibrary_NoRegister()
	{
		return UNeuronLiveLinkBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_AddMocapRecordNotifyEventHandler, "AddMocapRecordNotifyEventHandler" }, // 3795172379
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParam, "BuildMocapCmdParam" }, // 702282982
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamInt, "BuildMocapCmdParamInt" }, // 1741858502
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_BuildMocapCmdParamStopCatpureExtraFlag, "BuildMocapCmdParamStopCatpureExtraFlag" }, // 3752128086
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_ClearMocapCmdParams, "ClearMocapCmdParams" }, // 3981321920
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_CreateSource, "CreateSource" }, // 527481902
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_DumpAllMocapApp, "DumpAllMocapApp" }, // 204808823
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAllMocapLivelinkSourceStatus, "GetAllMocapLivelinkSourceStatus" }, // 1680778420
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetAvatarNames, "GetAvatarNames" }, // 1771469660
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppNames, "GetMocapAppNames" }, // 1679466780
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetMocapAppStatus, "GetMocapAppStatus" }, // 319306842
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronFrameInUE4, "GetNeuronFrameInUE4" }, // 1478428637
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetNeuronParentJoint, "GetNeuronParentJoint" }, // 4044002517
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetRigidBodyNames, "GetRigidBodyNames" }, // 997714322
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_GetTrackerNames, "GetTrackerNames" }, // 1028073390
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_HasMocapCommandInQueue, "HasMocapCommandInQueue" }, // 4061521253
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_MakeMocapCommand, "MakeMocapCommand" }, // 3645295713
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_NeuronBoneIndex, "NeuronBoneIndex" }, // 1284220211
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveAllMocapLivelinkSource, "RemoveAllMocapLivelinkSource" }, // 33827536
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapAppByName, "RemoveMocapAppByName" }, // 2824193054
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_RemoveMocapRecordNotifyEventHandler, "RemoveMocapRecordNotifyEventHandler" }, // 526069670
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SendNeuronCommand, "SendNeuronCommand" }, // 1341373159
		{ &Z_Construct_UFunction_UNeuronLiveLinkBPLibrary_SetMocapCmdProgressHandler, "SetMocapCmdProgressHandler" }, // 2695431873
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "NeuronLiveLinkBPLibrary.h" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuronLiveLinkBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics::ClassParams = {
		&UNeuronLiveLinkBPLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuronLiveLinkBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UNeuronLiveLinkBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuronLiveLinkBPLibrary.OuterSingleton, Z_Construct_UClass_UNeuronLiveLinkBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNeuronLiveLinkBPLibrary.OuterSingleton;
	}
	template<> NEURONLIVELINK_API UClass* StaticClass<UNeuronLiveLinkBPLibrary>()
	{
		return UNeuronLiveLinkBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuronLiveLinkBPLibrary);
	UNeuronLiveLinkBPLibrary::~UNeuronLiveLinkBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNeuronLiveLinkBPLibrary, UNeuronLiveLinkBPLibrary::StaticClass, TEXT("UNeuronLiveLinkBPLibrary"), &Z_Registration_Info_UClass_UNeuronLiveLinkBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuronLiveLinkBPLibrary), 1326924994U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_2748060895(TEXT("/Script/NeuronLiveLink"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
