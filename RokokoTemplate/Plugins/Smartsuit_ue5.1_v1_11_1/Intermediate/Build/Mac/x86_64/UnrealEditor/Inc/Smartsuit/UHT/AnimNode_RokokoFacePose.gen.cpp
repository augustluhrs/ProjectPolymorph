// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/AnimNode_RokokoFacePose.h"
#include "Engine/Classes/Animation/AnimNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_RokokoFacePose() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_RokokoFacePose>() == std::is_polymorphic<FAnimNode_Base>(), "USTRUCT FAnimNode_RokokoFacePose cannot be polymorphic unless super FAnimNode_Base is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose;
class UScriptStruct* FAnimNode_RokokoFacePose::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose, Z_Construct_UPackage__Script_Smartsuit(), TEXT("AnimNode_RokokoFacePose"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FAnimNode_RokokoFacePose>()
{
	return FAnimNode_RokokoFacePose::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPose_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RokokoActorName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RokokoActorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RetargetAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRetargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRetargetAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_RokokoFacePose>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose = { "InputPose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RokokoFacePose, InputPose), Z_Construct_UScriptStruct_FPoseLink, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose_MetaData)) }; // 2393943538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName_MetaData[] = {
		{ "Category", "SourceData" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\n//FLiveLinkSubjectName LiveLinkSubjectName;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SourceData, meta = (PinShownByDefault))\nFLiveLinkSubjectName LiveLinkSubjectName;" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName = { "RokokoActorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RokokoFacePose, RokokoActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset_MetaData[] = {
		{ "Category", "Retarget" },
		{ "Comment", "//#if WITH_EDITORONLY_DATA\n//\x09UE_DEPRECATED(4.23, \"FName SubjectName is deprecated. Use the SubjectName of type FLiveLinkSubjectName instead.\")\n//\x09UPROPERTY()\n//\x09""FName SubjectName_DEPRECATED;\n//#endif\n" },
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "#if WITH_EDITORONLY_DATA\n       UE_DEPRECATED(4.23, \"FName SubjectName is deprecated. Use the SubjectName of type FLiveLinkSubjectName instead.\")\n       UPROPERTY()\n       FName SubjectName_DEPRECATED;\n#endif" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset = { "RetargetAsset", nullptr, (EPropertyFlags)0x0014000002000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RokokoFacePose, RetargetAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_RokokoFacePose.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset = { "CurrentRetargetAsset", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_RokokoFacePose, CurrentRetargetAsset), Z_Construct_UClass_ULiveLinkRetargetAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_InputPose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RokokoActorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_RetargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewProp_CurrentRetargetAsset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		Z_Construct_UScriptStruct_FAnimNode_Base,
		&NewStructOps,
		"AnimNode_RokokoFacePose",
		sizeof(FAnimNode_RokokoFacePose),
		alignof(FAnimNode_RokokoFacePose),
		Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_AnimNode_RokokoFacePose_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_AnimNode_RokokoFacePose_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_RokokoFacePose::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_RokokoFacePose_Statics::NewStructOps, TEXT("AnimNode_RokokoFacePose"), &Z_Registration_Info_UScriptStruct_AnimNode_RokokoFacePose, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_RokokoFacePose), 3483518123U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_AnimNode_RokokoFacePose_h_2595090265(TEXT("/Script/Smartsuit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_AnimNode_RokokoFacePose_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_AnimNode_RokokoFacePose_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
