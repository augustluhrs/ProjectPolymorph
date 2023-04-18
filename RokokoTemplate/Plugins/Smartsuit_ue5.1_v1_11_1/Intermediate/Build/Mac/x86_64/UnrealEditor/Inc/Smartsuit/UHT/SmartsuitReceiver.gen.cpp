// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitReceiver.h"
#include "Smartsuit/Public/SmartsuitDefinitions.h"
#include "Smartsuit/Public/VirtualProductionFrame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitReceiver() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SMARTSUIT_API UClass* Z_Construct_UClass_ARokokoReceiver();
	SMARTSUIT_API UClass* Z_Construct_UClass_ARokokoReceiver_NoRegister();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FFace();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FProp();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSuitData();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FTracker();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References
	DEFINE_FUNCTION(ARokokoReceiver::execUPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_position);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=ARokokoReceiver::UPosition(Z_Param_position);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execFQuatToRotator)
	{
		P_GET_STRUCT(FQuat,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=ARokokoReceiver::FQuatToRotator(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetTracker)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL(Z_Param_isLive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTracker*)Z_Param__Result=ARokokoReceiver::GetTracker(Z_Param_name,Z_Param_isLive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetProp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_STRUCT_REF(FProp,Z_Param_Out_OutProp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetProp(Z_Param_name,Z_Param_Out_OutProp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetAllProps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FProp>*)Z_Param__Result=ARokokoReceiver::GetAllProps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetTrackerByConnectionIDFromVP)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL(Z_Param_isLive);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTracker*)Z_Param__Result=P_THIS->GetTrackerByConnectionIDFromVP(Z_Param_name,Z_Param_isLive,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetAllSmartsuits)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FSuitData>*)Z_Param__Result=P_THIS->GetAllSmartsuits();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetAvailableSmartsuitNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetAvailableSmartsuitNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetSmartsuitByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_suitName);
		P_GET_STRUCT_REF(FSuitData,Z_Param_Out_SuitData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetSmartsuitByName(Z_Param_suitName,Z_Param_Out_SuitData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetFacesNotAssociatedWithActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFace>*)Z_Param__Result=P_THIS->GetFacesNotAssociatedWithActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetAllFaces)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FFace>*)Z_Param__Result=P_THIS->GetAllFaces();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetFaceByProfileName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_faceName);
		P_GET_UBOOL_REF(Z_Param_Out_found);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFace*)Z_Param__Result=P_THIS->GetFaceByProfileName(Z_Param_faceName,Z_Param_Out_found);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execGetFaceByFaceID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_faceName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FFace*)Z_Param__Result=P_THIS->GetFaceByFaceID(Z_Param_faceName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execStopListener)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopListener();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoReceiver::execStartListener)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartListener();
		P_NATIVE_END;
	}
	void ARokokoReceiver::StaticRegisterNativesARokokoReceiver()
	{
		UClass* Class = ARokokoReceiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FQuatToRotator", &ARokokoReceiver::execFQuatToRotator },
			{ "GetAllFaces", &ARokokoReceiver::execGetAllFaces },
			{ "GetAllProps", &ARokokoReceiver::execGetAllProps },
			{ "GetAllSmartsuits", &ARokokoReceiver::execGetAllSmartsuits },
			{ "GetAvailableSmartsuitNames", &ARokokoReceiver::execGetAvailableSmartsuitNames },
			{ "GetFaceByFaceID", &ARokokoReceiver::execGetFaceByFaceID },
			{ "GetFaceByProfileName", &ARokokoReceiver::execGetFaceByProfileName },
			{ "GetFacesNotAssociatedWithActor", &ARokokoReceiver::execGetFacesNotAssociatedWithActor },
			{ "GetProp", &ARokokoReceiver::execGetProp },
			{ "GetSmartsuitByName", &ARokokoReceiver::execGetSmartsuitByName },
			{ "GetTracker", &ARokokoReceiver::execGetTracker },
			{ "GetTrackerByConnectionIDFromVP", &ARokokoReceiver::execGetTrackerByConnectionIDFromVP },
			{ "StartListener", &ARokokoReceiver::execStartListener },
			{ "StopListener", &ARokokoReceiver::execStopListener },
			{ "UPosition", &ARokokoReceiver::execUPosition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics
	{
		struct RokokoReceiver_eventFQuatToRotator_Parms
		{
			FQuat rotation;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventFQuatToRotator_Parms, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventFQuatToRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Converts Quaternions into rotators." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "FQuatToRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::RokokoReceiver_eventFQuatToRotator_Parms), Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics
	{
		struct RokokoReceiver_eventGetAllFaces_Parms
		{
			TArray<FFace> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(nullptr, 0) }; // 2470408225
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetAllFaces_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2470408225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetAllFaces", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::RokokoReceiver_eventGetAllFaces_Parms), Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetAllFaces()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetAllFaces_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics
	{
		struct RokokoReceiver_eventGetAllProps_Parms
		{
			TArray<FProp> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(nullptr, 0) }; // 2577649799
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetAllProps_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2577649799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve all props." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetAllProps", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::RokokoReceiver_eventGetAllProps_Parms), Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetAllProps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetAllProps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics
	{
		struct RokokoReceiver_eventGetAllSmartsuits_Parms
		{
			TArray<FSuitData> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSuitData, METADATA_PARAMS(nullptr, 0) }; // 2680328340
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetAllSmartsuits_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2680328340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetAllSmartsuits", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::RokokoReceiver_eventGetAllSmartsuits_Parms), Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics
	{
		struct RokokoReceiver_eventGetAvailableSmartsuitNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetAvailableSmartsuitNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n\x09* Lists the names of all known Smartsuits connected to this computer.\n\x09* It will only list the currently active Smartsuits.\n\x09*\n\x09* @return Returns an array with all the available in the network Smartsuit names.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Lists the names of all known Smartsuits connected to this computer.\nIt will only list the currently active Smartsuits.\n\n@return Returns an array with all the available in the network Smartsuit names." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetAvailableSmartsuitNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::RokokoReceiver_eventGetAvailableSmartsuitNames_Parms), Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics
	{
		struct RokokoReceiver_eventGetFaceByFaceID_Parms
		{
			FString faceName;
			FFace ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_faceName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::NewProp_faceName = { "faceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetFaceByFaceID_Parms, faceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetFaceByFaceID_Parms, ReturnValue), Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(nullptr, 0) }; // 2470408225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::NewProp_faceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetFaceByFaceID", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::RokokoReceiver_eventGetFaceByFaceID_Parms), Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics
	{
		struct RokokoReceiver_eventGetFaceByProfileName_Parms
		{
			FString faceName;
			bool found;
			FFace ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_faceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_faceName;
		static void NewProp_found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_faceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_faceName = { "faceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetFaceByProfileName_Parms, faceName), METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_faceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_faceName_MetaData)) };
	void Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_found_SetBit(void* Obj)
	{
		((RokokoReceiver_eventGetFaceByProfileName_Parms*)Obj)->found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RokokoReceiver_eventGetFaceByProfileName_Parms), &Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetFaceByProfileName_Parms, ReturnValue), Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(nullptr, 0) }; // 2470408225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_faceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetFaceByProfileName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::RokokoReceiver_eventGetFaceByProfileName_Parms), Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics
	{
		struct RokokoReceiver_eventGetFacesNotAssociatedWithActor_Parms
		{
			TArray<FFace> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(nullptr, 0) }; // 2470408225
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetFacesNotAssociatedWithActor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2470408225
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetFacesNotAssociatedWithActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::RokokoReceiver_eventGetFacesNotAssociatedWithActor_Parms), Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics
	{
		struct RokokoReceiver_eventGetProp_Parms
		{
			FString name;
			FProp OutProp;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutProp;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetProp_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::NewProp_OutProp = { "OutProp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetProp_Parms, OutProp), Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(nullptr, 0) }; // 2577649799
	void Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RokokoReceiver_eventGetProp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RokokoReceiver_eventGetProp_Parms), &Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::NewProp_OutProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve a prop by name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetProp", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::RokokoReceiver_eventGetProp_Parms), Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetProp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetProp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics
	{
		struct RokokoReceiver_eventGetSmartsuitByName_Parms
		{
			FString suitName;
			FSuitData SuitData;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_suitName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_suitName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuitData;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_suitName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_suitName = { "suitName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetSmartsuitByName_Parms, suitName), METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_suitName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_suitName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_SuitData = { "SuitData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetSmartsuitByName_Parms, SuitData), Z_Construct_UScriptStruct_FSuitData, METADATA_PARAMS(nullptr, 0) }; // 2680328340
	void Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RokokoReceiver_eventGetSmartsuitByName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RokokoReceiver_eventGetSmartsuitByName_Parms), &Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_suitName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_SuitData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetSmartsuitByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::RokokoReceiver_eventGetSmartsuitByName_Parms), Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics
	{
		struct RokokoReceiver_eventGetTracker_Parms
		{
			FString name;
			bool isLive;
			FTracker ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static void NewProp_isLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetTracker_Parms, name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((RokokoReceiver_eventGetTracker_Parms*)Obj)->isLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RokokoReceiver_eventGetTracker_Parms), &Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetTracker_Parms, ReturnValue), Z_Construct_UScriptStruct_FTracker, METADATA_PARAMS(nullptr, 0) }; // 2791865882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::NewProp_isLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Calls a function in VPStreamingNetwork to retrieve a tracker by name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetTracker", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::RokokoReceiver_eventGetTracker_Parms), Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetTracker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetTracker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics
	{
		struct RokokoReceiver_eventGetTrackerByConnectionIDFromVP_Parms
		{
			FString name;
			bool isLive;
			bool found;
			FTracker ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static void NewProp_isLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
		static void NewProp_found_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_found;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetTrackerByConnectionIDFromVP_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name_MetaData)) };
	void Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((RokokoReceiver_eventGetTrackerByConnectionIDFromVP_Parms*)Obj)->isLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RokokoReceiver_eventGetTrackerByConnectionIDFromVP_Parms), &Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_found_SetBit(void* Obj)
	{
		((RokokoReceiver_eventGetTrackerByConnectionIDFromVP_Parms*)Obj)->found = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_found = { "found", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RokokoReceiver_eventGetTrackerByConnectionIDFromVP_Parms), &Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_found_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventGetTrackerByConnectionIDFromVP_Parms, ReturnValue), Z_Construct_UScriptStruct_FTracker, METADATA_PARAMS(nullptr, 0) }; // 2791865882
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_isLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_found,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "GetTrackerByConnectionIDFromVP", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::RokokoReceiver_eventGetTrackerByConnectionIDFromVP_Parms), Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_StartListener_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_StartListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "Comment", "/**\n\x09* Starts the SmartsuitReceiver socket so it listens for Smartsuits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Starts the SmartsuitReceiver socket so it listens for Smartsuits." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_StartListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "StartListener", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_StartListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_StartListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_StartListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_StartListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_StopListener_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_StopListener_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rokoko" },
		{ "Comment", "/**\n\x09* Stops the SmartsuitReceiver socket so it stops listening for Smartsuits.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Stops the SmartsuitReceiver socket so it stops listening for Smartsuits." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_StopListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "StopListener", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_StopListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_StopListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_StopListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_StopListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics
	{
		struct RokokoReceiver_eventUPosition_Parms
		{
			FVector position;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventUPosition_Parms, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoReceiver_eventUPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualProduction" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "Converts position into Unreal position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoReceiver, nullptr, "UPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::RokokoReceiver_eventUPosition_Parms), Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoReceiver_UPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoReceiver_UPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARokokoReceiver);
	UClass* Z_Construct_UClass_ARokokoReceiver_NoRegister()
	{
		return ARokokoReceiver::StaticClass();
	}
	struct Z_Construct_UClass_ARokokoReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RokokoPortNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_RokokoPortNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARokokoReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARokokoReceiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARokokoReceiver_FQuatToRotator, "FQuatToRotator" }, // 3600666517
		{ &Z_Construct_UFunction_ARokokoReceiver_GetAllFaces, "GetAllFaces" }, // 232930162
		{ &Z_Construct_UFunction_ARokokoReceiver_GetAllProps, "GetAllProps" }, // 4014131683
		{ &Z_Construct_UFunction_ARokokoReceiver_GetAllSmartsuits, "GetAllSmartsuits" }, // 3812548752
		{ &Z_Construct_UFunction_ARokokoReceiver_GetAvailableSmartsuitNames, "GetAvailableSmartsuitNames" }, // 2973982
		{ &Z_Construct_UFunction_ARokokoReceiver_GetFaceByFaceID, "GetFaceByFaceID" }, // 336635418
		{ &Z_Construct_UFunction_ARokokoReceiver_GetFaceByProfileName, "GetFaceByProfileName" }, // 507186330
		{ &Z_Construct_UFunction_ARokokoReceiver_GetFacesNotAssociatedWithActor, "GetFacesNotAssociatedWithActor" }, // 3377188554
		{ &Z_Construct_UFunction_ARokokoReceiver_GetProp, "GetProp" }, // 2210807877
		{ &Z_Construct_UFunction_ARokokoReceiver_GetSmartsuitByName, "GetSmartsuitByName" }, // 3795066747
		{ &Z_Construct_UFunction_ARokokoReceiver_GetTracker, "GetTracker" }, // 940701287
		{ &Z_Construct_UFunction_ARokokoReceiver_GetTrackerByConnectionIDFromVP, "GetTrackerByConnectionIDFromVP" }, // 3061703822
		{ &Z_Construct_UFunction_ARokokoReceiver_StartListener, "StartListener" }, // 1991930885
		{ &Z_Construct_UFunction_ARokokoReceiver_StopListener, "StopListener" }, // 15216510
		{ &Z_Construct_UFunction_ARokokoReceiver_UPosition, "UPosition" }, // 1023039040
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARokokoReceiver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartsuitReceiver.h" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "A SmartsuitReceiver implements the network interface between Smartsuit and Unreal. This is required for SmartsuitController to work properly. You can have only one SmartsuitReceiver at the same time." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARokokoReceiver_Statics::NewProp_RokokoPortNumber_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Virtual Production\")\n//int VPListenPort = 14045;\n" },
		{ "ModuleRelativePath", "Public/SmartsuitReceiver.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Virtual Production\")\nint VPListenPort = 14045;" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARokokoReceiver_Statics::NewProp_RokokoPortNumber = { "RokokoPortNumber", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARokokoReceiver, RokokoPortNumber), METADATA_PARAMS(Z_Construct_UClass_ARokokoReceiver_Statics::NewProp_RokokoPortNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoReceiver_Statics::NewProp_RokokoPortNumber_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARokokoReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoReceiver_Statics::NewProp_RokokoPortNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARokokoReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARokokoReceiver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARokokoReceiver_Statics::ClassParams = {
		&ARokokoReceiver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARokokoReceiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoReceiver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARokokoReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARokokoReceiver()
	{
		if (!Z_Registration_Info_UClass_ARokokoReceiver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARokokoReceiver.OuterSingleton, Z_Construct_UClass_ARokokoReceiver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARokokoReceiver.OuterSingleton;
	}
	template<> SMARTSUIT_API UClass* StaticClass<ARokokoReceiver>()
	{
		return ARokokoReceiver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARokokoReceiver);
	ARokokoReceiver::~ARokokoReceiver() {}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitReceiver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitReceiver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARokokoReceiver, ARokokoReceiver::StaticClass, TEXT("ARokokoReceiver"), &Z_Registration_Info_UClass_ARokokoReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARokokoReceiver), 1100170817U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitReceiver_h_541418053(TEXT("/Script/Smartsuit"),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitReceiver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitReceiver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
