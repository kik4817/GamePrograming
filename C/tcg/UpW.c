#include "UpW.h"

int NUW = 0;
int HUW = 0;
int CUW = 0;
int LV = 0;
int BPW = 10;


void UGW()
{
	printf("1.일반 강화한다.\n2.고급 강화한다.\n3.맵으로 돌아간다.\n");
	int inputN = -1;
	scanf_s("%d", &inputN);

	if (inputN == 1)
	{
		int WT = 10;
		NUW = NUW + 1;
		CUW = CUW + BPW + NUW + LV * WT;
		LV = NUW + HUW;
		printf("%d 강화하였습니다\n", CUW);
	}
	else if (inputN == 2)
	{
		int WT = 100;
		HUW = HUW + 1;
		CUW = CUW + BPW + NUW + HUW + LV * WT;
		LV = NUW + HUW;
		printf("%d 강화하였습니다\n", CUW);
	}
	else
	{
		printf("잘못 입력하셨습니다.\n");
	}

}
