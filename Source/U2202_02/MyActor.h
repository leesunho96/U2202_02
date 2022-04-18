// Fill out your copyright notice in the Description page of Project Settings.



/*
	언리얼 엔진은 garbage Collection 지원함. => UPROPERTY Keyword 필요함.
	-> UPROPERTY는 '언리얼 오브젝트' 라 하는 특수한 객체에만 적용 가능.

	Unreal Object : 언리얼 실행 환경에서 관리되는 C++ 객체.
	기본적으로 콘텐츠 구성하는 대부분의 객체는 Unreal Object이다.


	Unreal Object가 되기 위해선 4가지 조건 필요함.
	1. 클래스 선언 매크로.
	- 해당 클래스가 Unreal Object임을 선언하기 위하여 클래스 선언 윗줄에 UCLASS Keyword
	추가하고, 클래스 내부에는 GENERATED_BODY 매크로 삽입.

	2. 클래스 이름 접두사. 
	- Unreal Object의 클래스 이름에는 항상 적절한 접두사가 필요하다.
	- 크게 U, A가 제공되며 A : Actor 클래스, 그 외의 대부분 클래스는 U 이용.
	- 해당 클래스는 액터임으로 AMyActor이며, 해당 클래스의 스태틱 매시는 U로 선언.

	3. generated.h 헤더파일.
	- 언리얼 엔진은 소스코드 컴파일 이전에 'Unreal Header Tool' 이라하는 도구를 사용하여
	클래스 선언을 분석 한 후, 언리얼 실행환경에 필요한 부가정보를 별도의 파일에 저장한다.
	- 해당 Unreal Header Tool에 의해 생성된 부가 정보들이 class.generated.h 이다.

	4. 외부에 모듈 공개 여부.
	- 윈도우의 DLL은 DLL내의 클래스 정보를 외부에 공개 할 지 결정하는 _declspec(dllexport) keyword 를 제공
	- 언리얼 엔진에서 해당 키워드를 사용하기 위해서는 '모듈명_API' keykword를 클래스 선언 앞에 추가하면 된다.
	- 해당 키워드 없는 경우 타 모듈에서 해당 객체에 접근 불가능

*/

#pragma once

#include "EngineMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"


// Unreal Object 조건 1.
UCLASS()
class U2202_02_API AMyActor/* Unreal Object 조건 2*/ : public AActor
{
	// Unreal Object 조건 1.
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
