// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h" 
#include "GameFramework/Actor.h"
#include "RogueProjectile.generated.h"

class USphereComponent;
class UNiagaraComponent;

UCLASS()
class ACTIONROGUELIKE_API ARogueProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ARogueProjectile();

protected:

	UPROPERTY(EditDefaultsOnly, Category="Components")
	TObjectPtr<USphereComponent> SphereComponent;
	
	UPROPERTY(EditDefaultsOnly, Category= "Components")
	TObjectPtr<UNiagaraComponent> LoopedNiagaraComponent;
};
 