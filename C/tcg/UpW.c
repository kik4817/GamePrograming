#include "UpW.h"
#include "GetM.h"
#include "PlayG.h"
#include "InfoM.h"

int NLV = 0, HLV = 0, TLV = 0;
int BPW = 10;
int NPW = 0, HPW = 0, TPW = 0;

void UGW()
{
	int NormalC = 500;
	int HighC = 1000;


	printf("1.�Ϲ� ��ȭ�Ѵ�.\n2.��� ��ȭ�Ѵ�.\n3.������ ���ư���.\n");
	int inputN = -1;
	scanf_s("%d", &inputN);
	while (getchar() != '\n');

	if (inputN == 1)
	{
		if (UseM(NormalC))
		{
			NWG();
		}
	}
	else if (inputN == 2)
	{
		if (UseM(HighC))
		{
			HWG();
		}
	}
	else if (inputN == 3)
	{
		ShowMenu();
	}
	else
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}

}

void NWG()
{
	int WT = 10;

	NLV = NLV + 1;
	NPW = BPW + NLV * WT;
	TLV = NLV + HLV;
	TPW = NPW + HPW;
	printf("���� ���� ���� : %d ���� ���� ���ݷ� : %d\n", NLV, NPW);
}

void HWG()
{
	int WT = 100;

	HLV = HLV + 1;
	HPW = BPW + HLV * WT;
	TLV = NLV + HLV;
	TPW = NPW + HPW;
	printf("���� ���� ���� : %d ���� ���� ���ݷ� : %d\n", HLV, HPW);
}
