/*
menu.h �ڵ带 ctrl + c + v;
*/

#include "menu.h"



void SelectMenu()
{
	while (true)
	{
		system("cls");
		printf("1_��ȭ�Ѵ�.\n");
		printf("2_�ּ��Ѵ�.\n");
		printf("3_�����Ѵ�.\n");

		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n'); //character �Է� ����

		if (inputNumber == 1)
		{
			Upgrade();
			
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

		printf("������ �Ϸ��� �ƹ� Ű�� �Է����ּ���\n");
		_getch(); // �Է� ���� �޾ƿ��� ��ɾ�

	}
}
