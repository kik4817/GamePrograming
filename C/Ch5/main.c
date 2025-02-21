/*
�ۼ��� : 2025-02-21
�ۼ��� : ���α�
�� �� : ���ڸ� ǥ���ϴ� ���, �������� Ÿ�� ��ȯ
*/

/*
����, �Ǽ�
������ ǥ���ϴ� ��� - ��ȣ��Ʈ MSB - 5 - 2�� ���� - unsigned
�Ǽ��� ǥ���ϴ� ��� - MSB / ���� / ���� - 10 = (0.1) 0�� ����ϰ� ���� ��Ȯ�ϰ� 0�� ����� ����
*/

/*
���� ���������� ����ؾ� �Ѵ�.
int, char, short, long
float, double

�� �̸� Ÿ���� ����� ������?
- ���ϰ� ��� �Ϸ���

int : ����(8��) + 4����Ʈ : 
������ ��Ʈ�� 0,1 �����ϰ� ������ ��Ʈ ��ȣ ��Ʈ�� ���� 32����
*/

/*
���ڸ� ����. ��Ʈ���� ���� 00000000 <-
character ���� �ؼ� -> a
���� ���� �ؼ� -> 97

������ �� �ܾ� ���� - 
97 a, 98 b, 99 c / 65 A, 66 B, 67 C
ASCII (American Standard Code for Informaion Insitute)
*/

/*
������ ������ 4����Ʈ �̸��� 'num' ������ �ϼ���.
���� 10 �ʱ�ȭ
int num;
num = 10;
num(int) = 10
*/

/*
literal (���� �״��) ���
��ǻ�� ���忡�� ���� ���������� ���� ����ϴ� Ÿ�� ��ȯ
10 <- ���� ���� int
11.5 <- �Ǽ� ���� double

��� - 10
int num;
num = 40;
10 = 30;

�ɺ� (��¡) ��� - �̸��� ������ ���� �� �ִ�

int PI = 3.14
*/

/*
����ȯ
�ڵ� - ������ ��ȯ
���� - ����� ��ȯ

����� ��ȯ�ϴ� ���
float fnum10 = 0.1f;
int tempInt =(int)fnum10;
*/

#include <stdio.h>

int main()
{
	int num1 = 10;
	char num2 = 2;
	short num3 = 5;
	printf("�������� ����Ʈ ũ�� : %d\n", sizeof(num1));
	printf("�������� ����Ʈ ũ�� : %d\n", sizeof(num2));
	printf("�������� ����Ʈ ũ�� : %d\n", sizeof(num3));

	float fnum1 = 0.1f;
	double fnum2 = 0.2;
	printf("�Ǽ� �������� ũ�� ��\n");
	printf("�������� ����Ʈ ũ�� : %d\n", sizeof(fnum1));
	printf("�������� ����Ʈ ũ�� : %d\n", sizeof(fnum2));

	printf("���ڸ� ����Ѵ�.\n");

	char c1 = 'a'; // c1 ���� char // 'a' 97
	printf("���� : %c\n", c1); // 0000 0000
	printf("���� : %d\n", c1);

	// 128���� a~z, A~Z
	// wchar_t 2����Ʈ
	wchar_t charNum = L'��';

	printf("�����ڵ� �� : %d\n", charNum);

	printf("�ɺ� ��� ����\n");

	const double PI = 3.14;
	
	printf("�� ��� : %.4lf\n", PI);

	// ���� ���̸� ���ϴ� ����
	// ���� ���� = PI * ������ * ������;
	// PI �������� �ؾ����� ��� 3.14 ����
	// �ٸ� ����� ���� ���� PI ������ ���� �� �ϵ��� �ڵ带 �ۼ��غ�����

	int a = 2;

	printf("���� ���̸� ���ϼ���\n");
	printf("���� ������ %d\n", a);
	printf("���� ���̴� %.2lf\n", PI * a * a);

	double radius = 5;
	double extent = radius * radius * PI;

	printf("���� ���� : %lf\n", extent);

	// �÷��̾� ���
	// ü��, ���ݷ�
	// ��� (ü���� <= 0) -> ���� ü�� ��Ȱ
	// �⺻ ü������ ��Ȱ�ߴ�
	// hp = 5; 

	const int REVIVEHP = 10;
	int currentHP = REVIVEHP;

	currentHP <= 0;
	//printf("�÷��̾ ����߽��ϴ�.\n");
	//printf("��Ȱ�Ͻðڽ��ϱ�? Y / N.\n");
	//currentHP = REVIVEHP
	//printf("�÷��̾ ��Ȱ�޽��ϴ�.\n");


	//����� ��ȯ�ϴ� ���
	float fnum10 = 0.1f;
	int tempInt = (int)fnum10;

	printf("�� : %d\n", tempInt);
	printf("�� : %f\n", (float)tempInt);

	//������ ��ȯ
	// Case1. ���� �����ڸ� ����� �� �� ������ Ÿ���� �ٸ��� �߻�

	float fnum11 = 0.1f;
	int tempInt2 = fnum10; //������ ���� �� �ʱ�ȭ

	printf("�� : %d\n", tempInt2);
	printf("�� : %f\n", (float)tempInt2);

	// Case2. ������ �°ݿ� ���� �ڵ� ����ȯ
	// char, short -> int��ȯ
	
	short ex1 = 15;         // 15 -> int
	short ex2 = 25;         // 25 -> int
	short ex3 = ex1 + ex2;  // 15 + 25 int -> short
	
	// Case3. �������� �ڷ� ����ġ

	// ���ݷ� = �⺻ ���ݷ� + ���� + ����ġ

	int baseAttack = 10;
	int level = 1;
	double weight = 0.5;
	int AP = baseAttack + level * weight; // 10 + (1 * 0.5)
	// (double)1 * 0.5 - �ڷ��� ��ġ���� �ʴ´�
	// ���� * �Ǽ� - �Ǽ�
	// 10 + 0.5
	// 10.5
	// (int)AP = (int)(double) 10.5;

	// Case 3-2 �ڷ��� ����ġ (����, ����) (����, ����)
	int abc = 129;
	char ccc = abc; // -127

	printf("�� : %d", ccc);

	// () *4 <- () *1 : () () () ()*1
	// () *4 -> () *1 : (1010)(010101)(101010) // ()

	// �ڷ����� ��ȯ�� �� �������� �ս��� ���� ���� �������� ��ȯ�� �ȴ�.

	// [char -> short ->] int -> long -> float -> double


	return 0;

}
