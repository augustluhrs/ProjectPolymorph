// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Smartsuit/Public/VirtualProductionFrame.h"
#include "Smartsuit/Public/SmartsuitDefinitions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualProductionFrame() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FFace();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FProfile();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FProp();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FRadiusReferencePoint();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FReferencePoint();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FSuitData();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FTracker();
	SMARTSUIT_API UScriptStruct* Z_Construct_UScriptStruct_FVirtualProductionFrame();
	UPackage* Z_Construct_UPackage__Script_Smartsuit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RadiusReferencePoint;
class UScriptStruct* FRadiusReferencePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RadiusReferencePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RadiusReferencePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRadiusReferencePoint, Z_Construct_UPackage__Script_Smartsuit(), TEXT("RadiusReferencePoint"));
	}
	return Z_Registration_Info_UScriptStruct_RadiusReferencePoint.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FRadiusReferencePoint>()
{
	return FRadiusReferencePoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Contains all information about a grip." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRadiusReferencePoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Grip radius." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadiusReferencePoint, radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Grip position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadiusReferencePoint, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Grip rotation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRadiusReferencePoint, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewProp_rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"RadiusReferencePoint",
		sizeof(FRadiusReferencePoint),
		alignof(FRadiusReferencePoint),
		Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRadiusReferencePoint()
	{
		if (!Z_Registration_Info_UScriptStruct_RadiusReferencePoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RadiusReferencePoint.InnerSingleton, Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RadiusReferencePoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ReferencePoint;
class UScriptStruct* FReferencePoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ReferencePoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ReferencePoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FReferencePoint, Z_Construct_UPackage__Script_Smartsuit(), TEXT("ReferencePoint"));
	}
	return Z_Registration_Info_UScriptStruct_ReferencePoint.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FReferencePoint>()
{
	return FReferencePoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FReferencePoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencePoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Contains all information about the pivot." },
	};
#endif
	void* Z_Construct_UScriptStruct_FReferencePoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReferencePoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Pivot position." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReferencePoint, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Pivot rotation." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FReferencePoint, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_rotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReferencePoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReferencePoint_Statics::NewProp_rotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReferencePoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"ReferencePoint",
		sizeof(FReferencePoint),
		alignof(FReferencePoint),
		Z_Construct_UScriptStruct_FReferencePoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReferencePoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReferencePoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReferencePoint()
	{
		if (!Z_Registration_Info_UScriptStruct_ReferencePoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ReferencePoint.InnerSingleton, Z_Construct_UScriptStruct_FReferencePoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ReferencePoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Profile;
class UScriptStruct* FProfile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Profile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Profile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfile, Z_Construct_UPackage__Script_Smartsuit(), TEXT("Profile"));
	}
	return Z_Registration_Info_UScriptStruct_Profile.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FProfile>()
{
	return FProfile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProfile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_uuid_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_uuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dimensions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_dimensions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trackerOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_trackerOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pivot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pivot;
		static const UECodeGen_Private::FStructPropertyParams NewProp_grips_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grips_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_grips;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_propType_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_propType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Contains all information about a prop's profile." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfile_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Profile's name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfile, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfile_Statics::NewProp_uuid_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Profile's uuid." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_uuid = { "uuid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfile, uuid), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_uuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_uuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfile_Statics::NewProp_dimensions_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Profile's dimensions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_dimensions = { "dimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfile, dimensions), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_dimensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_dimensions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfile_Statics::NewProp_color_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Profile's color." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfile, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfile_Statics::NewProp_trackerOffset_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Tracker Offset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_trackerOffset = { "trackerOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfile, trackerOffset), Z_Construct_UScriptStruct_FReferencePoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_trackerOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_trackerOffset_MetaData)) }; // 517514350
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfile_Statics::NewProp_pivot_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Pivot." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_pivot = { "pivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfile, pivot), Z_Construct_UScriptStruct_FReferencePoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_pivot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_pivot_MetaData)) }; // 517514350
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips_Inner = { "grips", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRadiusReferencePoint, METADATA_PARAMS(nullptr, 0) }; // 2255894788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "List of grips." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips = { "grips", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfile, grips), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips_MetaData)) }; // 2255894788
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfile_Statics::NewProp_propType_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Profile's prop type." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FProfile_Statics::NewProp_propType = { "propType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProfile, propType), METADATA_PARAMS(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_propType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::NewProp_propType_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_uuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_dimensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_trackerOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_grips,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfile_Statics::NewProp_propType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"Profile",
		sizeof(FProfile),
		alignof(FProfile),
		Z_Construct_UScriptStruct_FProfile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfile()
	{
		if (!Z_Registration_Info_UScriptStruct_Profile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Profile.InnerSingleton, Z_Construct_UScriptStruct_FProfile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Profile.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Prop;
class UScriptStruct* FProp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Prop.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Prop.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProp, Z_Construct_UPackage__Script_Smartsuit(), TEXT("Prop"));
	}
	return Z_Registration_Info_UScriptStruct_Prop.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FProp>()
{
	return FProp::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isLive_MetaData[];
#endif
		static void NewProp_isLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_profile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_profile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProp_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Contains all information about a prop." },
	};
#endif
	void* Z_Construct_UScriptStruct_FProp_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProp>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProp_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Prop's name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProp, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FProp_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProp_Statics::NewProp_color_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Rotation information." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProp, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FProp_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::NewProp_color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProp_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Prop's id." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProp, id), METADATA_PARAMS(Z_Construct_UScriptStruct_FProp_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProp_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Position information." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProp, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FProp_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProp_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Rotation information." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProp, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FProp_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Information about whether a prop is live or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((FProp*)Obj)->isLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FProp), &Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProp_Statics::NewProp_profile_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Information about prop's profile." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProp_Statics::NewProp_profile = { "profile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FProp, profile), Z_Construct_UScriptStruct_FProfile, METADATA_PARAMS(Z_Construct_UScriptStruct_FProp_Statics::NewProp_profile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::NewProp_profile_MetaData)) }; // 2999994249
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_isLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProp_Statics::NewProp_profile,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProp_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"Prop",
		sizeof(FProp),
		alignof(FProp),
		Z_Construct_UScriptStruct_FProp_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProp_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProp_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProp()
	{
		if (!Z_Registration_Info_UScriptStruct_Prop.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Prop.InnerSingleton, Z_Construct_UScriptStruct_FProp_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Prop.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Tracker;
class UScriptStruct* FTracker::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Tracker.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Tracker.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTracker, Z_Construct_UPackage__Script_Smartsuit(), TEXT("Tracker"));
	}
	return Z_Registration_Info_UScriptStruct_Tracker.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FTracker>()
{
	return FTracker::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTracker_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_connectionId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_connectionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isLive_MetaData[];
#endif
		static void NewProp_isLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isLive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trackingResult_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trackingResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trackerType_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_trackerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderModelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RenderModelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_battery_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_battery;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Contains all information about a tracker." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTracker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTracker>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Tracker's name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTracker, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::NewProp_connectionId_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Tracker's connection id." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_connectionId = { "connectionId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTracker, connectionId), METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_connectionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_connectionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Position information." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTracker, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Rotation information." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTracker, rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Information about whether a tracker is live or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive_SetBit(void* Obj)
	{
		((FTracker*)Obj)->isLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive = { "isLive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTracker), &Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackingResult_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Information about the result of the tracking." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackingResult = { "trackingResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTracker, trackingResult), METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackingResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackingResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackerType_MetaData[] = {
		{ "Comment", "/**Indicates the type of the tracker.*/" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Indicates the type of the tracker." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackerType = { "trackerType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTracker, trackerType), METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackerType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::NewProp_RenderModelName_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Render Model Name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_RenderModelName = { "RenderModelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTracker, RenderModelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_RenderModelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_RenderModelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTracker_Statics::NewProp_battery_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Battery information." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTracker_Statics::NewProp_battery = { "battery", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTracker, battery), METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_battery_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::NewProp_battery_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTracker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_connectionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_isLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackingResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_trackerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_RenderModelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTracker_Statics::NewProp_battery,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTracker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"Tracker",
		sizeof(FTracker),
		alignof(FTracker),
		Z_Construct_UScriptStruct_FTracker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTracker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTracker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTracker()
	{
		if (!Z_Registration_Info_UScriptStruct_Tracker.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Tracker.InnerSingleton, Z_Construct_UScriptStruct_FTracker_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Tracker.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Face;
class UScriptStruct* FFace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Face.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Face.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFace, Z_Construct_UPackage__Script_Smartsuit(), TEXT("Face"));
	}
	return Z_Registration_Info_UScriptStruct_Face.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FFace>()
{
	return FFace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FFace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_profileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_profileName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_provider_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_provider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_faceId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_faceId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_actorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_actorName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeBlinkLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookDownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookInLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookOutLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookUpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeSquintLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeWideLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeBlinkRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeBlinkRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookDownRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookDownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookInRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookInRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookOutRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookOutRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeLookUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeLookUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeSquintRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeSquintRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_eyeWideRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_eyeWideRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawForward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jawForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jawLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jawRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_jawOpen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_jawOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthClose_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthClose;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthFunnel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthFunnel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthPucker_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthPucker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthSmileLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthSmileRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthSmileRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthFrownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthFrownRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthFrownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthDimpleLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthDimpleRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthDimpleRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthStretchLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthStretchRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthStretchRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollLower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthRollLower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthRollUpper_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthRollUpper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugLower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthShrugLower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthShrugUpper_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthShrugUpper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthPressLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthPressRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthPressRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthLowerDownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthLowerDownRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthLowerDownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthUpperUpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mouthUpperUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mouthUpperUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browDownLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browDownLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browDownRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browDownRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browInnerUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browInnerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browOuterUpLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_browOuterUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_browOuterUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheekPuff_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cheekPuff;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cheekSquintLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cheekSquintRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cheekSquintRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerLeft_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_noseSneerLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noseSneerRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_noseSneerRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tongueOut_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tongueOut;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Contains all the information for face." },
	};
#endif
	void* Z_Construct_UScriptStruct_FFace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_profileName_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_profileName = { "profileName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, profileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_profileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_profileName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_version_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Face's version." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, version), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_version_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_provider_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Face's provider." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_provider = { "provider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, provider), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_provider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_faceId_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Face's ID." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_faceId = { "faceId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, faceId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_faceId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_faceId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_actorName_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Face's ID." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_actorName = { "actorName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, actorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_actorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_actorName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkLeft = { "eyeBlinkLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeBlinkLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownLeft = { "eyeLookDownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeLookDownLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInLeft = { "eyeLookInLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeLookInLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutLeft = { "eyeLookOutLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeLookOutLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpLeft = { "eyeLookUpLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeLookUpLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintLeft = { "eyeSquintLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeSquintLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideLeft = { "eyeWideLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeWideLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkRight = { "eyeBlinkRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeBlinkRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownRight = { "eyeLookDownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeLookDownRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInRight = { "eyeLookInRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeLookInRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutRight = { "eyeLookOutRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeLookOutRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpRight = { "eyeLookUpRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeLookUpRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintRight = { "eyeSquintRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeSquintRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideRight = { "eyeWideRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, eyeWideRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawForward_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawForward = { "jawForward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, jawForward), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawLeft = { "jawLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, jawLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawRight = { "jawRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, jawRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawOpen_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawOpen = { "jawOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, jawOpen), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthClose_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthClose = { "mouthClose", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthClose), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthClose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthClose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFunnel_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFunnel = { "mouthFunnel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthFunnel), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFunnel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFunnel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPucker_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPucker = { "mouthPucker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthPucker), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPucker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPucker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLeft = { "mouthLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRight = { "mouthRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileLeft = { "mouthSmileLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthSmileLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileRight = { "mouthSmileRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthSmileRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownLeft = { "mouthFrownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthFrownLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownRight = { "mouthFrownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthFrownRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleLeft = { "mouthDimpleLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthDimpleLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleRight = { "mouthDimpleRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthDimpleRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchLeft = { "mouthStretchLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthStretchLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchRight = { "mouthStretchRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthStretchRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollLower_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollLower = { "mouthRollLower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthRollLower), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollLower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollUpper_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollUpper = { "mouthRollUpper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthRollUpper), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollUpper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugLower_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugLower = { "mouthShrugLower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthShrugLower), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugLower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugLower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugUpper_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugUpper = { "mouthShrugUpper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthShrugUpper), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugUpper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugUpper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressLeft = { "mouthPressLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthPressLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressRight = { "mouthPressRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthPressRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownLeft = { "mouthLowerDownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthLowerDownLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownRight = { "mouthLowerDownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthLowerDownRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpLeft = { "mouthUpperUpLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthUpperUpLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpRight = { "mouthUpperUpRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, mouthUpperUpRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownLeft = { "browDownLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, browDownLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownRight = { "browDownRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, browDownRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_browInnerUp_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browInnerUp = { "browInnerUp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, browInnerUp), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browInnerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browInnerUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpLeft = { "browOuterUpLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, browOuterUpLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpRight = { "browOuterUpRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, browOuterUpRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekPuff_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekPuff = { "cheekPuff", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, cheekPuff), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekPuff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekPuff_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintLeft = { "cheekSquintLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, cheekSquintLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintRight = { "cheekSquintRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, cheekSquintRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerLeft_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerLeft = { "noseSneerLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, noseSneerLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerRight_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerRight = { "noseSneerRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, noseSneerRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFace_Statics::NewProp_tongueOut_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Faces blendshape" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFace_Statics::NewProp_tongueOut = { "tongueOut", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FFace, tongueOut), METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::NewProp_tongueOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::NewProp_tongueOut_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_profileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_provider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_faceId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_actorName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeBlinkRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookDownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookInRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookOutRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeLookUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeSquintRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_eyeWideRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_jawOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthClose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFunnel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPucker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthSmileRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthFrownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthDimpleRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthStretchRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollLower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthRollUpper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugLower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthShrugUpper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthPressRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthLowerDownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_mouthUpperUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browDownRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browInnerUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_browOuterUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekPuff,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_cheekSquintRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_noseSneerRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFace_Statics::NewProp_tongueOut,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"Face",
		sizeof(FFace),
		alignof(FFace),
		Z_Construct_UScriptStruct_FFace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFace()
	{
		if (!Z_Registration_Info_UScriptStruct_Face.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Face.InnerSingleton, Z_Construct_UScriptStruct_FFace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Face.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VirtualProductionFrame;
class UScriptStruct* FVirtualProductionFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VirtualProductionFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VirtualProductionFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVirtualProductionFrame, Z_Construct_UPackage__Script_Smartsuit(), TEXT("VirtualProductionFrame"));
	}
	return Z_Registration_Info_UScriptStruct_VirtualProductionFrame.OuterSingleton;
}
template<> SMARTSUIT_API UScriptStruct* StaticStruct<FVirtualProductionFrame>()
{
	return FVirtualProductionFrame::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_version_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_version;
		static const UECodeGen_Private::FStructPropertyParams NewProp_props_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_props_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_props;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trackers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trackers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_trackers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_faces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_faces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_faces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_suits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_suits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_suits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "The Virtual Producion frame contains all props' and trackers' information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVirtualProductionFrame>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_version_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "Virtual Production version." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_version = { "version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualProductionFrame, version), METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_version_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_props_Inner = { "props", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FProp, METADATA_PARAMS(nullptr, 0) }; // 2577649799
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_props_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "List of props." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_props = { "props", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualProductionFrame, props), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_props_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_props_MetaData)) }; // 2577649799
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_trackers_Inner = { "trackers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTracker, METADATA_PARAMS(nullptr, 0) }; // 2791865882
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_trackers_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "List of trackers." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_trackers = { "trackers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualProductionFrame, trackers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_trackers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_trackers_MetaData)) }; // 2791865882
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_faces_Inner = { "faces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFace, METADATA_PARAMS(nullptr, 0) }; // 2470408225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_faces_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
		{ "ToolTip", "List of faces." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_faces = { "faces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualProductionFrame, faces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_faces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_faces_MetaData)) }; // 2470408225
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_suits_Inner = { "suits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSuitData, METADATA_PARAMS(nullptr, 0) }; // 2680328340
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_suits_MetaData[] = {
		{ "ModuleRelativePath", "Public/VirtualProductionFrame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_suits = { "suits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVirtualProductionFrame, suits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_suits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_suits_MetaData)) }; // 2680328340
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_props_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_props,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_trackers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_trackers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_faces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_faces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_suits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewProp_suits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Smartsuit,
		nullptr,
		&NewStructOps,
		"VirtualProductionFrame",
		sizeof(FVirtualProductionFrame),
		alignof(FVirtualProductionFrame),
		Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVirtualProductionFrame()
	{
		if (!Z_Registration_Info_UScriptStruct_VirtualProductionFrame.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VirtualProductionFrame.InnerSingleton, Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VirtualProductionFrame.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionFrame_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionFrame_h_Statics::ScriptStructInfo[] = {
		{ FRadiusReferencePoint::StaticStruct, Z_Construct_UScriptStruct_FRadiusReferencePoint_Statics::NewStructOps, TEXT("RadiusReferencePoint"), &Z_Registration_Info_UScriptStruct_RadiusReferencePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRadiusReferencePoint), 2255894788U) },
		{ FReferencePoint::StaticStruct, Z_Construct_UScriptStruct_FReferencePoint_Statics::NewStructOps, TEXT("ReferencePoint"), &Z_Registration_Info_UScriptStruct_ReferencePoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FReferencePoint), 517514350U) },
		{ FProfile::StaticStruct, Z_Construct_UScriptStruct_FProfile_Statics::NewStructOps, TEXT("Profile"), &Z_Registration_Info_UScriptStruct_Profile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProfile), 2999994249U) },
		{ FProp::StaticStruct, Z_Construct_UScriptStruct_FProp_Statics::NewStructOps, TEXT("Prop"), &Z_Registration_Info_UScriptStruct_Prop, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProp), 2577649799U) },
		{ FTracker::StaticStruct, Z_Construct_UScriptStruct_FTracker_Statics::NewStructOps, TEXT("Tracker"), &Z_Registration_Info_UScriptStruct_Tracker, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTracker), 2791865882U) },
		{ FFace::StaticStruct, Z_Construct_UScriptStruct_FFace_Statics::NewStructOps, TEXT("Face"), &Z_Registration_Info_UScriptStruct_Face, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFace), 2470408225U) },
		{ FVirtualProductionFrame::StaticStruct, Z_Construct_UScriptStruct_FVirtualProductionFrame_Statics::NewStructOps, TEXT("VirtualProductionFrame"), &Z_Registration_Info_UScriptStruct_VirtualProductionFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVirtualProductionFrame), 1438391146U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionFrame_h_3591947092(TEXT("/Script/Smartsuit"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionFrame_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_VirtualProductionFrame_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
