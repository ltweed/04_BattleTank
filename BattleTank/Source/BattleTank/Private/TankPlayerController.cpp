// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "BattleTank.h"

ATank* ATankPlayerController::GetControlledTank() const
{
	
	return Cast<ATank>(GetPawn());
	

}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController BeginPlay"))
		auto ControlledTank = GetControlledTank();
		if (!ControlledTank)
		{
			UE_LOG(LogTemp, Warning, TEXT("No Tank"))
		}
	UE_LOG(LogTemp, Warning, TEXT("Controlled Tank: %s"), *(ControlledTank->GetName()))
}
