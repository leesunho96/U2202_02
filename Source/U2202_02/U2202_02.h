// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"



/*
	매개변수로 ..., ##VA_ARGS
	=> 가변인자 매크로.


	매개변수가 어떻게 주어질 지 모르는 경우 가변인자 매크로 사용하여 매크로 작성 가능.
	고정 매개변수가 없이 가변인자만 사용하는 경우 __VA_ARGS__로 사용, 고정 매개변수가 존재 하는 경우 ##__VA_ARGS__ 사용

	-> #define Printf(...) Printf(__VA_ARGS__) // 고정 매개변수가 없는 경우
	-> #define Printf(Format, ...) Printf(Format, #__VA__ARGS__) // 고정 매개변수가 있는 경우.
*/

