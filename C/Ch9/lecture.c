#include "lecture.h"

int number = 1; // ���� ����

void ShowExample()
{
	
	printf("number�� �� : %d\n", number);
	int number = 10; //���� ����
	printf("number�� �� : %d\n", number);

	LocalFunc(10); //������ �Ҹ��� �ݺ��ǰ� �ִ�.
	LocalFunc(15);
}

void LocalFunc(int a)
{
	// ���࿡ �Լ��� ����� �� �Ҹ���� ������ � ���� �Ͼ��?

	int value = 5;
	printf("a�� ���� s�� ���� �� : %d\n", a + value);
}
