// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RokokoRemote.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SMARTSUIT_RokokoRemote_generated_h
#error "RokokoRemote.generated.h already included, missing '#pragma once' in RokokoRemote.h"
#endif
#define SMARTSUIT_RokokoRemote_generated_h

#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRokokoRemoteInstance_Statics; \
	SMARTSUIT_API static class UScriptStruct* StaticStruct();


template<> SMARTSUIT_API UScriptStruct* StaticStruct<struct FRokokoRemoteInstance>();

#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_47_DELEGATE \
struct _Script_Smartsuit_eventOnConnected_Parms \
{ \
	FString ResponseContentString; \
}; \
static inline void FOnConnected_DelegateWrapper(const FMulticastScriptDelegate& OnConnected, const FString& ResponseContentString) \
{ \
	_Script_Smartsuit_eventOnConnected_Parms Parms; \
	Parms.ResponseContentString=ResponseContentString; \
	OnConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_48_DELEGATE \
static inline void FOnDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnDisconnected) \
{ \
	OnDisconnected.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_SPARSE_DATA
#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCommandAPIPort); \
	DECLARE_FUNCTION(execGetCommandAPIKey);


#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCommandAPIPort); \
	DECLARE_FUNCTION(execGetCommandAPIKey);


#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_ACCESSORS
#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARokokoRemote(); \
	friend struct Z_Construct_UClass_ARokokoRemote_Statics; \
public: \
	DECLARE_CLASS(ARokokoRemote, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ARokokoRemote)


#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_INCLASS \
private: \
	static void StaticRegisterNativesARokokoRemote(); \
	friend struct Z_Construct_UClass_ARokokoRemote_Statics; \
public: \
	DECLARE_CLASS(ARokokoRemote, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Smartsuit"), NO_API) \
	DECLARE_SERIALIZER(ARokokoRemote)


#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARokokoRemote(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARokokoRemote) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARokokoRemote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARokokoRemote); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARokokoRemote(ARokokoRemote&&); \
	NO_API ARokokoRemote(const ARokokoRemote&); \
public: \
	NO_API virtual ~ARokokoRemote();


#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARokokoRemote(ARokokoRemote&&); \
	NO_API ARokokoRemote(const ARokokoRemote&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARokokoRemote); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARokokoRemote); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARokokoRemote) \
	NO_API virtual ~ARokokoRemote();


#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_50_PROLOG
#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_SPARSE_DATA \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_RPC_WRAPPERS \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_ACCESSORS \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_INCLASS \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_SPARSE_DATA \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_ACCESSORS \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_INCLASS_NO_PURE_DECLS \
	FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SMARTSUIT_API UClass* StaticClass<class ARokokoRemote>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_jal706_Documents_Teaching_Unreal_Sp23_ClassDemos_Plugins_Smartsuit_ue5_1_v1_11_1_Source_Smartsuit_Public_RokokoRemote_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
