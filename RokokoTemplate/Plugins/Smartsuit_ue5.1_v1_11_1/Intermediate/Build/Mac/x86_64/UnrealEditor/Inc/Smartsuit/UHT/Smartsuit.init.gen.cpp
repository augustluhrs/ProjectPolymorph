// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuit_init() {}
	SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature();
	SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature();
	SMARTSUIT_API UFunction* Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Smartsuit;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Smartsuit()
	{
		if (!Z_Registration_Info_UPackage__Script_Smartsuit.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Smartsuit_OnCompletedRequest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Smartsuit_OnConnected__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Smartsuit_OnDisconnected__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Smartsuit",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xBEE86E80,
				0xE7082734,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Smartsuit.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Smartsuit.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Smartsuit(Z_Construct_UPackage__Script_Smartsuit, TEXT("/Script/Smartsuit"), Z_Registration_Info_UPackage__Script_Smartsuit, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBEE86E80, 0xE7082734));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
