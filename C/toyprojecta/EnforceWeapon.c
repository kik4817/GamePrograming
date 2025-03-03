#include "EnforceWeapon.h"

void ShowMenu()
{
	printf("1_ 강화한다.\n");
	printf("2_ 현재 상태를 확인한다.\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while (getchar() != '\n');

	if (inputNumber == 1)
	{
		// 강화한다
		//printf("강화한다.\n"); // Upgrade 함수로 대체
		Upgrade();
	}
	else if (inputNumber == 2)
	{
		// 상태를 확인한다.
		printf("상태를 확인한다.\n"); // ShowStatus 대체
	}
	else
	{
		// 잘못된 값
		printf("해당하는 입력값이 존재하지 않습니다.\n");
		printf("다시 값을 입력해주세요.\n");
	}

	// 게임이 클리어 여부를 확인
	if (IsGameClear())
	{
		//printf("게임을 클리어했습니다.\n");
		isClear = true;
	}
	else
	{
		printf("목표 레벨을 달성하지 못했습니다.\n");
	}

	printf("계속 진행하려면 아무 버튼을 입력해주세요.\n");
	_getch();
	system("cls");

}

void Upgrade()
{
	// CurrentLevel = CurrentLevel +1;
	// CurrentLevel += 1;
	CurrentLevel++;
}

void ShowStatus()
{

}

// 현제 무기 레벨 == 최대 레벨
bool IsGameClear()
{
	// 삼항 연산자
	// A ? B : c;
	// A 조건식이 true 이면 B를 반환 False 이변 C 반환;
	return CurrentLevel == Targetlevel ? true : false;
}