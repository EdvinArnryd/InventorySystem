// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainMenu.h"
#include "GameFramework/HUD.h"
#include "Interaction/InteractionWidget.h"
#include "TetrisUI/GridWidget.h"
#include "ISTHud.generated.h"

/**
 * 
 */
UCLASS()
class IST_API AISTHud : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, Category="Widgets")
	TSubclassOf<UUserWidget> MainMenuClass;

	UPROPERTY(EditDefaultsOnly, Category="Widgets")
	TSubclassOf<UUserWidget> GridWidgetClass;

	UPROPERTY(EditDefaultsOnly, Category="Widgets")
	TSubclassOf<UInteractionWidget> InteractionWidgetClass;

	bool bIsMenuVisiable;

	bool bIsTetrisVisible;

	AISTHud();

	void DisplayMenu();
	void HideMenu();
	void ToggleMenu();
	void ToggleTetris();

	void ShowInteractionWidget() const;
	void HideInteractionWidget() const;
	void UpdateInteractionWidget(const FInteractableData* InteractableData) const;

protected:
	UPROPERTY()
	UMainMenu* MainMenuWidget;

	UPROPERTY()
	UGridWidget* GridWidget;

	UPROPERTY()
	UInteractionWidget* InteractionWidget;

	virtual void BeginPlay() override;
};
