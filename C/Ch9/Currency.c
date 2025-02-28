#include "Currency.h"

// 돈이 충분하면 true : false;
bool IsEnoughMoney(int amount)
{
	return CurrentMoney >= amount ? true : false;
}

bool UseMoney(int price)
{
	// if(조건)
	if (IsEnoughMoney(price))
	{
		CurrentMoney = CurrentMoney - price;
		ShowInfo();
		//printf("현제 소유한 금액 : %d\n", CurrentMoney);
		return true;
	}
	else
	{
		printf("돈이 부족합니다.\n");
		return false;
	}
}

void GetMoney()
{
	int money = 100;
	CurrentMoney = CurrentMoney + money;
	printf("돈을 벌었습니다 : %d\n", CurrentMoney);
}