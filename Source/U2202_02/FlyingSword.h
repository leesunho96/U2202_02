// Fill out your copyright notice in the Description page of Project Settings.

	/*
	�𸮾� ������Ʈ ��ü �ʿ� ����.
	1. Ŭ���� ���� ��ũ�� : �ش� Ŭ������ �𸮾� ������Ʈ���� �˸��� ���ؼ� Ŭ���� ���� ���� ���ٿ� UCLASS ��� ��ũ�� ����. Ŭ���� ���ο��� GENERATED_BODY ��ũ�� ����.
	2. Ŭ���� �̸� ���λ� : �𸮾� ������Ʈ�� �׻� ��Ģ�� �´� ���λ簡 �ʿ�. ũ�� U, A�� �����µ� A : ACTOR, U : Actor�� �ƴ� Ŭ���� �� ����Ѵ�.
	3. generated.h ������� : �⺻������ �𸮾� ������ �𸮾� ��� ���� �̿��Ͽ� Ŭ���� ������ �м� ��, �׿� ���� �ʿ��� �ΰ� ������ ���� ���Ͽ� �����Ѵ�. �ش� �𸮾� ��� ���� �̿��Ͽ� �����Ǵ� ������ generated.h �����̴�.
	   �ڵ� �ۼ� �������� �������� �ʴ��� �����Ͻ� �ʿ������� �߻��ϱ� ������ ������Ʈ ���� �������� �ش� ��� ���� ���� �ݵ�� �ʿ�.
	4. �ܺ� ��⿡�� ���� ���� : �������� dll �ý����� dll �� Ŭ���� ������ �ܺο� ���� �� �� �����ϴ� _declspec(dllexport) Ű���带 �����Ѵ�. �𸮾� ���� ������ �ش� Ű���带 ��� �Ϸ���
	   '����_API' ��� Ű���带 Ŭ���� ���� �տ� �߰� �����ν� �����ϴ�. �ش� Ű���尡 ������ Ÿ ��⿡�� �ش� ��ü�� ���� �� �� ����. 
	*/

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "FlyingSword.generated.h" // �𸮾� ������Ʈ ���� 3.

UCLASS() // �𸮾� ������Ʈ ���� 1.
class U2202_02_API/*�𸮾� ������Ʈ ���� 4.*/ AFlyingSword : public ACharacter // �𸮾� ������Ʈ ���� 2.
{
	GENERATED_BODY() // �𸮾� ������Ʈ ���� 1.

public:
	// Sets default values for this character's properties
	AFlyingSword();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	// UPEROPERTY() : �ش� �������� �޸𸮸� ������ ��Ÿ�ӿ� �ڵ����� ����..
	// �𸮾� ������Ʈ ��ü���� ��밡����.

	UPROPERTY()
	UStaticMeshComponent *Body;

	UPROPERTY()
	UStaticMeshComponent *Effect;

};
