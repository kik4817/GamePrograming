#include "InfoM.h"
#include "PlayG.h"
#include "Map.h"
#include "GetM.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>




void ShowInfoM()
{
	printf("������     ���        ��� \n");
	printf("    ��       ��    ��    ��    ��\n");
	printf("    ��     ��          ��    \n");
	printf("    ��       ��    ��    ��   ���\n");
	printf("    ��         ���        ��   ��\n\n");
	printf("������������������\n\n");

}

void ShowMenu()
{
	while (1)
	{
		printf("  1. ���۹��.\n");
		printf("  2. �����Ѵ�.\n");
		printf("  3. �����Ѵ�.\n");

		int inputN = -1;
		scanf_s("%d", &inputN);
		while (getchar() != '\n');

		if (inputN == 1)
		{
			ShowMenuG();
		}
		else if (inputN == 2)
		{
			ShowPlayG();
		}
		else if (inputN == 3)
		{
			break;
		}
		else
		{
			printf("Ű�� �߸� �Է��߽��ϴ�.\n");
		}
	}
		
}
