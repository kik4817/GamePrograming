#include "UpW.h"

int NUW = 0;
int HUW = 0;
int CUW = 0;
int LV = 0;
int BPW = 10;


void UGW()
{
	printf("1.�Ϲ� ��ȭ�Ѵ�.\n2.��� ��ȭ�Ѵ�.\n3.������ ���ư���.\n");
	int inputN = -1;
	scanf_s("%d", &inputN);

	if (inputN == 1)
	{
		int WT = 10;
		NUW = NUW + 1;
		CUW = CUW + BPW + NUW + LV * WT;
		LV = NUW + HUW;
		printf("%d ��ȭ�Ͽ����ϴ�\n", CUW);
	}
	else if (inputN == 2)
	{
		int WT = 100;
		HUW = HUW + 1;
		CUW = CUW + BPW + NUW + HUW + LV * WT;
		LV = NUW + HUW;
		printf("%d ��ȭ�Ͽ����ϴ�\n", CUW);
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}

}
