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


	printf("1.일반 강화한다.\n2.고급 강화한다.\n3.맵으로 돌아간다.\n");
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
		printf("잘못 입력하셨습니다.\n");
	}

}

void NWG()
{
	int WT = 10;

	NLV = NLV + 1;
	NPW = BPW + NLV * WT;
	TLV = NLV + HLV;
	TPW = NPW + HPW;
	printf("현제 무기 레벨 : %d 현제 무기 공격력 : %d\n", NLV, NPW);
}

void HWG()
{
	int WT = 100;

	HLV = HLV + 1;
	HPW = BPW + HLV * WT;
	TLV = NLV + HLV;
	TPW = NPW + HPW;
	printf("현제 무기 레벨 : %d 현제 무기 공격력 : %d\n", HLV, HPW);
}
