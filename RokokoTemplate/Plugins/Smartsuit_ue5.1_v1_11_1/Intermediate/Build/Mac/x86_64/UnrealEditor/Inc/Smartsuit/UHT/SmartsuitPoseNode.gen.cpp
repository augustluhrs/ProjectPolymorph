// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitPoseNode.h"
#include "Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitPoseNode() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_URokokoBodyMapData();
	SMARTSUIT_API UClass* Z_Construct_UClass_URokokoBodyMapData_NoRegister();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBodyMap();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References
	DEFINE_FUNCTION(URokokoBodyMapData::execInitializeTMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeTMap();
		P_NATIVE_END;
	}
	void URokokoBodyMapData::StaticRegisterNativesURokokoBodyMapData()
	{
		UClass* Class = URokokoBodyMapData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeTMap", &URokokoBodyMapData::execInitializeTMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URokokoBodyMapData, nullptr, "InitializeTMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URokokoBodyMapData);
	UClass* Z_Construct_UClass_URokokoBodyMapData_NoRegister()
	{
		return URokokoBodyMapData::StaticClass();
	}
	struct Z_Construct_UClass_URokokoBodyMapData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_hip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stomach_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_stomach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chest_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_chest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_neck_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_neck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftArm_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftForearm_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftForearm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightArm_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightForearm_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightForearm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftUpleg_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftUpleg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLeg_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftToe_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftToe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightUpleg_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightUpleg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLeg_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightToe_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightToe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftThumbProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftThumbMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftThumbDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftThumbTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftIndexProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftIndexMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftIndexDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftIndexTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftMiddleProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftMiddleMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftMiddleDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftMiddleTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftRingProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftRingMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftRingDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftRingTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftLittleProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftLittleMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftLittleDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_leftLittleTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightThumbProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightThumbMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightThumbDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightThumbTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightIndexProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightIndexMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightIndexDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightIndexTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightMiddleProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightMiddleMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightMiddleDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightMiddleTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightRingProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightRingMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightRingDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightRingTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleProximal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightLittleProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleMedial_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightLittleMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleDistal_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightLittleDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleTip_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_rightLittleTip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URokokoBodyMapData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRemapAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URokokoBodyMapData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URokokoBodyMapData_InitializeTMap, "InitializeTMap" }, // 1946298246
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SmartsuitPoseNode.h" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_ValueProp = { "NameMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_Key_KeyProp = { "NameMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping = { "NameMapping", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, NameMapping), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_hip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_hip = { "hip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, hip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_hip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_hip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_stomach_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_stomach = { "stomach", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, stomach), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_stomach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_stomach_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_chest_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_chest = { "chest", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, chest), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_chest_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_neck_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_neck = { "neck", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, neck), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_neck_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_head_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, head), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_head_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_head_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftShoulder_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftShoulder), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftShoulder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftArm_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftArm = { "leftArm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftArm), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftForearm_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftForearm = { "leftForearm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftForearm), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftForearm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftHand), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightShoulder_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightShoulder), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightShoulder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightArm_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightArm = { "rightArm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightArm), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightForearm_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightForearm = { "rightForearm", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightForearm), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightForearm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightHand), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftUpleg_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftUpleg = { "leftUpleg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftUpleg), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftUpleg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLeg_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLeg = { "leftLeg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftLeg), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLeg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftFoot_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftFoot), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftFoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftToe_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftToe = { "leftToe", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftToe), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftToe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightUpleg_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightUpleg = { "rightUpleg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightUpleg), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightUpleg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLeg_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLeg = { "rightLeg", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightLeg), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLeg_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightFoot_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightFoot), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightFoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightToe_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightToe = { "rightToe", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightToe), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightToe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbProximal = { "leftThumbProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftThumbProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbMedial = { "leftThumbMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftThumbMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbDistal = { "leftThumbDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftThumbDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbTip = { "leftThumbTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftThumbTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexProximal = { "leftIndexProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftIndexProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexMedial = { "leftIndexMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftIndexMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexDistal = { "leftIndexDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftIndexDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexTip = { "leftIndexTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftIndexTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleProximal = { "leftMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftMiddleProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleMedial = { "leftMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftMiddleMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleDistal = { "leftMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftMiddleDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleTip = { "leftMiddleTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftMiddleTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingProximal = { "leftRingProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftRingProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingMedial = { "leftRingMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftRingMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingDistal = { "leftRingDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftRingDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingTip = { "leftRingTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftRingTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleProximal = { "leftLittleProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftLittleProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleMedial = { "leftLittleMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftLittleMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleDistal = { "leftLittleDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftLittleDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleTip = { "leftLittleTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, leftLittleTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbProximal = { "rightThumbProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightThumbProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbMedial = { "rightThumbMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightThumbMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbDistal = { "rightThumbDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightThumbDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbTip = { "rightThumbTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightThumbTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexProximal = { "rightIndexProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightIndexProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexMedial = { "rightIndexMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightIndexMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexDistal = { "rightIndexDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightIndexDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexTip = { "rightIndexTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightIndexTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleProximal = { "rightMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightMiddleProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleMedial = { "rightMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightMiddleMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleDistal = { "rightMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightMiddleDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleTip = { "rightMiddleTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightMiddleTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingProximal = { "rightRingProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightRingProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingMedial = { "rightRingMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightRingMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingDistal = { "rightRingDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightRingDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingTip = { "rightRingTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightRingTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingTip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleProximal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleProximal = { "rightLittleProximal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightLittleProximal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleProximal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleMedial_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleMedial = { "rightLittleMedial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightLittleMedial), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleMedial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleDistal_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleDistal = { "rightLittleDistal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightLittleDistal), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleDistal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleTip_MetaData[] = {
		{ "Category", "BoneRemapping" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleTip = { "rightLittleTip", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URokokoBodyMapData, rightLittleTip), METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleTip_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URokokoBodyMapData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_NameMapping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_hip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_stomach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_chest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_neck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftShoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftForearm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightShoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightForearm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftUpleg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftToe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightUpleg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightToe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftThumbTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftIndexTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftMiddleTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftRingTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_leftLittleTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightThumbTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightIndexTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightMiddleTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightRingTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URokokoBodyMapData_Statics::NewProp_rightLittleTip,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URokokoBodyMapData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URokokoBodyMapData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URokokoBodyMapData_Statics::ClassParams = {
		&URokokoBodyMapData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URokokoBodyMapData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URokokoBodyMapData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URokokoBodyMapData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URokokoBodyMapData()
	{
		if (!Z_Registration_Info_UClass_URokokoBodyMapData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URokokoBodyMapData.OuterSingleton, Z_Construct_UClass_URokokoBodyMapData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URokokoBodyMapData.OuterSingleton;
	}
	template<> SMARTSUIT_API UClass* StaticClass<URokokoBodyMapData>()
	{
		return URokokoBodyMapData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URokokoBodyMapData);
	URokokoBodyMapData::~URokokoBodyMapData() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartsuitBodyMap;
class UScriptStruct* FSmartsuitBodyMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitBodyMap, Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitBodyMap"));
	}
	return Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitBodyMap>()
{
	return FSmartsuitBodyMap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stomach_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_stomach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_chest_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_chest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_neck_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_neck;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_head_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_head;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftShoulder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftForearm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftForearm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightShoulder_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightShoulder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightArm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightForearm_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightForearm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightHand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftUpleg_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftUpleg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLeg_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftFoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftToe_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftToe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightUpleg_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightUpleg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLeg_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLeg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightFoot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightFoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightToe_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightToe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftThumbTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftThumbTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftIndexProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftIndexMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftIndexDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftIndexTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftIndexTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftMiddleTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftMiddleTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftRingTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftRingTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftLittleTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_leftLittleTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightThumbTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightThumbTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightIndexProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightIndexMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightIndexDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightIndexTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightIndexTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightMiddleTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightMiddleTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightRingTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightRingTip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleProximal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleProximal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleMedial_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleMedial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleDistal_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleDistal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightLittleTip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rightLittleTip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*! \\brief Bone reference mapping that is used to map bones between Smartsuit sensors and skeleton.*/" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "! \\brief Bone reference mapping that is used to map bones between Smartsuit sensors and skeleton." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitBodyMap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The hip bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip = { "hip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, hip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The stomach bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach = { "stomach", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, stomach), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The chest bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest = { "chest", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, chest), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The neck bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck = { "neck", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, neck), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The head bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head = { "head", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, head), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left shoulder bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder = { "leftShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left upper arm bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm = { "leftArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left lower arm bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm = { "leftForearm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftForearm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left hand bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand = { "leftHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right shoulder bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder = { "rightShoulder", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightShoulder), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right upper arm bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm = { "rightArm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightArm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right lower arm bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm = { "rightForearm", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightForearm), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right hand bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand = { "rightHand", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightHand), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left upper leg bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg = { "leftUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftUpleg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left lower leg bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg = { "leftLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left foot bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot = { "leftFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The left toe bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe = { "leftToe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right upper leg bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg = { "rightUpleg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightUpleg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right lower leg bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg = { "rightLeg", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightLeg), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right foot bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot = { "rightFoot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightFoot), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "The right toe bone to control." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe = { "rightToe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightToe), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal = { "leftThumbProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial = { "leftThumbMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal = { "leftThumbDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip = { "leftThumbTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftThumbTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal = { "leftIndexProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial = { "leftIndexMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal = { "leftIndexDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip = { "leftIndexTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftIndexTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal = { "leftMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial = { "leftMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal = { "leftMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip = { "leftMiddleTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftMiddleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal = { "leftRingProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial = { "leftRingMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal = { "leftRingDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip = { "leftRingTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftRingTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal = { "leftLittleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial = { "leftLittleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal = { "leftLittleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip = { "leftLittleTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, leftLittleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal = { "rightThumbProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial = { "rightThumbMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal = { "rightThumbDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip = { "rightThumbTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightThumbTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal = { "rightIndexProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial = { "rightIndexMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal = { "rightIndexDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip = { "rightIndexTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightIndexTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal = { "rightMiddleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial = { "rightMiddleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal = { "rightMiddleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip = { "rightMiddleTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightMiddleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal = { "rightRingProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial = { "rightRingMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal = { "rightRingDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip = { "rightRingTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightRingTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal = { "rightLittleProximal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleProximal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial = { "rightLittleMedial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleMedial), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal = { "rightLittleDistal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleDistal), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip = { "rightLittleTip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitBodyMap, rightLittleTip), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip_MetaData)) }; // 2906976723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_hip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_stomach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_chest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_neck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_head,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftShoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftForearm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightShoulder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightForearm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftUpleg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftToe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightUpleg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLeg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightFoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightToe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftThumbTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftIndexTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftMiddleTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftRingTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_leftLittleTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightThumbTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightIndexTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightMiddleTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightRingTip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleProximal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleMedial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleDistal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewProp_rightLittleTip,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"SmartsuitBodyMap",
		sizeof(FSmartsuitBodyMap),
		alignof(FSmartsuitBodyMap),
		Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitBodyMap()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.InnerSingleton, Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartsuitBodyMap.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSmartsuitPoseNode>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FSmartsuitPoseNode cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SmartsuitPoseNode;
class UScriptStruct* FSmartsuitPoseNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSmartsuitPoseNode, Z_Construct_UPackage__Script_Smartsuit(), TEXT("SmartsuitPoseNode"));
	}
	return Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FSmartsuitPoseNode>()
{
	return FSmartsuitPoseNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneMap_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RokokoActorName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RokokoActorName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*! \\brief An animation controller which poses a humanoid character to the pose as received from the Smartsuit.\n*\n* This is the main animation blueprint node for Smartsuit. It takes as input a character in T-pose along with a mapping of the bones necessary to drive the animation.\n* Then it rotates the bones and translates the hip so the character behaves as the player in the Smartsuit.\n*/" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "! \\brief An animation controller which poses a humanoid character to the pose as received from the Smartsuit.\n*\n* This is the main animation blueprint node for Smartsuit. It takes as input a character in T-pose along with a mapping of the bones necessary to drive the animation.\n* Then it rotates the bones and translates the hip so the character behaves as the player in the Smartsuit." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSmartsuitPoseNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap_MetaData[] = {
		{ "Comment", "/*EditAnywhere, BlueprintReadWrite, Category = SmartsuitAnimationSetup, meta = (NeverAsPin, ToolTip = \"A mapping between the Smartsuit expected bone names and the bones that will animate from the Smartsuit component. Every bone is required for the animation to work properly.\")*/" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "ToolTip", "EditAnywhere, BlueprintReadWrite, Category = SmartsuitAnimationSetup, meta = (NeverAsPin, ToolTip = \"A mapping between the Smartsuit expected bone names and the bones that will animate from the Smartsuit component. Every bone is required for the animation to work properly.\")" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap = { "BoneMap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitPoseNode, BoneMap), Z_Construct_UScriptStruct_FSmartsuitBodyMap, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap_MetaData)) }; // 3940597144
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = SmartsuitAnimationSetup)\n//USmartsuitBodyMapData* Bone_Map_Override_OLD;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = SmartsuitAnimationSetup)\nUSmartsuitBodyMapData* Bone_Map_Override_OLD;" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitPoseNode, RetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitPoseNode, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRemapAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_CurrentRetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_CurrentRetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName_MetaData[] = {
		{ "Category", "SourceData" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\n//FLiveLinkSubjectName LiveLinkSubjectName;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitPoseNode.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\nFLiveLinkSubjectName LiveLinkSubjectName;" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName = { "RokokoActorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSmartsuitPoseNode, RokokoActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_BoneMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_CurrentRetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewProp_RokokoActorName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"SmartsuitPoseNode",
		sizeof(FSmartsuitPoseNode),
		alignof(FSmartsuitPoseNode),
		Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.InnerSingleton, Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SmartsuitPoseNode.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics::ScriptStructInfo[] = {
		{ FSmartsuitBodyMap::StaticStruct, Z_Construct_UScriptStruct_FSmartsuitBodyMap_Statics::NewStructOps, TEXT("SmartsuitBodyMap"), &Z_Registration_Info_UScriptStruct_SmartsuitBodyMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartsuitBodyMap), 3940597144U) },
		{ FSmartsuitPoseNode::StaticStruct, Z_Construct_UScriptStruct_FSmartsuitPoseNode_Statics::NewStructOps, TEXT("SmartsuitPoseNode"), &Z_Registration_Info_UScriptStruct_SmartsuitPoseNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSmartsuitPoseNode), 663359403U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URokokoBodyMapData, URokokoBodyMapData::StaticClass, TEXT("URokokoBodyMapData"), &Z_Registration_Info_UClass_URokokoBodyMapData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URokokoBodyMapData), 1907899035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitPoseNode_h_4157024070(TEXT("/Script/Smartsuit"),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitPoseNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
