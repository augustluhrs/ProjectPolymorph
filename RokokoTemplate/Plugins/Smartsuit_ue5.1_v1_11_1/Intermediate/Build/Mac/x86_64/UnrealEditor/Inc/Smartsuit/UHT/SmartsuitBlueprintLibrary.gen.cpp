// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/SmartsuitBlueprintLibrary.h"
#include "Smartsuit/Public/VirtualProductionFrame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SMARTSUIT_API UClass* Z_Construct_UClass_ASmartsuitController_NoRegister();
	SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary();
	SMARTSUIT_API UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary_NoRegister();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FProp();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetPropRotation)
	{
		P_GET_STRUCT(FProp,Z_Param_InProp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=USmartsuitBlueprintLibrary::GetPropRotation(Z_Param_InProp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetPropLocation)
	{
		P_GET_STRUCT(FProp,Z_Param_InProp);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=USmartsuitBlueprintLibrary::GetPropLocation(Z_Param_InProp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execCreateVirtualProductionSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USmartsuitBlueprintLibrary::CreateVirtualProductionSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execJSONTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		USmartsuitBlueprintLibrary::JSONTest();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetSmartsuitController)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitController(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartsuitBlueprintLibrary::execGetSmartsuitControllerByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASmartsuitController**)Z_Param__Result=USmartsuitBlueprintLibrary::GetSmartsuitControllerByName(Z_Param_name);
		P_NATIVE_END;
	}
	void USmartsuitBlueprintLibrary::StaticRegisterNativesUSmartsuitBlueprintLibrary()
	{
		UClass* Class = USmartsuitBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateVirtualProductionSource", &USmartsuitBlueprintLibrary::execCreateVirtualProductionSource },
			{ "GetPropLocation", &USmartsuitBlueprintLibrary::execGetPropLocation },
			{ "GetPropRotation", &USmartsuitBlueprintLibrary::execGetPropRotation },
			{ "GetSmartsuitController", &USmartsuitBlueprintLibrary::execGetSmartsuitController },
			{ "GetSmartsuitControllerByName", &USmartsuitBlueprintLibrary::execGetSmartsuitControllerByName },
			{ "JSONTest", &USmartsuitBlueprintLibrary::execJSONTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "CreateVirtualProductionSource", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics
	{
		struct SmartsuitBlueprintLibrary_eventGetPropLocation_Parms
		{
			FProp InProp;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::NewProp_InProp = { "InProp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetPropLocation_Parms, InProp), Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(nullptr, 0) }; // 2577649799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetPropLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::NewProp_InProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetPropLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::SmartsuitBlueprintLibrary_eventGetPropLocation_Parms), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics
	{
		struct SmartsuitBlueprintLibrary_eventGetPropRotation_Parms
		{
			FProp InProp;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::NewProp_InProp = { "InProp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetPropRotation_Parms, InProp), Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(nullptr, 0) }; // 2577649799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetPropRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::NewProp_InProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetPropRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::SmartsuitBlueprintLibrary_eventGetPropRotation_Parms), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics
	{
		struct SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms
		{
			int32 id;
			ASmartsuitController* ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_id;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms, ReturnValue), Z_Construct_UClass_ASmartsuitController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
		{ "ToolTip", "Returns a SmartsuitController given it's Index ID. The Index ID is specified in the SmartsuitController details." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetSmartsuitController", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::SmartsuitBlueprintLibrary_eventGetSmartsuitController_Parms), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics
	{
		struct SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms
		{
			FString name;
			ASmartsuitController* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms, ReturnValue), Z_Construct_UClass_ASmartsuitController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::Function_MetaDataParams[] = {
		{ "BlueprintThreadSafe", "" },
		{ "Category", "Smartsuit" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
		{ "ToolTip", "Returns the SmartsuitController given the Smartsuit name." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "GetSmartsuitControllerByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::SmartsuitBlueprintLibrary_eventGetSmartsuitControllerByName_Parms), Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartsuitBlueprintLibrary, nullptr, "JSONTest", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartsuitBlueprintLibrary);
	UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary_NoRegister()
	{
		return USmartsuitBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_CreateVirtualProductionSource, "CreateVirtualProductionSource" }, // 2362575312
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropLocation, "GetPropLocation" }, // 2190484127
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetPropRotation, "GetPropRotation" }, // 466320288
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitController, "GetSmartsuitController" }, // 2815980597
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_GetSmartsuitControllerByName, "GetSmartsuitControllerByName" }, // 344898903
		{ &Z_Construct_UFunction_USmartsuitBlueprintLibrary_JSONTest, "JSONTest" }, // 3255836291
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "SmartsuitBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/SmartsuitBlueprintLibrary.h" },
		{ "ScriptName", "SmartsuitLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartsuitBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::ClassParams = {
		&USmartsuitBlueprintLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartsuitBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_USmartsuitBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartsuitBlueprintLibrary.OuterSingleton, Z_Construct_UClass_USmartsuitBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartsuitBlueprintLibrary.OuterSingleton;
	}
	template<> SMARTSUIT_API UClass* StaticClass<USmartsuitBlueprintLibrary>()
	{
		return USmartsuitBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartsuitBlueprintLibrary);
	USmartsuitBlueprintLibrary::~USmartsuitBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartsuitBlueprintLibrary, USmartsuitBlueprintLibrary::StaticClass, TEXT("USmartsuitBlueprintLibrary"), &Z_Registration_Info_UClass_USmartsuitBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartsuitBlueprintLibrary), 3686341498U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_2893949352(TEXT("/Script/Smartsuit"),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_SmartsuitBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
