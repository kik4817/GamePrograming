#include "GetM.h"
int TM = 0;
int EM = 100;
int NM = 500;
int HM = 1000;

void GetMoeny()
{
	printf("1. 쉬움\n2. 보통\n3. 어려움\n");
	
	int inputN = -1;
	scanf_s("%d", &inputN);
	//while (getchar() != '\n');

	if (inputN == 1)
	{
		TM += EM;
		printf("%d\n", TM);
	}
	else if (inputN == 2)
	{
		TM += NM;
		printf("%d\n", TM);
	}
	else if (inputN == 3)
	{
		TM += HM;
		printf("%d\n", TM);
	}
	else
	{
		printf("잘못 입력하였습니다.\n");
	}
	 
}
