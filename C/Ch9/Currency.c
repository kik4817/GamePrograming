#include "Currency.h"

// ���� ����ϸ� true : false;
bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount ? true : false;
}

bool UseMoney(int price)
{
	// if(����)
	if (IsEnoughMoney(price))
	{
		CurrentMoney = CurrentMoney - price;
		ShowInfo();
		//printf("���� ������ �ݾ� : %d\n", CurrentMoney);
		return true;
	}
	else
	{
		printf("���� �����մϴ�.\n");
		return false;
	}
}

void GetMoney()
{
	int money = 100;
	CurrentMoney = CurrentMoney + money;
	printf("���� �������ϴ� : %d\n", CurrentMoney);
}