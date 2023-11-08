// OpenAITTSBPLibrary.h

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "OpenAITTSBPLibrary.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOpenAIResponseDelegate, bool, bWasSuccessful, FString, ResponseContent);

UCLASS()
class UOpenAITTSBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "OpenAI TTS")
	static void OpenAISpeechRequest(
		const FString& ApiKey,
		const FString& Model,
		const FString& Input,
		const FString& Voice,
		const FString& FilePath,
		FOpenAIResponseDelegate ResponseDelegate
	);
};
