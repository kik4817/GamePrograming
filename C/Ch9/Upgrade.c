#include "Upgrade.h"

int weaponLV = 0;
int normalLV = 1;
int advancedLV = 0;
int baseAP = 10;
int currentAP = 0;

void ShowUpgradeMenu()
{
	while (true)
	{
		printf("1_��ȭ�Ѵ�.\n");
		printf("2_��� ���ü� �̿�.\n");
		printf("3_��ȭ�� ����Ѵ�.\n");

		int inputnumber = 0;

		scanf_s("%d", &inputnumber);
		while (getchar() != '\n');

		if (inputnumber == 1)
		{
			WeaponUpgrade();
		}
		else if (inputnumber == 2)
		{
			AdvancedWeaponUpgrade();
		}
		else if (inputnumber == 3)
		{
			printf("��ȭ�� ���\n");
			break;
		}
		else
		{
			printf("�߸��� �Է� ��\n");
		}
	}

}

void WeaponUpgrade()
{
	int weight = 5;

	normalLV = normalLV + 1;
	currentAP =  currentAP + baseAP + weaponLV * weight;
	
	weaponLV = normalLV + advancedLV;

	printf("���� ���� ���� : %d. ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);

}

void AdvancedWeaponUpgrade()
{
	int weight = 50;

	advancedLV = advancedLV + 1;
	currentAP = currentAP + baseAP + weaponLV * weight;

	weaponLV = normalLV + advancedLV;

	printf("���� ���� ���� : %d ���� ���� ���ݷ� : %d\n", weaponLV, currentAP);
}