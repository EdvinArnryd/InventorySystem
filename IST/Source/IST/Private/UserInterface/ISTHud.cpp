// Fill out your copyright notice in the Description page of Project Settings.


#include "UserInterface/ISTHud.h"
#include "UserInterface/MainMenu.h"
#include "UserInterface/Interaction/InteractionWidget.h"


AISTHud::AISTHud()
{
}

void AISTHud::BeginPlay()
{
	Super::BeginPlay();

	

	if (MainMenuClass)
	{
		MainMenuWidget = CreateWidget<UMainMenu>(GetWorld(), MainMenuClass);
		MainMenuWidget->AddToViewport(5);
		MainMenuWidget->SetVisibility(ESlateVisibility::Collapsed);
	}

	if (GridWidgetClass)
	{
		UE_LOG(LogTemp, Display, TEXT("Grid Widget created"));
		GridWidget = CreateWidget<UGridWidget>(GetWorld(), GridWidgetClass);
		GridWidget->AddToViewport(6);
		GridWidget->SetVisibility(ESlateVisibility::Collapsed);
	}

	if (InteractionWidgetClass)
	{
		InteractionWidget = CreateWidget<UInteractionWidget>(GetWorld(), InteractionWidgetClass);
		InteractionWidget->AddToViewport(-1);
		InteractionWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void AISTHud::DisplayMenu()
{
	if (MainMenuWidget)
	{
		bIsMenuVisiable = true;
		MainMenuWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void AISTHud::HideMenu()
{
	if (MainMenuWidget)
	{
		bIsMenuVisiable = false;
		MainMenuWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void AISTHud::ToggleMenu()
{
	if (bIsMenuVisiable)
	{
		HideMenu();
	}
	else
	{
		DisplayMenu();
	}
}

void AISTHud::ToggleTetris()
{
	if (bIsTetrisVisible)
	{
		GridWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
	else
	{
		GridWidget->SetVisibility(ESlateVisibility::Visible);
	}
	
	bIsTetrisVisible = !bIsTetrisVisible;
}

void AISTHud::ShowInteractionWidget() const
{
	if (InteractionWidget)
	{
		InteractionWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void AISTHud::HideInteractionWidget() const
{
	if (InteractionWidget)
	{
		InteractionWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void AISTHud::UpdateInteractionWidget(const FInteractableData* InteractableData) const
{
	if (InteractionWidget)
	{
		if (InteractionWidget->GetVisibility() == ESlateVisibility::Collapsed)
		{
			InteractionWidget->SetVisibility(ESlateVisibility::Visible);
		}

		InteractionWidget->UpdateWidget(InteractableData);
	}
}
