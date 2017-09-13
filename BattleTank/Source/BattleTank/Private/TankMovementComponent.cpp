// Fill out your copyright notice in the Description page of Project Settings.

#include "TankMovementComponent.h"
#include "BattleTankGameModeBase.h"
#include "TankTread.h"


void UTankMovementComponent::Initialise(UTankTread* LeftTrackToSet, UTankTread* RightTrackToSet)
{
	if (!LeftTrackToSet || !RightTrackToSet) { return; }
	LeftTrack = LeftTrackToSet;
	RightTrack = RightTrackToSet;
}

void UTankMovementComponent::IntendMoveForward(float Throw)
{

	//auto Time = GetWorld()->GetTimeSeconds();
	UE_LOG(LogTemp, Warning, TEXT("Intend move forward:  %f"), Throw)

	LeftTrack->SetThrottle(Throw);
	RightTrack->SetThrottle(Throw);
}
