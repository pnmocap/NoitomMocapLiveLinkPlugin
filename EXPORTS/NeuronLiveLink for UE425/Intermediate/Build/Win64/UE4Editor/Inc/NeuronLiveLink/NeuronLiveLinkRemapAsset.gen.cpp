// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronLiveLinkRemapAsset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronLiveLinkRemapAsset() {}
// Cross Module References
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkRemapAsset_NoRegister();
	NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkRemapAsset();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
// End Cross Module References
	DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execGetSkeletonForwardVector)
	{
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSkeletonForwardVector_Implementation((TEnumAsByte<EAxisOption::Type>&)(Z_Param_Out_Axis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execGetBonePrefix)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetBonePrefix_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execRemapCurveElements)
	{
		P_GET_TMAP_REF(FName,float,Z_Param_Out_CurveItems);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemapCurveElements_Implementation(Z_Param_Out_CurveItems);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execGetRemappedCurveName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRemappedCurveName_Implementation(Z_Param_CurveName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execGetRemappedBoneName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetRemappedBoneName_Implementation(Z_Param_BoneName);
		P_NATIVE_END;
	}
	static FName NAME_UNeuronLiveLinkRemapAsset_GetBonePrefix = FName(TEXT("GetBonePrefix"));
	FName UNeuronLiveLinkRemapAsset::GetBonePrefix() const
	{
		NeuronLiveLinkRemapAsset_eventGetBonePrefix_Parms Parms;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_GetBonePrefix),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UNeuronLiveLinkRemapAsset_GetRemappedBoneName = FName(TEXT("GetRemappedBoneName"));
	FName UNeuronLiveLinkRemapAsset::GetRemappedBoneName(FName BoneName) const
	{
		NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms Parms;
		Parms.BoneName=BoneName;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_GetRemappedBoneName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UNeuronLiveLinkRemapAsset_GetRemappedCurveName = FName(TEXT("GetRemappedCurveName"));
	FName UNeuronLiveLinkRemapAsset::GetRemappedCurveName(FName CurveName) const
	{
		NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms Parms;
		Parms.CurveName=CurveName;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_GetRemappedCurveName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector = FName(TEXT("GetSkeletonForwardVector"));
	void UNeuronLiveLinkRemapAsset::GetSkeletonForwardVector(TEnumAsByte<EAxisOption::Type>& Axis) const
	{
		NeuronLiveLinkRemapAsset_eventGetSkeletonForwardVector_Parms Parms;
		Parms.Axis=Axis;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector),&Parms);
		Axis=Parms.Axis;
	}
	static FName NAME_UNeuronLiveLinkRemapAsset_RemapCurveElements = FName(TEXT("RemapCurveElements"));
	void UNeuronLiveLinkRemapAsset::RemapCurveElements(TMap<FName,float>& CurveItems) const
	{
		NeuronLiveLinkRemapAsset_eventRemapCurveElements_Parms Parms;
		Parms.CurveItems=CurveItems;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_RemapCurveElements),&Parms);
		CurveItems=Parms.CurveItems;
	}
	void UNeuronLiveLinkRemapAsset::StaticRegisterNativesUNeuronLiveLinkRemapAsset()
	{
		UClass* Class = UNeuronLiveLinkRemapAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBonePrefix", &UNeuronLiveLinkRemapAsset::execGetBonePrefix },
			{ "GetRemappedBoneName", &UNeuronLiveLinkRemapAsset::execGetRemappedBoneName },
			{ "GetRemappedCurveName", &UNeuronLiveLinkRemapAsset::execGetRemappedCurveName },
			{ "GetSkeletonForwardVector", &UNeuronLiveLinkRemapAsset::execGetSkeletonForwardVector },
			{ "RemapCurveElements", &UNeuronLiveLinkRemapAsset::execRemapCurveElements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetBonePrefix_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Retarget" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "GetBonePrefix", nullptr, nullptr, sizeof(NeuronLiveLinkRemapAsset_eventGetBonePrefix_Parms), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_BoneName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for getting a remapped bone name from the original\n\x09 * The value of BoneName is defined in NeuronLiveLink plugin.\n\x09 * The return value is the whole name of a bone in the user skeleton.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for getting a remapped bone name from the original\nThe value of BoneName is defined in NeuronLiveLink plugin.\nThe return value is the whole name of a bone in the user skeleton." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "GetRemappedBoneName", nullptr, nullptr, sizeof(NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms, CurveName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_CurveName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for getting a remapped curve name from the original */" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for getting a remapped curve name from the original" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "GetRemappedCurveName", nullptr, nullptr, sizeof(NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetSkeletonForwardVector_Parms, Axis), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::NewProp_Axis,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Retarget" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "GetSkeletonForwardVector", nullptr, nullptr, sizeof(NeuronLiveLinkRemapAsset_eventGetSkeletonForwardVector_Parms), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics
	{
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CurveItems;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurveItems_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurveItems_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems = { "CurveItems", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventRemapCurveElements_Parms, CurveItems), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_Key_KeyProp = { "CurveItems_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_ValueProp = { "CurveItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_ValueProp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for remapping, adding or otherwise modifying the curve element data from Live Link. This is run after GetRemappedCurveName */" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for remapping, adding or otherwise modifying the curve element data from Live Link. This is run after GetRemappedCurveName" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "RemapCurveElements", nullptr, nullptr, sizeof(NeuronLiveLinkRemapAsset_eventRemapCurveElements_Parms), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNeuronLiveLinkRemapAsset_NoRegister()
	{
		return UNeuronLiveLinkRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HipsParentsTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HipsParentsTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldPositions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldPositions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldPositions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldRotations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WorldRotations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldRotations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHaveInit_MetaData[];
#endif
		static void NewProp_bHaveInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHaveInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDisplacementData_MetaData[];
#endif
		static void NewProp_bUseDisplacementData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDisplacementData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneMapping_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneMapping;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneMapping_Key_KeyProp;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneMapping_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBoneMapping_MetaData[];
#endif
		static void NewProp_bEnableBoneMapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBoneMapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneNamePrefix_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneNamePrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableBoneNamePrefix_MetaData[];
#endif
		static void NewProp_bEnableBoneNamePrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableBoneNamePrefix;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix, "GetBonePrefix" }, // 2734603904
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName, "GetRemappedBoneName" }, // 3976342666
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName, "GetRemappedCurveName" }, // 757686473
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector, "GetSkeletonForwardVector" }, // 311713177
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements, "RemapCurveElements" }, // 530507303
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* UNeuronLiveLinkRemapAsset  live link remap asset for retargeting\n*/" },
		{ "IncludePath", "NeuronLiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "* UNeuronLiveLinkRemapAsset  live link remap asset for retargeting" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_HipsParentsTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_HipsParentsTransform = { "HipsParentsTransform", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, HipsParentsTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_HipsParentsTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_HipsParentsTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions_MetaData[] = {
		{ "Comment", "// MeshBone\n" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "MeshBone" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions = { "WorldPositions", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, WorldPositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions_Inner = { "WorldPositions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations_MetaData[] = {
		{ "Comment", "// MeshBone \n" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "MeshBone" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations = { "WorldRotations", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, WorldRotations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations_Inner = { "WorldRotations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit_MetaData[] = {
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif
	void Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit_SetBit(void* Obj)
	{
		((UNeuronLiveLinkRemapAsset*)Obj)->bHaveInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit = { "bHaveInit", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNeuronLiveLinkRemapAsset), &Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData_MetaData[] = {
		{ "Category", "AxisNeuron Live Link Retarget" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif
	void Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData_SetBit(void* Obj)
	{
		((UNeuronLiveLinkRemapAsset*)Obj)->bUseDisplacementData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData = { "bUseDisplacementData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNeuronLiveLinkRemapAsset), &Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_MetaData[] = {
		{ "Category", "AxisNeuron Bone Mapping" },
		{ "EditCondition", "bEnableBoneMapping" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping = { "BoneMapping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, BoneMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_Key_KeyProp = { "BoneMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_ValueProp = { "BoneMapping", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping_MetaData[] = {
		{ "Category", "AxisNeuron Bone Mapping" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif
	void Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping_SetBit(void* Obj)
	{
		((UNeuronLiveLinkRemapAsset*)Obj)->bEnableBoneMapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping = { "bEnableBoneMapping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNeuronLiveLinkRemapAsset), &Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneNamePrefix_MetaData[] = {
		{ "Category", "AxisNeuron Bone Mapping" },
		{ "EditCondition", "bEnableBoneNamePrefix" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "NeverAsPin", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneNamePrefix = { "BoneNamePrefix", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, BoneNamePrefix), METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneNamePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneNamePrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix_MetaData[] = {
		{ "Category", "AxisNeuron Bone Mapping" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif
	void Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix_SetBit(void* Obj)
	{
		((UNeuronLiveLinkRemapAsset*)Obj)->bEnableBoneNamePrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix = { "bEnableBoneNamePrefix", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UNeuronLiveLinkRemapAsset), &Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_HipsParentsTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneNamePrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuronLiveLinkRemapAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::ClassParams = {
		&UNeuronLiveLinkRemapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNeuronLiveLinkRemapAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNeuronLiveLinkRemapAsset, 3941239303);
	template<> NEURONLIVELINK_API UClass* StaticClass<UNeuronLiveLinkRemapAsset>()
	{
		return UNeuronLiveLinkRemapAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNeuronLiveLinkRemapAsset(Z_Construct_UClass_UNeuronLiveLinkRemapAsset, &UNeuronLiveLinkRemapAsset::StaticClass, TEXT("/Script/NeuronLiveLink"), TEXT("UNeuronLiveLinkRemapAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuronLiveLinkRemapAsset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
