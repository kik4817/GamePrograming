#include "GetM.h"
int TM = 0;
int EM = 100;
int NM = 500;
int HM = 1000;

void GetMoeny()
{
	printf("1. ����\n2. ����\n3. �����\n");
	
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
		printf("�߸� �Է��Ͽ����ϴ�.\n");
	}
	 
}
