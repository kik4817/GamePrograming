#include "PlayG.h"
#include "Map.h"
#include "GetM.h"
#include "UpW.h"



void ShowMenuG()
{
	printf("Test C Game 설명서\n\n");
	printf("목표 달성 두가지 선택지\n");
	printf("1. 최종 보스를 잡는다\n");
	printf("2. 돈을 10,000을 번다.\n\n");
	printf("☆ : 플레이어\n★ : 보스\n● : 돈 벌기\n▲ : 강화하기\n");
}

void ShowPlayG()
{
	printf("1.돈 벌로가기\n2.무기강화하기\n3.상태창 보기\n\n");
	int inputN = -1;
	scanf_s("%d", &inputN);

	if (inputN == 1)
	{
		GetMoeny();
	}
	else if (inputN == 2)
	{
		UGW();
	}
	else if (inputN == 3)
	{
		ShowPlayerInfo();
	}
	else
	{

	}

}

void ShowPlayerInfo()
{
	printf("소지하고 있는 돈 : %dG\n", TotalM);
	printf("무기 레벨 : %d\n", TLV);
	printf("무기 공격력 : %d\n", TPW);

}

