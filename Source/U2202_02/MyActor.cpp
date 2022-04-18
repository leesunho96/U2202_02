// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// CreateDefaultSubobject : �ش� ��ü�� �����ϱ� ���� Hash ������ �̿��.
	// ���� ������ ��� ������ �ߺ����� �ʴ� ������ �� �Է��� �ʿ��ϴ�.
	// TEXT�� ��� ������ �Է� ���� ������ Ÿ������ �����ϵ��� �ϴ� ��ũ��.


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

