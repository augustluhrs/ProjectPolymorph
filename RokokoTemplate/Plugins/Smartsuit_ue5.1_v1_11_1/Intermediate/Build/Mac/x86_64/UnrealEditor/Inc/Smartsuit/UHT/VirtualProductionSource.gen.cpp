// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/VirtualProductionSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionSource() {}
// Cross Module References
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
	SMARTSUIT_API UClass* Z_Construct_UClass_URokokoFaceMapData();
	SMARTSUIT_API UClass* Z_Construct_UClass_URokokoFaceMapData_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References
	DEFINE_FUNCTION(URokokoFaceMapData::execInitializeTMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTMap();
		P_NATIVE_END;
	}
	void URokokoFaceMapData::StaticRegisterNativesURokokoFaceMapData()
	{
		UClass* Class = URokokoFaceMapData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeTMap", &URokokoFaceMapData::execInitializeTMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoFaceMapData, nullptr, "InitializeTMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URokokoFaceMapData);
	UClass* Z_Construct_UClass_URokokoFaceMapData_NoRegister()
	{
		return URokokoFaceMapData::StaticClass();
	}
	struct Z_Construct_UClass_URokokoFaceMapData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameMapping_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NameMapping_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NameMapping_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NameMapping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browDownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_browDownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browDownRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_browDownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browInnerUp_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_browInnerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_browOuterUpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_browOuterUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheekPuff_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_cheekPuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_cheekSquintLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_cheekSquintRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeBlinkLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeBlinkRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookDownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookDownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookInLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookInRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookOutLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookOutRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookUpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeLookUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeSquintLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeSquintRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeWideLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_eyeWideRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawOpen_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_jawOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawForward_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_jawForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_jawLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_jawRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthClose_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthClose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthDimpleLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthDimpleRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthFrownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthFrownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthFunnel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthFunnel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthLowerDownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthLowerDownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthPressLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthPressRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthPucker_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthPucker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollLower_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthRollLower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollUpper_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthRollUpper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugLower_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthShrugLower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugUpper_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthShrugUpper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthSmileLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthSmileRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthStretchLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthStretchRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthUpperUpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_mouthUpperUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerLeft_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_noseSneerLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerRight_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_noseSneerRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tongueOut_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_tongueOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URokokoFaceMapData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URokokoFaceMapData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URokokoFaceMapData_InitializeTMap, "InitializeTMap" }, // 862229475
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//USTRUCT()\n//struct FVPMorphTargetMapping\n//{\n//\x09GENERATED_BODY()\n//\n//\x09UPROPERTY()\n//\x09\x09""FName CurveName;\n//\n//\x09UPROPERTY()\n//\x09\x09""FName CurveNameOverride;\n//};\n" },
		{ "IncludePath", "VirtualProductionSource.h" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
		{ "ToolTip", "USTRUCT()\nstruct FVPMorphTargetMapping\n{\n       GENERATED_BODY()\n\n       UPROPERTY()\n               FName CurveName;\n\n       UPROPERTY()\n               FName CurveNameOverride;\n};" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_ValueProp = { "NameMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_Key_KeyProp = { "NameMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping = { "NameMapping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, NameMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft = { "browDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, browDownLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight = { "browDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, browDownRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp = { "browInnerUp", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, browInnerUp), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft = { "browOuterUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, browOuterUpLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight = { "browOuterUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, browOuterUpRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff = { "cheekPuff", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, cheekPuff), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft = { "cheekSquintLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, cheekSquintLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight = { "cheekSquintRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, cheekSquintRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft = { "eyeBlinkLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeBlinkLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight = { "eyeBlinkRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeBlinkRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft = { "eyeLookDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeLookDownLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight = { "eyeLookDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeLookDownRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft = { "eyeLookInLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeLookInLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight = { "eyeLookInRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeLookInRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft = { "eyeLookOutLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeLookOutLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight = { "eyeLookOutRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeLookOutRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft = { "eyeLookUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeLookUpLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight = { "eyeLookUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeLookUpRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft = { "eyeSquintLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeSquintLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight = { "eyeSquintRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeSquintRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft = { "eyeWideLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeWideLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight = { "eyeWideRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, eyeWideRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen = { "jawOpen", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, jawOpen), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward = { "jawForward", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, jawForward), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft = { "jawLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, jawLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight = { "jawRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, jawRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose = { "mouthClose", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthClose), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft = { "mouthDimpleLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthDimpleLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight = { "mouthDimpleRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthDimpleRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft = { "mouthFrownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthFrownLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight = { "mouthFrownRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthFrownRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel = { "mouthFunnel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthFunnel), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft = { "mouthLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft = { "mouthLowerDownLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthLowerDownLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight = { "mouthLowerDownRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthLowerDownRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft = { "mouthPressLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthPressLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight = { "mouthPressRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthPressRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker = { "mouthPucker", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthPucker), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight = { "mouthRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower = { "mouthRollLower", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthRollLower), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper = { "mouthRollUpper", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthRollUpper), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower = { "mouthShrugLower", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthShrugLower), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper = { "mouthShrugUpper", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthShrugUpper), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft = { "mouthSmileLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthSmileLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight = { "mouthSmileRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthSmileRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft = { "mouthStretchLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthStretchLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight = { "mouthStretchRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthStretchRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft = { "mouthUpperUpLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthUpperUpLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight = { "mouthUpperUpRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, mouthUpperUpRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft = { "noseSneerLeft", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, noseSneerLeft), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight = { "noseSneerRight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, noseSneerRight), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut_MetaData[] = {
		{ "Category", "MorphTargetRemapping" },
		{ "ModuleRelativePath", "Public/VirtualProductionSource.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut = { "tongueOut", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoFaceMapData, tongueOut), METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_NameMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browDownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browInnerUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_browOuterUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekPuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_cheekSquintRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeBlinkRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookDownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookInRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookOutRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeLookUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeSquintRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_eyeWideRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_jawRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthDimpleRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFrownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthFunnel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthLowerDownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPressRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthPucker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollLower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthRollUpper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugLower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthShrugUpper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthSmileRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthStretchRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_mouthUpperUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_noseSneerRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoFaceMapData_Statics::NewProp_tongueOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URokokoFaceMapData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URokokoFaceMapData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URokokoFaceMapData_Statics::ClassParams = {
		&URokokoFaceMapData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URokokoFaceMapData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoFaceMapData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URokokoFaceMapData()
	{
		if (!Z_Registration_Info_UClass_URokokoFaceMapData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URokokoFaceMapData.OuterSingleton, Z_Construct_UClass_URokokoFaceMapData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URokokoFaceMapData.OuterSingleton;
	}
	template<> SMARTSUIT_API UClass* StaticClass<URokokoFaceMapData>()
	{
		return URokokoFaceMapData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URokokoFaceMapData);
	URokokoFaceMapData::~URokokoFaceMapData() {}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URokokoFaceMapData, URokokoFaceMapData::StaticClass, TEXT("URokokoFaceMapData"), &Z_Registration_Info_UClass_URokokoFaceMapData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URokokoFaceMapData), 1601248299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionSource_h_1578262949(TEXT("/Script/Smartsuit"),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
