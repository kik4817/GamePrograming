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
		printf("���� ���� �� : %d\n", TotalM);
		return true;
	}
	else
	{
		printf("���� �����մϴ�.\n");
		return false;
	}
}
bool GetM(int price1)
{
	if (IsEnoughP(price1))
	{
		TotalM += price1;
		//printf("���� ���� �� : %dG\n", TotalM);
		return true;
	}
	else
	{
		printf("���ݷ��� �����մϴ�.\n");
		return false;
	}
}

void GetMoeny()
{
	int EMonster = 0;
	int NMonster = 20;
	int HMonster = 200;
	printf("1. ���� : �ʿ� ���ݷ� 0, 100G\n");
	printf("2. ���� : �ʿ� ���ݷ� 20. 500G\n");
	printf("3. ����� : �ʿ� ���ݷ� 200. 1000G\n");


	int inputN = -1;
	scanf_s("%d", &inputN);
	while (getchar() != '\n');

	if (inputN == 1)
	{
		if (GetM(EMonster))
		{
			TotalM += EM;
			printf("%dG ȹ���Ͽ����ϴ�.\n", TotalM);
		}
	}
	else if (inputN == 2)
	{
		if (GetM(NMonster))
		{
			TotalM += NM;
			printf("%dG ȹ���Ͽ����ϴ�.\n", TotalM);
		}
	}
	else if (inputN == 3)
	{
		if (GetM(HMonster))
		{
			TotalM += HM;
			printf("%dG ȹ���Ͽ����ϴ�.\n", TotalM);
		}
	}
	else
	{
		printf("�߸� �Է��Ͽ����ϴ�.\n");
	}

}

