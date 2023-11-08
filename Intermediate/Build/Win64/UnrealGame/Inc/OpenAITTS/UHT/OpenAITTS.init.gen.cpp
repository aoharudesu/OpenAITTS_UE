// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenAITTS_init() {}
	OPENAITTS_API UFunction* Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OpenAITTS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OpenAITTS()
	{
		if (!Z_Registration_Info_UPackage__Script_OpenAITTS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OpenAITTS_OpenAIResponseDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OpenAITTS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9631808F,
				0x638931DE,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OpenAITTS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OpenAITTS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OpenAITTS(Z_Construct_UPackage__Script_OpenAITTS, TEXT("/Script/OpenAITTS"), Z_Registration_Info_UPackage__Script_OpenAITTS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9631808F, 0x638931DE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
