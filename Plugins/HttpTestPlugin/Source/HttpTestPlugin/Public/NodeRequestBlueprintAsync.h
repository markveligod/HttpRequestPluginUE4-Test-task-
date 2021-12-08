// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HTTPDataTypes.h"
#include "Interfaces/IHttpRequest.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "NodeRequestBlueprintAsync.generated.h"

class FHttpModule;
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHTTPRequestStatus, FInfoData, SomeData);

/**
 * 
 */
UCLASS()
class HTTPTESTPLUGIN_API UNodeRequestBlueprintAsync : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true"))
	static UNodeRequestBlueprintAsync* RequestRickyMorty();
	
	UPROPERTY(BlueprintAssignable)
	FHTTPRequestStatus OnSuccess;

	UPROPERTY(BlueprintAssignable)
	FHTTPRequestStatus OnFail;

	void Start();

	/** Handles image requests coming from the web */
	void HandleRequest(FHttpRequestPtr HttpRequest, FHttpResponsePtr HttpResponse, bool bSucceeded);

private:
	FInfoData InfoData;
	
	// Download texture status - success
	UFUNCTION()
	void DownloadSuccess(UTexture2DDynamic* Texture);

	// Download texture status - fail
	UFUNCTION()
	void DownloadFail(UTexture2DDynamic* Texture);

	
};
