// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NeuronLiveLink/Public/NeuronLiveLinkRemapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNeuronLiveLinkRemapAsset() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAxisOption();
LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkRemapAsset();
NEURONLIVELINK_API UClass* Z_Construct_UClass_UNeuronLiveLinkRemapAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_NeuronLiveLink();
// End Cross Module References

// Begin Class UNeuronLiveLinkRemapAsset Function GetBonePrefix
struct NeuronLiveLinkRemapAsset_eventGetBonePrefix_Parms
{
	FName ReturnValue;
};
static const FName NAME_UNeuronLiveLinkRemapAsset_GetBonePrefix = FName(TEXT("GetBonePrefix"));
FName UNeuronLiveLinkRemapAsset::GetBonePrefix() const
{
	UFunction* Func = FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_GetBonePrefix);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NeuronLiveLinkRemapAsset_eventGetBonePrefix_Parms Parms;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNeuronLiveLinkRemapAsset*>(this)->GetBonePrefix_Implementation();
	}
}
struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Retarget" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetBonePrefix_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "GetBonePrefix", nullptr, nullptr, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::PropPointers), sizeof(NeuronLiveLinkRemapAsset_eventGetBonePrefix_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::Function_MetaDataParams) };
static_assert(sizeof(NeuronLiveLinkRemapAsset_eventGetBonePrefix_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execGetBonePrefix)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetBonePrefix_Implementation();
	P_NATIVE_END;
}
// End Class UNeuronLiveLinkRemapAsset Function GetBonePrefix

// Begin Class UNeuronLiveLinkRemapAsset Function GetRemappedBoneName
struct NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms
{
	FName BoneName;
	FName ReturnValue;
};
static const FName NAME_UNeuronLiveLinkRemapAsset_GetRemappedBoneName = FName(TEXT("GetRemappedBoneName"));
FName UNeuronLiveLinkRemapAsset::GetRemappedBoneName(FName BoneName) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_GetRemappedBoneName);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms Parms;
		Parms.BoneName=BoneName;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNeuronLiveLinkRemapAsset*>(this)->GetRemappedBoneName_Implementation(BoneName);
	}
}
struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for getting a remapped bone name from the original\n\x09 * The value of BoneName is defined in NeuronLiveLink plugin.\n\x09 * The return value is the whole name of a bone in the user skeleton.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for getting a remapped bone name from the original\nThe value of BoneName is defined in NeuronLiveLink plugin.\nThe return value is the whole name of a bone in the user skeleton." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "GetRemappedBoneName", nullptr, nullptr, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::PropPointers), sizeof(NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::Function_MetaDataParams) };
static_assert(sizeof(NeuronLiveLinkRemapAsset_eventGetRemappedBoneName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execGetRemappedBoneName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetRemappedBoneName_Implementation(Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UNeuronLiveLinkRemapAsset Function GetRemappedBoneName

// Begin Class UNeuronLiveLinkRemapAsset Function GetRemappedCurveName
struct NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms
{
	FName CurveName;
	FName ReturnValue;
};
static const FName NAME_UNeuronLiveLinkRemapAsset_GetRemappedCurveName = FName(TEXT("GetRemappedCurveName"));
FName UNeuronLiveLinkRemapAsset::GetRemappedCurveName(FName CurveName) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_GetRemappedCurveName);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms Parms;
		Parms.CurveName=CurveName;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UNeuronLiveLinkRemapAsset*>(this)->GetRemappedCurveName_Implementation(CurveName);
	}
}
struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for getting a remapped curve name from the original */" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for getting a remapped curve name from the original" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_CurveName = { "CurveName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms, CurveName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_CurveName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "GetRemappedCurveName", nullptr, nullptr, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::PropPointers), sizeof(NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::Function_MetaDataParams) };
static_assert(sizeof(NeuronLiveLinkRemapAsset_eventGetRemappedCurveName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execGetRemappedCurveName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_CurveName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetRemappedCurveName_Implementation(Z_Param_CurveName);
	P_NATIVE_END;
}
// End Class UNeuronLiveLinkRemapAsset Function GetRemappedCurveName

// Begin Class UNeuronLiveLinkRemapAsset Function GetSkeletonForwardVector
struct NeuronLiveLinkRemapAsset_eventGetSkeletonForwardVector_Parms
{
	TEnumAsByte<EAxisOption::Type> Axis;
};
static const FName NAME_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector = FName(TEXT("GetSkeletonForwardVector"));
void UNeuronLiveLinkRemapAsset::GetSkeletonForwardVector(TEnumAsByte<EAxisOption::Type>& Axis) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NeuronLiveLinkRemapAsset_eventGetSkeletonForwardVector_Parms Parms;
		Parms.Axis=Axis;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(Func,&Parms);
		Axis=Parms.Axis;
	}
	else
	{
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->GetSkeletonForwardVector_Implementation(Axis);
	}
}
struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Retarget" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventGetSkeletonForwardVector_Parms, Axis), Z_Construct_UEnum_Engine_EAxisOption, METADATA_PARAMS(0, nullptr) }; // 3674839467
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::NewProp_Axis,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "GetSkeletonForwardVector", nullptr, nullptr, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::PropPointers), sizeof(NeuronLiveLinkRemapAsset_eventGetSkeletonForwardVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(NeuronLiveLinkRemapAsset_eventGetSkeletonForwardVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execGetSkeletonForwardVector)
{
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_Axis);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetSkeletonForwardVector_Implementation((TEnumAsByte<EAxisOption::Type>&)(Z_Param_Out_Axis));
	P_NATIVE_END;
}
// End Class UNeuronLiveLinkRemapAsset Function GetSkeletonForwardVector

// Begin Class UNeuronLiveLinkRemapAsset Function RemapCurveElements
struct NeuronLiveLinkRemapAsset_eventRemapCurveElements_Parms
{
	TMap<FName,float> CurveItems;
};
static const FName NAME_UNeuronLiveLinkRemapAsset_RemapCurveElements = FName(TEXT("RemapCurveElements"));
void UNeuronLiveLinkRemapAsset::RemapCurveElements(TMap<FName,float>& CurveItems) const
{
	UFunction* Func = FindFunctionChecked(NAME_UNeuronLiveLinkRemapAsset_RemapCurveElements);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		NeuronLiveLinkRemapAsset_eventRemapCurveElements_Parms Parms;
		Parms.CurveItems=CurveItems;
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->ProcessEvent(Func,&Parms);
		CurveItems=Parms.CurveItems;
	}
	else
	{
		const_cast<UNeuronLiveLinkRemapAsset*>(this)->RemapCurveElements_Implementation(CurveItems);
	}
}
struct Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AxisNeuron Live Link Remap" },
		{ "Comment", "/** Blueprint Implementable function for remapping, adding or otherwise modifying the curve element data from Live Link. This is run after GetRemappedCurveName */" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "Blueprint Implementable function for remapping, adding or otherwise modifying the curve element data from Live Link. This is run after GetRemappedCurveName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveItems_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurveItems_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurveItems;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_ValueProp = { "CurveItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_Key_KeyProp = { "CurveItems_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems = { "CurveItems", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NeuronLiveLinkRemapAsset_eventRemapCurveElements_Parms, CurveItems), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::NewProp_CurveItems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNeuronLiveLinkRemapAsset, nullptr, "RemapCurveElements", nullptr, nullptr, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::PropPointers), sizeof(NeuronLiveLinkRemapAsset_eventRemapCurveElements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::Function_MetaDataParams) };
static_assert(sizeof(NeuronLiveLinkRemapAsset_eventRemapCurveElements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNeuronLiveLinkRemapAsset::execRemapCurveElements)
{
	P_GET_TMAP_REF(FName,float,Z_Param_Out_CurveItems);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemapCurveElements_Implementation(Z_Param_Out_CurveItems);
	P_NATIVE_END;
}
// End Class UNeuronLiveLinkRemapAsset Function RemapCurveElements

// Begin Class UNeuronLiveLinkRemapAsset
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
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNeuronLiveLinkRemapAsset);
UClass* Z_Construct_UClass_UNeuronLiveLinkRemapAsset_NoRegister()
{
	return UNeuronLiveLinkRemapAsset::StaticClass();
}
struct Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* UNeuronLiveLinkRemapAsset  live link remap asset for retargeting\n*/" },
		{ "IncludePath", "NeuronLiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "* UNeuronLiveLinkRemapAsset  live link remap asset for retargeting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBoneNamePrefix_MetaData[] = {
		{ "Category", "AxisNeuron Bone Mapping" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneNamePrefix_MetaData[] = {
		{ "Category", "AxisNeuron Bone Mapping" },
		{ "EditCondition", "bEnableBoneNamePrefix" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "NeverAsPin", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBoneMapping_MetaData[] = {
		{ "Category", "AxisNeuron Bone Mapping" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneMapping_MetaData[] = {
		{ "Category", "AxisNeuron Bone Mapping" },
		{ "EditCondition", "bEnableBoneMapping" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "NeverAsPin", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDisplacementData_MetaData[] = {
		{ "Category", "AxisNeuron Live Link Retarget" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHaveInit_MetaData[] = {
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRotations_MetaData[] = {
		{ "Comment", "// MeshBone \n" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "MeshBone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositions_MetaData[] = {
		{ "Comment", "// MeshBone\n" },
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
		{ "ToolTip", "MeshBone" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HipsParentsTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/NeuronLiveLinkRemapAsset.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableBoneNamePrefix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBoneNamePrefix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BoneNamePrefix;
	static void NewProp_bEnableBoneMapping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBoneMapping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneMapping_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BoneMapping;
	static void NewProp_bUseDisplacementData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDisplacementData;
	static void NewProp_bHaveInit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHaveInit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldRotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldRotations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HipsParentsTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetBonePrefix, "GetBonePrefix" }, // 440697674
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedBoneName, "GetRemappedBoneName" }, // 584618981
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetRemappedCurveName, "GetRemappedCurveName" }, // 1710059012
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_GetSkeletonForwardVector, "GetSkeletonForwardVector" }, // 1106725090
		{ &Z_Construct_UFunction_UNeuronLiveLinkRemapAsset_RemapCurveElements, "RemapCurveElements" }, // 3204299113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNeuronLiveLinkRemapAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix_SetBit(void* Obj)
{
	((UNeuronLiveLinkRemapAsset*)Obj)->bEnableBoneNamePrefix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix = { "bEnableBoneNamePrefix", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNeuronLiveLinkRemapAsset), &Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBoneNamePrefix_MetaData), NewProp_bEnableBoneNamePrefix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneNamePrefix = { "BoneNamePrefix", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, BoneNamePrefix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneNamePrefix_MetaData), NewProp_BoneNamePrefix_MetaData) };
void Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping_SetBit(void* Obj)
{
	((UNeuronLiveLinkRemapAsset*)Obj)->bEnableBoneMapping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping = { "bEnableBoneMapping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNeuronLiveLinkRemapAsset), &Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBoneMapping_MetaData), NewProp_bEnableBoneMapping_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_ValueProp = { "BoneMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_Key_KeyProp = { "BoneMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping = { "BoneMapping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, BoneMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneMapping_MetaData), NewProp_BoneMapping_MetaData) };
void Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData_SetBit(void* Obj)
{
	((UNeuronLiveLinkRemapAsset*)Obj)->bUseDisplacementData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData = { "bUseDisplacementData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNeuronLiveLinkRemapAsset), &Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDisplacementData_MetaData), NewProp_bUseDisplacementData_MetaData) };
void Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit_SetBit(void* Obj)
{
	((UNeuronLiveLinkRemapAsset*)Obj)->bHaveInit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit = { "bHaveInit", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNeuronLiveLinkRemapAsset), &Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHaveInit_MetaData), NewProp_bHaveInit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations_Inner = { "WorldRotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations = { "WorldRotations", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, WorldRotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRotations_MetaData), NewProp_WorldRotations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions_Inner = { "WorldPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions = { "WorldPositions", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, WorldPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositions_MetaData), NewProp_WorldPositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_HipsParentsTransform = { "HipsParentsTransform", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNeuronLiveLinkRemapAsset, HipsParentsTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HipsParentsTransform_MetaData), NewProp_HipsParentsTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneNamePrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneNamePrefix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bEnableBoneMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_BoneMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bUseDisplacementData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_bHaveInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldRotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_WorldPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::NewProp_HipsParentsTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_NeuronLiveLink,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::ClassParams = {
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNeuronLiveLinkRemapAsset()
{
	if (!Z_Registration_Info_UClass_UNeuronLiveLinkRemapAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNeuronLiveLinkRemapAsset.OuterSingleton, Z_Construct_UClass_UNeuronLiveLinkRemapAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNeuronLiveLinkRemapAsset.OuterSingleton;
}
template<> NEURONLIVELINK_API UClass* StaticClass<UNeuronLiveLinkRemapAsset>()
{
	return UNeuronLiveLinkRemapAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNeuronLiveLinkRemapAsset);
UNeuronLiveLinkRemapAsset::~UNeuronLiveLinkRemapAsset() {}
// End Class UNeuronLiveLinkRemapAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNeuronLiveLinkRemapAsset, UNeuronLiveLinkRemapAsset::StaticClass, TEXT("UNeuronLiveLinkRemapAsset"), &Z_Registration_Info_UClass_UNeuronLiveLinkRemapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNeuronLiveLinkRemapAsset), 1378072924U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_278302193(TEXT("/Script/NeuronLiveLink"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_NeuronLiveLink_Source_NeuronLiveLink_Public_NeuronLiveLinkRemapAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
