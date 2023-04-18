// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartsuitEditor/Private/VirtualProductionSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionSourceFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UVirtualProductionSourceFactory();
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_UVirtualProductionSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartsuitEditor();
// End Cross Module References
	void UVirtualProductionSourceFactory::StaticRegisterNativesUVirtualProductionSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualProductionSourceFactory);
	UClass* Z_Construct_UClass_UVirtualProductionSourceFactory_NoRegister()
	{
		return UVirtualProductionSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualProductionSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartsuitEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualProductionSourceFactory.h" },
		{ "ModuleRelativePath", "Private/VirtualProductionSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualProductionSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::ClassParams = {
		&UVirtualProductionSourceFactory::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualProductionSourceFactory()
	{
		if (!Z_Registration_Info_UClass_UVirtualProductionSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualProductionSourceFactory.OuterSingleton, Z_Construct_UClass_UVirtualProductionSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualProductionSourceFactory.OuterSingleton;
	}
	template<> SMARTSUITEDITOR_API UClass* StaticClass<UVirtualProductionSourceFactory>()
	{
		return UVirtualProductionSourceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualProductionSourceFactory);
	UVirtualProductionSourceFactory::~UVirtualProductionSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Private_VirtualProductionSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Private_VirtualProductionSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualProductionSourceFactory, UVirtualProductionSourceFactory::StaticClass, TEXT("UVirtualProductionSourceFactory"), &Z_Registration_Info_UClass_UVirtualProductionSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualProductionSourceFactory), 961434667U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Private_VirtualProductionSourceFactory_h_2064210638(TEXT("/Script/SmartsuitEditor"),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Private_VirtualProductionSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Private_VirtualProductionSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
