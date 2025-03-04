#pragma once

// Money System header 구현
// Upgrade System header 구현

#include <stdio.h>   // 입출력 함수를 포함하는 헤더
#include <stdbool.h> // bool type 추가
#include <conio.h>   // _getch() 입력 버퍼 없이 입출력 함수를 포함하는 헤더
#include <Windows.h> // system("cls") 윈도우 콘솔 함수 포함되어 있는 헤더
//#include <stdlib.h>  // rand() 사용하기 위한 헤더
//#include <time.h>    // time() 사용하기 위한 헤더
#include "Random.h"  // <stdlib.h>, <time.h>는 Random에 포함되어있다
#include "Currency.h"// 코스트 사용 함수를 위한 사용자 지정 헤더 

void ShowMenu(); // 1. 강화하다. 2. 상태를 보여준다.
// ShowMenu에 따른 실행 함수

void Upgrade();
void ShowStatus();

// 게임의 종료 조건
// 목표를 달성했는가? - success 성공

bool IsGameClear(); // 무기의 레벨

// 소지금을 전부 사용했는가? - fail 실패

// 전역 변수

extern int CurrentLevel;
extern int Targetlevel;
extern bool isClear;
extern bool isFail;

