#include "random.h"

void CreateRandomSeed()
{
	srand(time(NULL) * 1000 + clock());
}

int ReturnPosX()
{
	// 0 ~ 40
	
	// ������ + ¦���� ��ȯ�ؾ� �Ѵ�.
	// 1. ������ ���ڸ� �̴��� - rand() A���� B����
	// 2. 1 ~ 20 * 2 (¦��)
	// �����ϱ� ���� ������ �����Ѵ�.
	// �� �ڵ� �߿� �� ȿ������ �ڵ带 ����Ѵ�. (���⿡ ���� ��, �޸� ����ȭ)
	int randValue = rand() % 37 + 1; // 1 ~ 40
	return randValue % 2 == 0 ? randValue : randValue + 1;
}

int ReturnPosY()
{
	int randValue = rand() % 18 + 1;
	return randValue;
}
