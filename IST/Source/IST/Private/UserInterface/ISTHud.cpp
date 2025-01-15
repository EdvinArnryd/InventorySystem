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
		bIsMenuVisiable = true;
		MainMenuWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void AISTHud::ShowInteractionWidget()
{
	if (InteractionWidget)
	{
		InteractionWidget->SetVisibility(ESlateVisibility::Visible);
	}
}

void AISTHud::HideInteractionWidget()
{
	if (InteractionWidget)
	{
		InteractionWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}


void AISTHud::UpdateInteractionWidget(const FInteractableData* InteractableData)
{
	if (InteractionWidget)
	{
		if (InteractionWidget->GetVisibility() == ESlateVisibility::Collapsed)
		{
			InteractionWidget->SetVisibility(ESlateVisibility::Visible);
		}

		//InteractionWidget->UpdateWidget(InteractableData);
	}
}