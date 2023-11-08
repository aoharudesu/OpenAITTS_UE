// OpenAITTSBPLibrary.cpp

#include "OpenAITTSBPLibrary.h"
#include "Misc/FileHelper.h"


void UOpenAITTSBPLibrary::OpenAISpeechRequest(
	const FString& ApiKey,
	const FString& Model,
	const FString& Input,
	const FString& Voice,
	const FString& FilePath,
	FOpenAIResponseDelegate ResponseDelegate
)
{
	FHttpModule* Http = &FHttpModule::Get();
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
	Request->SetVerb("POST");
	Request->SetURL("https://api.openai.com/v1/audio/speech");
	Request->SetHeader("Authorization", FString("Bearer ") + ApiKey);
	Request->SetHeader("Content-Type", "application/json");

	FString RequestBody = FString::Printf(TEXT("{\"model\":\"%s\",\"input\":\"%s\",\"voice\":\"%s\"}"), *Model, *Input, *Voice);
	Request->SetContentAsString(RequestBody);

	Request->OnProcessRequestComplete().BindLambda([FilePath, ResponseDelegate](FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
		{
			if (bWasSuccessful && Response.IsValid() && EHttpResponseCodes::IsOk(Response->GetResponseCode()))
			{
				FFileHelper::SaveArrayToFile(Response->GetContent(), *FilePath);
				ResponseDelegate.ExecuteIfBound(true, FilePath);
			}
			else
			{
				ResponseDelegate.ExecuteIfBound(false, TEXT(""));
			}
		});

	Request->ProcessRequest();
}





