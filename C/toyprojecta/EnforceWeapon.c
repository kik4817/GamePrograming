#include "EnforceWeapon.h"

void ShowMenu()
{
	printf("1_ ��ȭ�Ѵ�.\n");
	printf("2_ ���� ���¸� Ȯ���Ѵ�.\n");

	int inputNumber = -1;
	scanf_s("%d", &inputNumber);
	while (getchar() != '\n');

	if (inputNumber == 1)
	{
		// ���׷��̵� ����� �����Ѵ�.
		if (CanUpgrade(UpgradeCost));
		{
			if (CheckRandomFunc(50))
			{
				Upgrade();
			}
			else
			{
				printf("��ȭ�� �����߽��ϴ�.\n");
			}

		}
		ShowStatus();

		// ��ȭ�Ѵ�
		//printf("��ȭ�Ѵ�.\n"); // Upgrade �Լ��� ��ü
	}
	else if (inputNumber == 2)
	{
		// ���¸� Ȯ���Ѵ�.
		//printf("���¸� Ȯ���Ѵ�.\n"); // ShowStatus ��ü
		ShowStatus();
	}
	else
	{
		// �߸��� ��
		printf("�ش��ϴ� �Է°��� �������� �ʽ��ϴ�.\n");
		printf("�ٽ� ���� �Է����ּ���.\n");
	}

	// ������ Ŭ���� ���θ� Ȯ��
	if (IsGameClear())
	{
		//printf("������ Ŭ�����߽��ϴ�.\n");
		isClear = true;
	}
	else
	{
		printf("��ǥ ������ �޼����� ���߽��ϴ�.\n");
	}

	printf("��� �����Ϸ��� �ƹ� ��ư�� �Է����ּ���.\n");
	_getch();
	system("cls");

}

void Upgrade()
{
	// CurrentLevel = CurrentLevel +1;
	// CurrentLevel += 1;
	CurrentLevel++;

	printf("��ȭ�� �����߽��ϴ�.\n");
}

void ShowStatus()
{
	printf("���� ���� ���� : %d\n", CurrentLevel);
	printf("���� ������ �ݾ� : %d\n\n", CurrentMoney);

}

// ���� ���� ���� == �ִ� ����
bool IsGameClear()
{
	// ���� ������
	// A ? B : c;
	// A ���ǽ��� true �̸� B�� ��ȯ False �̺� C ��ȯ;
	return CurrentLevel == Targetlevel ? true : false;
}