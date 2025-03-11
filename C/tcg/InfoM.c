#include "InfoM.h"
#include "PlayG.h"
#include "Map.h"
#include "GetM.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>




void ShowInfoM()
{
	printf("■■■■■     ■■        ■■ \n");
	printf("    ■       ■    ■    ■    ■\n");
	printf("    ■     ■          ■    \n");
	printf("    ■       ■    ■    ■   ■■\n");
	printf("    ■         ■■        ■   ■\n\n");
	printf("■■■■■■■■■■■■■■■■■\n\n");

}

void ShowMenu()
{
	while (1)
	{
		printf("  1. 조작방법.\n");
		printf("  2. 시작한다.\n");
		printf("  3. 종료한다.\n");

		int inputN = -1;
		scanf_s("%d", &inputN);
		while (getchar() != '\n');

		if (inputN == 1)
		{
			ShowMenuG();
		}
		else if (inputN == 2)
		{
			ShowPlayG();
		}
		else if (inputN == 3)
		{
			break;
		}
		else
		{
			printf("키를 잘못 입력했습니다.\n");
		}
	}
		
}
