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
		// ��ȭ�Ѵ�
		//printf("��ȭ�Ѵ�.\n"); // Upgrade �Լ��� ��ü
		Upgrade();
	}
	else if (inputNumber == 2)
	{
		// ���¸� Ȯ���Ѵ�.
		printf("���¸� Ȯ���Ѵ�.\n"); // ShowStatus ��ü
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
}

void ShowStatus()
{

}

// ���� ���� ���� == �ִ� ����
bool IsGameClear()
{
	// ���� ������
	// A ? B : c;
	// A ���ǽ��� true �̸� B�� ��ȯ False �̺� C ��ȯ;
	return CurrentLevel == Targetlevel ? true : false;
}