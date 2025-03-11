#include "GetM.h"

int TotalM = 0;
int EM = 100;
int NM = 500;
int HM = 1000;

bool IsEnoughM(int amount)
{
	return TotalM >= amount ? true : false;
}
bool IsEnoughP(int amount1)
{
	return TPW >= amount1 ? true : false;
}

bool UseM(int price)
{
	if (IsEnoughM(price))
	{
		TotalM -= price;
		printf("현제 가진 돈 : %d\n", TotalM);
		return true;
	}
	else
	{
		printf("돈이 부족합니다.\n");
		return false;
	}
}
bool GetM(int price1)
{
	if (IsEnoughP(price1))
	{
		TotalM += price1;
		//printf("현제 가진 돈 : %dG\n", TotalM);
		return true;
	}
	else
	{
		printf("공격력이 부족합니다.\n");
		return false;
	}
}

void GetMoeny()
{
	int EMonster = 0;
	int NMonster = 20;
	int HMonster = 200;
	printf("1. 쉬움 : 필요 공격력 0, 100G\n");
	printf("2. 보통 : 필요 공격력 20. 500G\n");
	printf("3. 어려움 : 필요 공격력 200. 1000G\n");


	int inputN = -1;
	scanf_s("%d", &inputN);
	while (getchar() != '\n');

	if (inputN == 1)
	{
		if (GetM(EMonster))
		{
			TotalM += EM;
			printf("%dG 획득하였습니다.\n", TotalM);
		}
	}
	else if (inputN == 2)
	{
		if (GetM(NMonster))
		{
			TotalM += NM;
			printf("%dG 획득하였습니다.\n", TotalM);
		}
	}
	else if (inputN == 3)
	{
		if (GetM(HMonster))
		{
			TotalM += HM;
			printf("%dG 획득하였습니다.\n", TotalM);
		}
	}
	else
	{
		printf("잘못 입력하였습니다.\n");
	}

}

