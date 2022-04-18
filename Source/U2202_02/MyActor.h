// Fill out your copyright notice in the Description page of Project Settings.



/*
	�𸮾� ������ garbage Collection ������. => UPROPERTY Keyword �ʿ���.
	-> UPROPERTY�� '�𸮾� ������Ʈ' �� �ϴ� Ư���� ��ü���� ���� ����.

	Unreal Object : �𸮾� ���� ȯ�濡�� �����Ǵ� C++ ��ü.
	�⺻������ ������ �����ϴ� ��κ��� ��ü�� Unreal Object�̴�.


	Unreal Object�� �Ǳ� ���ؼ� 4���� ���� �ʿ���.
	1. Ŭ���� ���� ��ũ��.
	- �ش� Ŭ������ Unreal Object���� �����ϱ� ���Ͽ� Ŭ���� ���� ���ٿ� UCLASS Keyword
	�߰��ϰ�, Ŭ���� ���ο��� GENERATED_BODY ��ũ�� ����.

	2. Ŭ���� �̸� ���λ�. 
	- Unreal Object�� Ŭ���� �̸����� �׻� ������ ���λ簡 �ʿ��ϴ�.
	- ũ�� U, A�� �����Ǹ� A : Actor Ŭ����, �� ���� ��κ� Ŭ������ U �̿�.
	- �ش� Ŭ������ ���������� AMyActor�̸�, �ش� Ŭ������ ����ƽ �Žô� U�� ����.

	3. generated.h �������.
	- �𸮾� ������ �ҽ��ڵ� ������ ������ 'Unreal Header Tool' �̶��ϴ� ������ ����Ͽ�
	Ŭ���� ������ �м� �� ��, �𸮾� ����ȯ�濡 �ʿ��� �ΰ������� ������ ���Ͽ� �����Ѵ�.
	- �ش� Unreal Header Tool�� ���� ������ �ΰ� �������� class.generated.h �̴�.

	4. �ܺο� ��� ���� ����.
	- �������� DLL�� DLL���� Ŭ���� ������ �ܺο� ���� �� �� �����ϴ� _declspec(dllexport) keyword �� ����
	- �𸮾� �������� �ش� Ű���带 ����ϱ� ���ؼ��� '����_API' keykword�� Ŭ���� ���� �տ� �߰��ϸ� �ȴ�.
	- �ش� Ű���� ���� ��� Ÿ ��⿡�� �ش� ��ü�� ���� �Ұ���

*/

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"


// Unreal Object ���� 1.
UCLASS()
class U2202_02_API AMyActor/* Unreal Object ���� 2*/ : public AActor
{
	// Unreal Object ���� 1.
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY()
	UStaticMeshComponent *Body;

	UPROPERTY()
	UStaticMeshComponent *Effect;
};
