// Fill out your copyright notice in the Description page of Project Settings.


#include "RogueProjectile.h"
#include "NiagaraComponent.h"
#include "Components/SphereComponent.h"


// Sets default values
ARogueProjectile::ARogueProjectile()
{
	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	RootComponent = SphereComponent;
	SphereComponent->SetSphereRadius(16.0f);
	SphereComponent->SetCollisionProfileName(TEXT("Projectile"));
	
	LoopedNiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("LoopedNiagaraComp"));
	LoopedNiagaraComponent->SetupAttachment(SphereComponent);
}