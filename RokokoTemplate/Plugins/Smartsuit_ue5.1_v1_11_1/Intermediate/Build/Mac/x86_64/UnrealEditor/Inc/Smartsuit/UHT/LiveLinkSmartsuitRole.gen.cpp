// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/Roles/LiveLinkSmartsuitRole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSmartsuitRole() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkAnimationRole();
	SMARTSUIT_API UClass* Z_Construct_UClass_ULiveLinkSmartsuitRole();
	SMARTSUIT_API UClass* Z_Construct_UClass_ULiveLinkSmartsuitRole_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References
	void ULiveLinkSmartsuitRole::StaticRegisterNativesULiveLinkSmartsuitRole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSmartsuitRole);
	UClass* Z_Construct_UClass_ULiveLinkSmartsuitRole_NoRegister()
	{
		return ULiveLinkSmartsuitRole::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSmartsuitRole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSmartsuitRole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkAnimationRole,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSmartsuitRole_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Role associated for Smartsuit data.\n */" },
		{ "DisplayName", "Smartsuit Role" },
		{ "IncludePath", "Roles/LiveLinkSmartsuitRole.h" },
		{ "ModuleRelativePath", "Public/Roles/LiveLinkSmartsuitRole.h" },
		{ "ToolTip", "Role associated for Smartsuit data." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSmartsuitRole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSmartsuitRole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSmartsuitRole_Statics::ClassParams = {
		&ULiveLinkSmartsuitRole::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSmartsuitRole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSmartsuitRole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSmartsuitRole()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkSmartsuitRole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSmartsuitRole.OuterSingleton, Z_Construct_UClass_ULiveLinkSmartsuitRole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkSmartsuitRole.OuterSingleton;
	}
	template<> SMARTSUIT_API UClass* StaticClass<ULiveLinkSmartsuitRole>()
	{
		return ULiveLinkSmartsuitRole::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSmartsuitRole);
	ULiveLinkSmartsuitRole::~ULiveLinkSmartsuitRole() {}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitRole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitRole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkSmartsuitRole, ULiveLinkSmartsuitRole::StaticClass, TEXT("ULiveLinkSmartsuitRole"), &Z_Registration_Info_UClass_ULiveLinkSmartsuitRole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSmartsuitRole), 3530659578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitRole_h_2381708551(TEXT("/Script/Smartsuit"),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitRole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_Roles_LiveLinkSmartsuitRole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
