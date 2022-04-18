// Fill out your copyright notice in the Description page of Project Settings.


#include "FlyingSword.h"

// Sets default values
AFlyingSword::AFlyingSword()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// CreateDefaultSubobject의 TEXT에 들어가는 값은 액터에 속한 컴포넌트 구별을 위한 해시 값 생성에 사용.
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Effect = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EFFECT"));

	// RootComponent를 Body에, Effect를 Body의 하위에 지정.
	RootComponent = Body;
	Effect->SetupAttachment(Body);
}

// Called when the game starts or when spawned
void AFlyingSword::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFlyingSword::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFlyingSword::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

