#include "WeaponUpgrade.h"

//int weaponLevel = 0;
int weaponLv = 0;
int basePower = 10;
int weight = 5;
//int weaponPower;
int currentAttackPower = 0;


void Upgrade()
{
	while (true)
	{
		system("cls");
		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			// Alt Ű���� ȭ��ǥ ��, �Ʒ�
			printf("��ȭ�� �����մϴ�.\n");
			// ������ ����
			// ������ �⺻ ���ݷ�
			// ����ġ
			// ���� ���ݷ�
			// ��ȭ�� ������ �����ϴ� case
			// ������ ������ 1��� ��ŵ�ϴ�.
			weaponLv = weaponLv + 1;
			//while (weaponLevel++<0) {
			//	printf("���� ������ ��ȭ�Ǿ����ϴ�");
			//}
			//printf("���� ���� : %d\n", weaponLevel);
			////weaponPower = basePower + weaponLevel * weaponPower// ���� ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
			//weaponPower = basePower + weaponLevel * weight;
			currentAttackPower = basePower + weaponLv * weight;
			//printf("���� ���ݷ� : %d\n", weaponPower);
			// printf(���� ���ݷ�, ����)
			printf("���� ���ݷ� : %d, ������ ���� : %d\n", currentAttackPower, weaponLv);
		}
		else if (inputNumber == 2)
		{
			printf("��ȭ�� ����մϴ�.\n");
		}
		else if (inputNumber == 3)
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		else
		{
			printf("�߸��� ���� �Է��߽��ϴ�.\n");
		}

		// �÷��̾ Ư�� Ű�� �Է����� �� �Ѿ���� �ϰ� �ʹ�.

		

	}

}
