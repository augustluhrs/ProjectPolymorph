// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/RokokoRemote.h"
#include "Engine/Classes/Engine/EngineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRokokoRemote() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	SMARTSUIT_API UClass* Z_Construct_UClass_ARokokoRemote();
	SMARTSUIT_API UClass* Z_Construct_UClass_ARokokoRemote_NoRegister();
	SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature();
	SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FRokokoRemoteInstance();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RokokoRemoteInstance;
class UScriptStruct* FRokokoRemoteInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RokokoRemoteInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RokokoRemoteInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRokokoRemoteInstance, Z_Construct_UPackage__Script_Smartsuit(), TEXT("RokokoRemoteInstance"));
	}
	return Z_Registration_Info_UScriptStruct_RokokoRemoteInstance.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FRokokoRemoteInstance>()
{
	return FRokokoRemoteInstance::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRokokoRemoteInstance_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRokokoRemoteInstance_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*: IValuable*/" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
		{ "ToolTip", ": IValuable" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRokokoRemoteInstance_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRokokoRemoteInstance>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRokokoRemoteInstance_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"RokokoRemoteInstance",
		sizeof(FRokokoRemoteInstance),
		alignof(FRokokoRemoteInstance),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRokokoRemoteInstance_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRokokoRemoteInstance_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRokokoRemoteInstance()
	{
		if (!Z_Registration_Info_UScriptStruct_RokokoRemoteInstance.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RokokoRemoteInstance.InnerSingleton, Z_Construct_UScriptStruct_FRokokoRemoteInstance_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RokokoRemoteInstance.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics
	{
		struct _Script_Smartsuit_eventOnConnected_Parms
		{
			FString ResponseContentString;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResponseContentString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContentString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::NewProp_ResponseContentString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::NewProp_ResponseContentString = { "ResponseContentString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Smartsuit_eventOnConnected_Parms, ResponseContentString), METADATA_PARAMS(Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::NewProp_ResponseContentString_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::NewProp_ResponseContentString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::NewProp_ResponseContentString,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Smartsuit, nullptr, "OnConnected__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::_Script_Smartsuit_eventOnConnected_Parms), Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Smartsuit, nullptr, "OnDisconnected__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARokokoRemote::execGetCommandAPIPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCommandAPIPort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARokokoRemote::execGetCommandAPIKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCommandAPIKey();
		P_NATIVE_END;
	}
	void ARokokoRemote::StaticRegisterNativesARokokoRemote()
	{
		UClass* Class = ARokokoRemote::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCommandAPIKey", &ARokokoRemote::execGetCommandAPIKey },
			{ "GetCommandAPIPort", &ARokokoRemote::execGetCommandAPIPort },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics
	{
		struct RokokoRemote_eventGetCommandAPIKey_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoRemote_eventGetCommandAPIKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoRemote, nullptr, "GetCommandAPIKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::RokokoRemote_eventGetCommandAPIKey_Parms), Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics
	{
		struct RokokoRemote_eventGetCommandAPIPort_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RokokoRemote_eventGetCommandAPIPort_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARokokoRemote, nullptr, "GetCommandAPIPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::RokokoRemote_eventGetCommandAPIPort_Parms), Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARokokoRemote);
	UClass* Z_Construct_UClass_ARokokoRemote_NoRegister()
	{
		return ARokokoRemote::StaticClass();
	}
	struct Z_Construct_UClass_ARokokoRemote_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IPAddress_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_IPAddress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FTH_TestHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FTH_TestHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnConnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnConnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnected_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDisconnected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SenderPort_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SenderPort;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReceiverPort_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReceiverPort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARokokoRemote_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARokokoRemote_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARokokoRemote_GetCommandAPIKey, "GetCommandAPIKey" }, // 3607254289
		{ &Z_Construct_UFunction_ARokokoRemote_GetCommandAPIPort, "GetCommandAPIPort" }, // 3396801511
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARokokoRemote_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RokokoRemote.h" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARokokoRemote_Statics::NewProp_IPAddress_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_IPAddress = { "IPAddress", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARokokoRemote, IPAddress), METADATA_PARAMS(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_IPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_IPAddress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARokokoRemote_Statics::NewProp_FTH_TestHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_FTH_TestHandle = { "FTH_TestHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARokokoRemote, FTH_TestHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_FTH_TestHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_FTH_TestHandle_MetaData)) }; // 4017759265
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnConnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnConnected = { "OnConnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARokokoRemote, OnConnected), Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnConnected_MetaData)) }; // 2195262684
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnDisconnected_MetaData[] = {
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnDisconnected = { "OnDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARokokoRemote, OnDisconnected), Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnDisconnected_MetaData)) }; // 1413883201
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARokokoRemote_Statics::NewProp_SenderPort_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_SenderPort = { "SenderPort", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARokokoRemote, SenderPort), METADATA_PARAMS(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_SenderPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_SenderPort_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARokokoRemote_Statics::NewProp_ReceiverPort_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RokokoRemote.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ARokokoRemote_Statics::NewProp_ReceiverPort = { "ReceiverPort", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ARokokoRemote, ReceiverPort), METADATA_PARAMS(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_ReceiverPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::NewProp_ReceiverPort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARokokoRemote_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_IPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_FTH_TestHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnConnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_OnDisconnected,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_SenderPort,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARokokoRemote_Statics::NewProp_ReceiverPort,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARokokoRemote_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARokokoRemote>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARokokoRemote_Statics::ClassParams = {
		&ARokokoRemote::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARokokoRemote_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARokokoRemote_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARokokoRemote_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARokokoRemote()
	{
		if (!Z_Registration_Info_UClass_ARokokoRemote.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARokokoRemote.OuterSingleton, Z_Construct_UClass_ARokokoRemote_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARokokoRemote.OuterSingleton;
	}
	template<> SMARTSUIT_API UClass* StaticClass<ARokokoRemote>()
	{
		return ARokokoRemote::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARokokoRemote);
	ARokokoRemote::~ARokokoRemote() {}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_Statics::ScriptStructInfo[] = {
		{ FRokokoRemoteInstance::StaticStruct, Z_Construct_UScriptStruct_FRokokoRemoteInstance_Statics::NewStructOps, TEXT("RokokoRemoteInstance"), &Z_Registration_Info_UScriptStruct_RokokoRemoteInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRokokoRemoteInstance), 2470130666U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARokokoRemote, ARokokoRemote::StaticClass, TEXT("ARokokoRemote"), &Z_Registration_Info_UClass_ARokokoRemote, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARokokoRemote), 504496668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_3235104479(TEXT("/Script/Smartsuit"),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
