// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// CreateDefaultSubobject : 해당 객체를 구별하기 위한 Hash 생성에 이용됨.
	// 값의 종류는 상관 없지만 중복되지 않는 유일한 값 입력이 필요하다.
	// TEXT는 모든 종류의 입력 값을 동일한 타입으로 유지하도록 하는 매크로.


	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BODY"));
	Effect = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EFFECT"));

	RootComponent = Body;
	Effect->SetupAttachment(Body);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);



}

