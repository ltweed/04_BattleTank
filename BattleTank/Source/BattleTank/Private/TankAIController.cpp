// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "Tank.h"

void ATankAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto PlayerTank = Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
	auto ControlledTank = Cast<ATank>(GetPawn());
	if (PlayerTank)
	{
		//TODO Move towards player
		
		// Aim towards player
		ControlledTank->AimAt(PlayerTank->GetActorLocation());
		ControlledTank->Fire();  // TODO don't fire every frame

	}
}





void ATankAIController::BeginPlay() 
{
	Super::BeginPlay();

}
