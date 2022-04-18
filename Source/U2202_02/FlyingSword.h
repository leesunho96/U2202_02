// Fill out your copyright notice in the Description page of Project Settings.

	/*
	언리얼 오브젝트 객체 필요 조건.
	1. 클래스 선언 매크로 : 해당 클래스가 언리얼 오브젝트임을 알리기 위해서 클래스 선언 가장 윗줄에 UCLASS 라는 매크로 선언. 클래스 내부에는 GENERATED_BODY 매크로 선언.
	2. 클래스 이름 접두사 : 언리얼 오브젝트는 항상 규칙에 맞는 접두사가 필요. 크게 U, A로 나뉘는데 A : ACTOR, U : Actor가 아닌 클래스 에 사용한다.
	3. generated.h 헤더파일 : 기본적으로 언리얼 엔진은 언리얼 헤더 툴을 이용하여 클래스 선언을 분석 후, 그에 따라 필요한 부가 정보를 별도 파일에 생성한다. 해당 언리얼 헤더 툴을 이용하여 생성되는 파일이 generated.h 파일이다.
	   코드 작성 시점에서 존재하지 않더라도 컴파일시 필연적으로 발생하기 떄문에 오브젝트 선언 마지막에 해당 헤더 파일 생성 반드시 필요.
	4. 외부 모듈에의 공개 여부 : 윈도우의 dll 시스템은 dll 내 클래스 정보를 외부에 공개 할 지 결정하는 _declspec(dllexport) 키워드를 제공한다. 언리얼 엔진 에서는 해당 키워드를 사용 하려면
	   '모듈명_API' 라는 키워드를 클래스 선언 앞에 추가 함으로써 가능하다. 해당 키워드가 없으면 타 모듈에서 해당 객체에 접근 할 수 없다. 
	*/

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Character.h"
#include "FlyingSword.generated.h" // 언리얼 오브젝트 조건 3.

UCLASS() // 언리얼 오브젝트 조건 1.
class U2202_02_API/*언리얼 오브젝트 조건 4.*/ AFlyingSword : public ACharacter // 언리얼 오브젝트 조건 2.
{
	GENERATED_BODY() // 언리얼 오브젝트 조건 1.

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


	// UPEROPERTY() : 해당 포인터의 메모리를 엔진이 런타임에 자동으로 관리..
	// 언리얼 오브젝트 객체에만 사용가능함.

	UPROPERTY()
	UStaticMeshComponent *Body;

	UPROPERTY()
	UStaticMeshComponent *Effect;

};
