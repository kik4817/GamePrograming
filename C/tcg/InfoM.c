#include "InfoM.h"
#include "PlayG.h"


void ShowInfoM()
{
	printf("������ ������ ������\n");
	printf("������ ������ ������\n");
	printf("������ ������ ������\n");
	printf("������ ������ ������\n");
	printf("������ ������ ������\n");
}

void ShowMenu()
{
	while (1)
	{
		printf("1. ���۹��.\n");
		printf("2. �����Ѵ�.\n");
		printf("3. �����Ѵ�.\n");

		int inputN = -1;
		scanf_s("%d", &inputN);
		//while (getchar() != '\n');

		if (inputN == 1)
		{
			ShowMenuG();
		}
		if (inputN == 2)
		{
			//ShowMap();
			ShowPlayG();
		}
		else if (inputN == 3)
		{
			printf("������ �����մϴ�.\n");
			break;
		}
		else
		{
			printf("Ű�� �߸� �Է��߽��ϴ�.\n");
		}
	}
}
