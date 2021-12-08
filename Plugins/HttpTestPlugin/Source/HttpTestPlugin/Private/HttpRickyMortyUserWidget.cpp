// Fill out your copyright notice in the Description page of Project Settings.


#include "HttpTestPlugin/Public/HttpRickyMortyUserWidget.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "Engine/Texture2DDynamic.h"

void UHttpRickyMortyUserWidget::SetupWidgetText(const FInfoData& InfoData)
{
	this->IdTextBlock->SetText(FText::FromString(FString::FromInt(InfoData.RecievedId)));
	this->NameTextBlock->SetText(FText::FromString(InfoData.ReceivedName));
	this->StatusTextBlock->SetText(FText::FromString(InfoData.ReceivedStatus));
	this->SpeciesTextBlock->SetText(FText::FromString(InfoData.ReceivedSpecies));
	this->TypeTextBlock->SetText(FText::FromString(InfoData.ReceivedType));
	this->GenderTextBlock->SetText(FText::FromString(InfoData.ReceivedGender));
	this->URLTextBlock->SetText(FText::FromString(InfoData.ReceivedURL));
	this->CreatedTextBlock->SetText(FText::FromString(InfoData.ReceivedCreated));

	FSlateBrush Brush;
	Brush.SetImageSize(this->ImageSize);
	Brush.SetResourceObject(InfoData.Texture);
	this->DownloadImage->SetBrush(Brush);
}
