#include "Currency.h"

bool CanUpgrade(int cost)
{
	if (cost < CurrentMoney) // ���� �ݾ��� ��뺸�� ������ ���׷��̵� ����
	{
		CurrentMoney -= cost;
		printf("���� ������ : %d\n", CurrentMoney);
		return true;
	}
	else
	{
		// isFail ���� ���� true
		printf("Game Over!! ��� ���� ����߽��ϴ�.\n\n");
		isFail = true;
	}
}


