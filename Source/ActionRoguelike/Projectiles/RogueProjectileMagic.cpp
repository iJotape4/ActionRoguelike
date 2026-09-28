// Fill out your copyright notice in the Description page of Project Settings.


#include "RogueProjectileMagic.h"

#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"


// Sets default values
ARogueProjectileMagic::ARogueProjectileMagic()
{
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComp"));
	ProjectileMovementComponent->InitialSpeed = 2000.f;
	ProjectileMovementComponent->ProjectileGravityScale = 0.0f;
}
