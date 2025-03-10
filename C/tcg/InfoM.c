#include "InfoM.h"
#include "PlayG.h"


void ShowInfoM()
{
	printf("■■■■■ □□□□□ □□□□□\n");
	printf("□□■□□ □□□□□ □□□□□\n");
	printf("□□■□□ □□□□□ □□□□□\n");
	printf("□□■□□ □□□□□ □□□□□\n");
	printf("□□■□□ □□□□□ □□□□□\n");
}

void ShowMenu()
{
	while (1)
	{
		printf("1. 조작방법.\n");
		printf("2. 시작한다.\n");
		printf("3. 종료한다.\n");

		int inputN = -1;
		scanf_s("%d", &inputN);
		//while (getchar() != '\n');

		if (inputN == 1)
		{
			ShowMenuG();
		}
		if (inputN == 2)
		{
			//ShowMap();
			ShowPlayG();
		}
		else if (inputN == 3)
		{
			printf("게임을 종료합니다.\n");
			break;
		}
		else
		{
			printf("키를 잘못 입력했습니다.\n");
		}
	}
}
