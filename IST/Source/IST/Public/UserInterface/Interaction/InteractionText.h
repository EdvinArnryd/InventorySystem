// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InteractionText.generated.h"

class UItemBase;
class UTextBlock;
/**
 **/
UCLASS()
class IST_API UInteractionText : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UPROPERTY(VisibleAnywhere, meta = (BindWidget), Category="Interaction")
	UTextBlock* Name;
	
protected:

	virtual void NativeOnInitialized() override;
	virtual void NativeConstruct() override;
};
