// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HTTPDataTypes.h"
#include "Blueprint/UserWidget.h"
#include "HttpRickyMortyUserWidget.generated.h"

class UImage;
class UTextBlock;
/**
 *
 */
UCLASS()
class HTTPTESTPLUGIN_API UHttpRickyMortyUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "UHttpRickyMortyUserWidget")
	void SetupWidgetText(const FInfoData& InfoData);

private:
	// Set bind widget from TextBlock class
	UPROPERTY(Transient, meta = (BindWidget))
	UTextBlock* IdTextBlock;
	UPROPERTY(Transient, meta = (BindWidget))
	UTextBlock* NameTextBlock;
	UPROPERTY(Transient, meta = (BindWidget))
	UTextBlock* StatusTextBlock;
	UPROPERTY(Transient, meta = (BindWidget))
	UTextBlock* SpeciesTextBlock;
	UPROPERTY(Transient, meta = (BindWidget))
	UTextBlock* TypeTextBlock;
	UPROPERTY(Transient, meta = (BindWidget))
	UTextBlock* GenderTextBlock;
	UPROPERTY(Transient, meta = (BindWidget))
	UTextBlock* URLTextBlock;
	UPROPERTY(Transient, meta = (BindWidget))
	UTextBlock* CreatedTextBlock;

	// Image from download
	UPROPERTY(Transient, meta = (BindWidget))
	UImage* DownloadImage;
	// Image size for DownloadImage
	UPROPERTY(EditDefaultsOnly, Category = "Settings image")
	FVector2D ImageSize{200.0f, 200.0f};
};
