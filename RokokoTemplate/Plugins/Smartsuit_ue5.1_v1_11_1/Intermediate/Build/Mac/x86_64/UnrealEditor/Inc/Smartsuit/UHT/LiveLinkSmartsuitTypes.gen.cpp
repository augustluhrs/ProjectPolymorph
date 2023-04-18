// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/Roles/LiveLinkSmartsuitTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSmartsuitTypes() {}
// Cross Module References
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

static_assert(std::is_polymorphic<FLiveLinkSmartsuitStaticData>() == std::is_polymorphic<FLiveLinkSkeletonStaticData>(), "USTRUCT FLiveLinkSmartsuitStaticData cannot be polymorphic unless super FLiveLinkSkeletonStaticData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitStaticData;
class UScriptStruct* FLiveLinkSmartsuitStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData, Z_Construct_UPackage__Script_Smartsuit(), TEXT("LiveLinkSmartsuitStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitStaticData.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FLiveLinkSmartsuitStaticData>()
{
	return FLiveLinkSmartsuitStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Static data for Smartsuit data.\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkSmartsuitTypes.h" },
		{ "ToolTip", "Static data for Smartsuit data." },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSmartsuitStaticData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		Z_Construct_UScriptStruct_FLiveLinkSkeletonStaticData,
		&NewStructOps,
		"LiveLinkSmartsuitStaticData",
		sizeof(FLiveLinkSmartsuitStaticData),
		alignof(FLiveLinkSmartsuitStaticData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitStaticData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitStaticData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkSmartsuitFrameData>() == std::is_polymorphic<FLiveLinkAnimationFrameData>(), "USTRUCT FLiveLinkSmartsuitFrameData cannot be polymorphic unless super FLiveLinkAnimationFrameData is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitFrameData;
class UScriptStruct* FLiveLinkSmartsuitFrameData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitFrameData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitFrameData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData, Z_Construct_UPackage__Script_Smartsuit(), TEXT("LiveLinkSmartsuitFrameData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitFrameData.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FLiveLinkSmartsuitFrameData>()
{
	return FLiveLinkSmartsuitFrameData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasLeftGlove_MetaData[];
#endif
		static void NewProp_HasLeftGlove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasLeftGlove;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasRightGlove_MetaData[];
#endif
		static void NewProp_HasRightGlove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasRightGlove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Dynamic data for Smartsuit\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkSmartsuitTypes.h" },
		{ "ToolTip", "Dynamic data for Smartsuit" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSmartsuitFrameData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasLeftGlove_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkSmartsuitTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasLeftGlove_SetBit(void* Obj)
	{
		((FLiveLinkSmartsuitFrameData*)Obj)->HasLeftGlove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasLeftGlove = { "HasLeftGlove", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkSmartsuitFrameData), &Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasLeftGlove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasLeftGlove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasLeftGlove_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasRightGlove_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkSmartsuitTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasRightGlove_SetBit(void* Obj)
	{
		((FLiveLinkSmartsuitFrameData*)Obj)->HasRightGlove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasRightGlove = { "HasRightGlove", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FLiveLinkSmartsuitFrameData), &Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasRightGlove_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasRightGlove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasRightGlove_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasLeftGlove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewProp_HasRightGlove,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		Z_Construct_UScriptStruct_FLiveLinkAnimationFrameData,
		&NewStructOps,
		"LiveLinkSmartsuitFrameData",
		sizeof(FLiveLinkSmartsuitFrameData),
		alignof(FLiveLinkSmartsuitFrameData),
		Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitFrameData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitFrameData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitFrameData.InnerSingleton;
	}

static_assert(std::is_polymorphic<FLiveLinkSmartsuitBlueprintData>() == std::is_polymorphic<FSubjectFrameHandle>(), "USTRUCT FLiveLinkSmartsuitBlueprintData cannot be polymorphic unless super FSubjectFrameHandle is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitBlueprintData;
class UScriptStruct* FLiveLinkSmartsuitBlueprintData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitBlueprintData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitBlueprintData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData, Z_Construct_UPackage__Script_Smartsuit(), TEXT("LiveLinkSmartsuitBlueprintData"));
	}
	return Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitBlueprintData.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FLiveLinkSmartsuitBlueprintData>()
{
	return FLiveLinkSmartsuitBlueprintData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Facility structure to handle camera data in blueprint\n */" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkSmartsuitTypes.h" },
		{ "ToolTip", "Facility structure to handle camera data in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLiveLinkSmartsuitBlueprintData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		Z_Construct_UScriptStruct_FSubjectFrameHandle,
		&NewStructOps,
		"LiveLinkSmartsuitBlueprintData",
		sizeof(FLiveLinkSmartsuitBlueprintData),
		alignof(FLiveLinkSmartsuitBlueprintData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData()
	{
		if (!Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitBlueprintData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitBlueprintData.InnerSingleton, Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitBlueprintData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitTypes_h_Statics::ScriptStructInfo[] = {
		{ FLiveLinkSmartsuitStaticData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSmartsuitStaticData_Statics::NewStructOps, TEXT("LiveLinkSmartsuitStaticData"), &Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSmartsuitStaticData), 1030819870U) },
		{ FLiveLinkSmartsuitFrameData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSmartsuitFrameData_Statics::NewStructOps, TEXT("LiveLinkSmartsuitFrameData"), &Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitFrameData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSmartsuitFrameData), 2073595120U) },
		{ FLiveLinkSmartsuitBlueprintData::StaticStruct, Z_Construct_UScriptStruct_FLiveLinkSmartsuitBlueprintData_Statics::NewStructOps, TEXT("LiveLinkSmartsuitBlueprintData"), &Z_Registration_Info_UScriptStruct_LiveLinkSmartsuitBlueprintData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLiveLinkSmartsuitBlueprintData), 60218055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitTypes_h_4199099852(TEXT("/Script/Smartsuit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
