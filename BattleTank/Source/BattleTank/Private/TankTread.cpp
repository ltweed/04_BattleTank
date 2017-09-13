// Fill out your copyright notice in the Description page of Project Settings.

#include "TankTread.h"
#include "BattleTank.h"




void UTankTread::SetThrottle(float Throttle)
{


		auto ForceApplied = GetForwardVector() * Throttle* TrackMaxDrivingForce;
	auto ForceLocation = GetComponentLocation();
	auto TankRoot = Cast<UPrimitiveComponent>(GetOwner()->GetRootComponent());
	TankRoot->AddForceAtLocation(ForceApplied, ForceLocation);
}