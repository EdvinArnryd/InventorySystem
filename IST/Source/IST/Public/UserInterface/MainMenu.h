// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IST/TP_TopDownPlayerController.h"
#include "MainMenu.generated.h"

class UGridWidget;
/**
 * 
 */
UCLASS()
class IST_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY()
	ATP_TopDownPlayerController* PlayerCharacter;
	UPROPERTY(meta = (BindWidget))
	UGridWidget* GridWidget;

	
protected:
	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
		UDragDropOperation* InOperation) override;
	
};
