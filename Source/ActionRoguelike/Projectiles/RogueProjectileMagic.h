// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RogueProjectile.h"
#include "RogueProjectileMagic.generated.h"

class UProjectileMovementComponent;
class USphereComponent;

UCLASS()
class ACTIONROGUELIKE_API ARogueProjectileMagic : public ARogueProjectile
{
	GENERATED_BODY()

protected:


	UPROPERTY(EditDefaultsOnly, Category="Components")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovementComponent;
	
public:
	// Sets default values for this actor's properties
	ARogueProjectileMagic();
};
