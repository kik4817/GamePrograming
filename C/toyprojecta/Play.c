#include "Play.h"

// ��ȭ ���ӿ� �ʿ��� ���� ������
// ���� ��ǥ
int CurrentLevel = 0;
int Targetlevel = 10;
bool isClear = false;

// ���� ���� - ��ȭ
int CurrentMoney = 10000;
int UpgradeCost = 500;
bool isFail = false; // �������� ���� ���� �� ��

void ShowTitle()
{
	printf("������ �������Դϴ�..\n");
	printf("=====================\n");
	printf("=====================\n");
	printf("=====================\n\n");

	printf("    ���� ��ȭ�ϱ�     \n\n");
}

void ShowManual()
{
	// 1. ���� ���
	printf("���� ���.\n");
	printf("Ű���带 �Է� �� ����Ű�� ������ �����Ѵ�.\n");
	printf("�Է� ���� �̿��� Ű�� �Է��� �ÿ� �缱���� �ؾ��մϴ�.\n\n");
	// 2. ���� ��ǥ
	printf("���� ��ǥ\n");
	printf("���� 10�� �����.\n\n");
	// 3. ���� ���
	printf("���� �÷��� ���\n");
	printf("1. ���ѵ� ���������� ��ǥ�� �޼��ؾ� �մϴ�.\n");
	printf("2. Ư�� ���ⷹ������ ��ȭ �ϰ��� �����մϴ�.\n");
	printf("3. Ư�� �������� ���Ⱑ �ı��˴ϴ�.\n\n");
}

void GameLogic() // EnforceWeapon.h
{
	while (1)
	{
		// �޴� ���� ȭ��
		ShowMenu();

		// ������ Ŭ���� �߰ų� ���ӿ����� ���

		if (isClear || isFail)
		{
			break;
		}
	}


	if (isClear)
	{
		printf("Game Clear\n");
	}
	if (isFail)
	{
		printf("Game Over\n");
	}
}
void GameLoop()
{
	ShowTitle();
	ShowManual();
	GameLogic();
}
