// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "OpenAITTSBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OPENAITTS_OpenAITTSBPLibrary_generated_h
#error "OpenAITTSBPLibrary.generated.h already included, missing '#pragma once' in OpenAITTSBPLibrary.h"
#endif
#define OPENAITTS_OpenAITTSBPLibrary_generated_h

#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_10_DELEGATE \
struct _Script_OpenAITTS_eventOpenAIResponseDelegate_Parms \
{ \
	bool bWasSuccessful; \
	FString ResponseContent; \
}; \
static inline void FOpenAIResponseDelegate_DelegateWrapper(const FScriptDelegate& OpenAIResponseDelegate, bool bWasSuccessful, const FString& ResponseContent) \
{ \
	_Script_OpenAITTS_eventOpenAIResponseDelegate_Parms Parms; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	Parms.ResponseContent=ResponseContent; \
	OpenAIResponseDelegate.ProcessDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_SPARSE_DATA
#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOpenAISpeechRequest);


#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOpenAISpeechRequest);


#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_ACCESSORS
#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOpenAITTSBPLibrary(); \
	friend struct Z_Construct_UClass_UOpenAITTSBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenAITTSBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAITTS"), NO_API) \
	DECLARE_SERIALIZER(UOpenAITTSBPLibrary)


#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUOpenAITTSBPLibrary(); \
	friend struct Z_Construct_UClass_UOpenAITTSBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UOpenAITTSBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OpenAITTS"), NO_API) \
	DECLARE_SERIALIZER(UOpenAITTSBPLibrary)


#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenAITTSBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenAITTSBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAITTSBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAITTSBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAITTSBPLibrary(UOpenAITTSBPLibrary&&); \
	NO_API UOpenAITTSBPLibrary(const UOpenAITTSBPLibrary&); \
public: \
	NO_API virtual ~UOpenAITTSBPLibrary();


#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOpenAITTSBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOpenAITTSBPLibrary(UOpenAITTSBPLibrary&&); \
	NO_API UOpenAITTSBPLibrary(const UOpenAITTSBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOpenAITTSBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOpenAITTSBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOpenAITTSBPLibrary) \
	NO_API virtual ~UOpenAITTSBPLibrary();


#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_12_PROLOG
#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_RPC_WRAPPERS \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_ACCESSORS \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_INCLASS \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_SPARSE_DATA \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_ACCESSORS \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OPENAITTS_API UClass* StaticClass<class UOpenAITTSBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
