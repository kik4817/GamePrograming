#include "Upgrade.h"

int weaponLV = 0;
int normalLV = 1;
int advancedLV = 0;
int baseAP = 10;
int currentAP = 0;

void ShowUpgradeMenu()
{
	int normalCost = 100;
	int hightCost = 500;

	while (true)
	{
		printf("1_강화한다.\n");
		printf("2_고급 제련소 이용.\n");
		printf("3_돈벌기.\n");
		printf("4_강화를 취소한다.\n");

		int inputnumber = 0;

		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');

		if (inputnumber == 1)
		{
			if (UseMoney(normalCost))
			{
				WeaponUpgrade();
			}
		}
		else if (inputnumber == 2)
		{
			if (UseMoney(hightCost))
			{
				AdvancedWeaponUpgrade();
			}
		}
		else if (inputnumber == 3)
		{
			GetMoney();
		}
		else if (inputnumber == 4)
		{
			printf("강화를 취소\n");
			break;
		}
		else
		{
			printf("잘못된 입력 값\n");
		}
	}

}

void WeaponUpgrade()
{
	int weight = 5;

	normalLV = normalLV + 1;
	currentAP =  currentAP + baseAP + weaponLV * weight;
	
	weaponLV = normalLV + advancedLV;

	printf("현제 무기 레벨 : %d. 현제 무기 공격력 : %d\n", weaponLV, currentAP);

}

void AdvancedWeaponUpgrade()
{
	int weight = 50;

	advancedLV = advancedLV + 1;
	currentAP = currentAP + baseAP + weaponLV * weight;

	weaponLV = normalLV + advancedLV;

	printf("현제 무기 레벨 : %d 현제 무기 공격력 : %d\n", weaponLV, currentAP);
}
