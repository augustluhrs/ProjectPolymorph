// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartsuitEditor/Public/SmartsuitPose.h"
#include "Smartsuit/Public/SmartsuitPoseNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartsuitPose() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSmartsuitPoseNode();
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_USmartsuitPose();
	SMARTSUITEDITOR_API UClass* Z_Construct_UClass_USmartsuitPose_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SmartsuitEditor();
// End Cross Module References
	void USmartsuitPose::StaticRegisterNativesUSmartsuitPose()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartsuitPose);
	UClass* Z_Construct_UClass_USmartsuitPose_NoRegister()
	{
		return USmartsuitPose::StaticClass();
	}
	struct Z_Construct_UClass_USmartsuitPose_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartsuitPose_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartsuitEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitPose_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/// @cond no_doc\n" },
		{ "IncludePath", "SmartsuitPose.h" },
		{ "Keywords", "Smartsuit Pose" },
		{ "ModuleRelativePath", "Public/SmartsuitPose.h" },
		{ "ToolTip", "@cond no_doc" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SmartsuitPose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USmartsuitPose, Node), Z_Construct_UScriptStruct_FSmartsuitPoseNode, METADATA_PARAMS(Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node_MetaData)) }; // 663359403
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USmartsuitPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USmartsuitPose_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartsuitPose_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartsuitPose>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartsuitPose_Statics::ClassParams = {
		&USmartsuitPose::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USmartsuitPose_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartsuitPose_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartsuitPose_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartsuitPose()
	{
		if (!Z_Registration_Info_UClass_USmartsuitPose.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartsuitPose.OuterSingleton, Z_Construct_UClass_USmartsuitPose_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartsuitPose.OuterSingleton;
	}
	template<> SMARTSUITEDITOR_API UClass* StaticClass<USmartsuitPose>()
	{
		return USmartsuitPose::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartsuitPose);
	USmartsuitPose::~USmartsuitPose() {}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Public_SmartsuitPose_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Public_SmartsuitPose_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartsuitPose, USmartsuitPose::StaticClass, TEXT("USmartsuitPose"), &Z_Registration_Info_UClass_USmartsuitPose, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartsuitPose), 2711661096U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Public_SmartsuitPose_h_2914663128(TEXT("/Script/SmartsuitEditor"),
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Public_SmartsuitPose_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_SmartsuitEditor_Public_SmartsuitPose_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
