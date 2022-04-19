// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"



/*
	�Ű������� ..., ##VA_ARGS
	=> �������� ��ũ��.


	�Ű������� ��� �־��� �� �𸣴� ��� �������� ��ũ�� ����Ͽ� ��ũ�� �ۼ� ����.
	���� �Ű������� ���� �������ڸ� ����ϴ� ��� __VA_ARGS__�� ���, ���� �Ű������� ���� �ϴ� ��� ##__VA_ARGS__ ���

	-> #define Printf(...) Printf(__VA_ARGS__) // ���� �Ű������� ���� ���
	-> #define Printf(Format, ...) Printf(Format, #__VA__ARGS__) // ���� �Ű������� �ִ� ���.
*/

