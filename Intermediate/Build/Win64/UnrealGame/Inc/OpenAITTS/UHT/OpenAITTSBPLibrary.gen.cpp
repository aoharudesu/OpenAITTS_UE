// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OpenAITTS/Public/OpenAITTSBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAITTSBPLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	OPENAITTS_API UClass* Z_Construct_UClass_UOpenAITTSBPLibrary();
	OPENAITTS_API UClass* Z_Construct_UClass_UOpenAITTSBPLibrary_NoRegister();
	OPENAITTS_API UFunction* Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OpenAITTS();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics
	{
		struct _Script_OpenAITTS_eventOpenAIResponseDelegate_Parms
		{
			bool bWasSuccessful;
			FString ResponseContent;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ResponseContent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_OpenAITTS_eventOpenAIResponseDelegate_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_OpenAITTS_eventOpenAIResponseDelegate_Parms), &Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::NewProp_ResponseContent = { "ResponseContent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_OpenAITTS_eventOpenAIResponseDelegate_Parms, ResponseContent), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::NewProp_ResponseContent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OpenAITTSBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OpenAITTS, nullptr, "OpenAIResponseDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::_Script_OpenAITTS_eventOpenAIResponseDelegate_Parms), Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UOpenAITTSBPLibrary::execOpenAISpeechRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ApiKey);
		P_GET_PROPERTY(FStrProperty,Z_Param_Model);
		P_GET_PROPERTY(FStrProperty,Z_Param_Input);
		P_GET_PROPERTY(FStrProperty,Z_Param_Voice);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_ResponseDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		UOpenAITTSBPLibrary::OpenAISpeechRequest(Z_Param_ApiKey,Z_Param_Model,Z_Param_Input,Z_Param_Voice,Z_Param_FilePath,FOpenAIResponseDelegate(Z_Param_ResponseDelegate));
		P_NATIVE_END;
	}
	void UOpenAITTSBPLibrary::StaticRegisterNativesUOpenAITTSBPLibrary()
	{
		UClass* Class = UOpenAITTSBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OpenAISpeechRequest", &UOpenAITTSBPLibrary::execOpenAISpeechRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics
	{
		struct OpenAITTSBPLibrary_eventOpenAISpeechRequest_Parms
		{
			FString ApiKey;
			FString Model;
			FString Input;
			FString Voice;
			FString FilePath;
			FScriptDelegate ResponseDelegate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApiKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ApiKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Voice_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Voice;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_ResponseDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_ApiKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_ApiKey = { "ApiKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenAITTSBPLibrary_eventOpenAISpeechRequest_Parms, ApiKey), METADATA_PARAMS(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_ApiKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_ApiKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Model_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenAITTSBPLibrary_eventOpenAISpeechRequest_Parms, Model), METADATA_PARAMS(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenAITTSBPLibrary_eventOpenAISpeechRequest_Parms, Input), METADATA_PARAMS(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Input_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Voice_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenAITTSBPLibrary_eventOpenAISpeechRequest_Parms, Voice), METADATA_PARAMS(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Voice_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Voice_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenAITTSBPLibrary_eventOpenAISpeechRequest_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_FilePath_MetaData)) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_ResponseDelegate = { "ResponseDelegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(OpenAITTSBPLibrary_eventOpenAISpeechRequest_Parms, ResponseDelegate), Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1058869132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_ApiKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_Voice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::NewProp_ResponseDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "OpenAI TTS" },
		{ "ModuleRelativePath", "Public/OpenAITTSBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOpenAITTSBPLibrary, nullptr, "OpenAISpeechRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::OpenAITTSBPLibrary_eventOpenAISpeechRequest_Parms), Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenAITTSBPLibrary);
	UClass* Z_Construct_UClass_UOpenAITTSBPLibrary_NoRegister()
	{
		return UOpenAITTSBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOpenAITTSBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenAITTSBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenAITTS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOpenAITTSBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOpenAITTSBPLibrary_OpenAISpeechRequest, "OpenAISpeechRequest" }, // 3046754501
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenAITTSBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OpenAITTSBPLibrary.h" },
		{ "ModuleRelativePath", "Public/OpenAITTSBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenAITTSBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenAITTSBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenAITTSBPLibrary_Statics::ClassParams = {
		&UOpenAITTSBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenAITTSBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenAITTSBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenAITTSBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UOpenAITTSBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenAITTSBPLibrary.OuterSingleton, Z_Construct_UClass_UOpenAITTSBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenAITTSBPLibrary.OuterSingleton;
	}
	template<> OPENAITTS_API UClass* StaticClass<UOpenAITTSBPLibrary>()
	{
		return UOpenAITTSBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenAITTSBPLibrary);
	UOpenAITTSBPLibrary::~UOpenAITTSBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenAITTSBPLibrary, UOpenAITTSBPLibrary::StaticClass, TEXT("UOpenAITTSBPLibrary"), &Z_Registration_Info_UClass_UOpenAITTSBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenAITTSBPLibrary), 2881879361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_3599365696(TEXT("/Script/OpenAITTS"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_OpenAITTS_Source_OpenAITTS_Public_OpenAITTSBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
