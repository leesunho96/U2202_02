// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingSwordActor.h"

// Sets default values
AFlyingSwordActor::AFlyingSwordActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Effect = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EFFECT"));

	RootComponent = Body;
	Effect->SetupAttachment(Body);

}

// Called when the game starts or when spawned
void AFlyingSwordActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlyingSwordActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

