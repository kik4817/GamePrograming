#include "PlayG.h"
#include "Map.h"
#include "GetM.h"
#include "UpW.h"



void ShowMenuG()
{
	printf("Test C Game ����\n\n");
	printf("��ǥ �޼� �ΰ��� ������\n");
	printf("1. ���� ������ ��´�\n");
	printf("2. ���� 10,000�� ����.\n\n");
	printf("�� : �÷��̾�\n�� : ����\n�� : �� ����\n�� : ��ȭ�ϱ�\n");
}

void ShowPlayG()
{
	printf("1.�� ���ΰ���\n2.���Ⱝȭ�ϱ�\n3.����â ����\n\n");
	int inputN = -1;
	scanf_s("%d", &inputN);

	if (inputN == 1)
	{
		GetMoeny();
	}
	else if (inputN == 2)
	{
		UGW();
	}
	else if (inputN == 3)
	{
		ShowPlayerInfo();
	}
	else
	{

	}

}

void ShowPlayerInfo()
{
	printf("�����ϰ� �ִ� �� : %dG\n", TotalM);
	printf("���� ���� : %d\n", TLV);
	printf("���� ���ݷ� : %d\n", TPW);

}

