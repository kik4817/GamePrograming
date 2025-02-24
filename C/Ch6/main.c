/*
�ۼ��� : 2025-02-24
�ۼ��� : ���α�
���� : �ڵ��� �帧 ����
*/

/*
main�Լ��� ���α׷��� ������
������ ���� ������� �ڵ尡 ����ȴ�.
main �Լ��� ������ �߰�ȣ�� ������ ���α׷��� ����ȴ�.
*/
/*
����� : ���α׷��� �ߴܽ��Ѽ� �ڵ带 Ȯ���ϴ� ���
F9 ������ �ߴ����� ���� �Ǵ� ������ �� �ִ�
*/

/*
���ǹ�, �б�, branch

if ����
if(){}   // ���ǹ�
() : ����
{} : ��ü, body

������ ��
if();{}
- ���ǹ� ������� �ڵ尡 ����ȴ�.
*/

/*
if(����1)
¦�� : n % 2 == 0
Ȧ�� : n % 2 == 1

else // ������ ��� �͵�
*/

/*
������ �������� ���� ���� �̻��̸� 'n'����� �ű�� �ý����� �����.
���� >= 100 : S����̴�.
���� > 90   : A����̴�.
���� < 90   : F����̴�.
*/

/*
����
�ڵ��� �帧 ���� -> ���ǿ� ���� Ư�� �κи� �����ϴ� ���
if (true) {}�Ƿ� flase �������� �ʴ´�
(false && true) (true || false) // �÷��̾� ���� ����
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	printf("���ǹ� ����1\n");

	//int : ������ �����ϰ� �ʹ� + 4����Ʈ ũ��

	int count = 15;

	// ���� ������, �� ������
	// 5 10
	// if ~ else

	if (count < 10) 	// true, false
	{
		printf("count ���� 10���� �۽��ϴ�.\n");
	}
	else
	{
		printf("count ���� 10���� Ů�ϴ�.\n");
	}

	// if ~ else if
	printf("���� ����1\n");
	int score = 88;
	if (score >= 100)
	{
		printf("S���, ���� ���� : %d\n", score);
	}
	else if (score >= 90)
	{
		printf("A���, ���� ���� : %d\n", score);
	}
	else
	{
		printf("F���, ���� ���� : %d\n", score);
	}	
	// ���� ����
	// ������ ���� 56
	// ���� c ��� �������� �������� ��� Random.
	// ���ǹ� Ȯ��.
	// ??? ���� �Է��� ���� �� ũ�� -> Ů�ϴ�.

	// ���ڰ� �ִ�.
	// ���ǹ����� ���ؼ� ���ڰ� ū�� ������ ����Ѵ�.
   
    // seed��
    // ���� �� 19243453475829374895 % 99 : 0~99

	printf("���� ���� ���߱� ����\n");
	printf("������ ���� 0 ~ 100\n");
	srand(time(NULL));
	int randomNumber = rand() %101;

	printf("��� �� : %d\n", randomNumber);

	int userValue = 0;

	scanf_s("%d", &userValue);

	//printf("������ �� : %d\n", &userValue);
	
	if (userValue > randomNumber)
	{
		printf("��ǥ �� ���� Ů�ϴ�.\n");
	}

	else if (userValue < randomNumber)
	{
		printf("��ǥ �� ���� �۽��ϴ�.\n");
	}

	else
	{
		printf("�����Դϴ�.\n");
	}
	
	// ���� ����2
	// ���� ���߱� ���ӿ��� ������ ���� Ƚ���� ���� ��ŷ�� �ο��غ��� �ʹ�.

	// if ~ else if ~ else if~

	int countNumber = 1; // �Է� ���� ���� �� ���� 1�� �����մϴ�.

	if (countNumber == 1)
	{
		printf("S��ũ �Դϴ�.\n");
	}
	else if (countNumber == 2)
	{
		printf("A��ũ �Դϴ�.\n");
	}
	else if (countNumber == 3)
	{
		printf("B��ũ �Դϴ�.\n");
	}
	else if (countNumber == 4)
	{
		printf("C��ũ �Դϴ�.\n");
	}
	
	// switch��
	printf("switch ����\n\n");

	switch (countNumber)
	{
	case 1: printf("S��ũ �Դϴ�.\n"); break;
	case 2: printf("A��ũ �Դϴ�.\n"); break;
	case 3: printf("B��ũ �Դϴ�.\n"); break;
	case 4: printf("C��ũ �Դϴ�.\n"); break;
	}
	
	// ���� �� ��ŷ, Ƚ�� ���� ��ŷ
	// ��ŷ�� �ο��� �� �ִ� ���丮�� �ۼ��غ�����.
	int killCount = 0;
	scanf_s("%d", &killCount);
	switch (killCount)
	{
	case 0: printf("ų�� �����ϴ�.\n"); break;
	case 1: printf("�۽�Ʈų �Դϴ�.\n"); break;
	case 2: printf("����ų �Դϴ�.\n"); break;
	case 3: printf("Ʈ����ų �Դϴ�.\n"); break;
	}



}
