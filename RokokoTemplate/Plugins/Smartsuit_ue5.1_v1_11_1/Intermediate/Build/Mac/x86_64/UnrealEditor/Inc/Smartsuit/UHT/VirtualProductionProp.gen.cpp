// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/VirtualProductionProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionProp() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	SMARTSUIT_API UClass* Z_Construct_UClass_UVirtualProductionProp();
	SMARTSUIT_API UClass* Z_Construct_UClass_UVirtualProductionProp_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References
	void UVirtualProductionProp::StaticRegisterNativesUVirtualProductionProp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVirtualProductionProp);
	UClass* Z_Construct_UClass_UVirtualProductionProp_NoRegister()
	{
		return UVirtualProductionProp::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualProductionProp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isLive_MetaData[];
#endif
		static void NewProp_isLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_useLocalSpace_MetaData[];
#endif
		static void NewProp_useLocalSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_useLocalSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_scalePosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scalePosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualProductionProp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "VirtualProductionProp.h" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/**\n\x09* The port number used to listen for trackers and props data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
		{ "ToolTip", "The port number used to listen for trackers and props data." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualProductionProp, name), METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
	};
#endif
	void Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((UVirtualProductionProp*)Obj)->isLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVirtualProductionProp), &Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
	};
#endif
	void Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_SetBit(void* Obj)
	{
		((UVirtualProductionProp*)Obj)->useLocalSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace = { "useLocalSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVirtualProductionProp), &Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionProp.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition = { "scalePosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVirtualProductionProp, scalePosition), METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVirtualProductionProp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_isLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_useLocalSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVirtualProductionProp_Statics::NewProp_scalePosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualProductionProp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualProductionProp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVirtualProductionProp_Statics::ClassParams = {
		&UVirtualProductionProp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVirtualProductionProp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualProductionProp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVirtualProductionProp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualProductionProp()
	{
		if (!Z_Registration_Info_UClass_UVirtualProductionProp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVirtualProductionProp.OuterSingleton, Z_Construct_UClass_UVirtualProductionProp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVirtualProductionProp.OuterSingleton;
	}
	template<> SMARTSUIT_API UClass* StaticClass<UVirtualProductionProp>()
	{
		return UVirtualProductionProp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualProductionProp);
	UVirtualProductionProp::~UVirtualProductionProp() {}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionProp_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionProp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVirtualProductionProp, UVirtualProductionProp::StaticClass, TEXT("UVirtualProductionProp"), &Z_Registration_Info_UClass_UVirtualProductionProp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVirtualProductionProp), 2282126510U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionProp_h_3031201304(TEXT("/Script/Smartsuit"),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionProp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionProp_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
