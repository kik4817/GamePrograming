/*
�ۼ��� : 2025-02-19
�ۼ��� : ���α�
�� �� : ��Ģ���� ����
*/

/*
��Ģ ���� : +, -, *, /, %

���� ������
��ȣ : +, - ����(-) ���(+)

���� ������
num1 + num2

���� ������
1�� = 2�� : 3��
*/

/*
�������� ���ӻ�
��� ������ +, -, *, /
�ٷ� ������ <, >, =
��Ʈ ������(data type)
���� ������(or, and ||, &&)
*/

/*
�� ������ ��� : ��(true) 1, ����(false) 0
*/


/*
<> �ý��� ����
"" Ŀ���� ����

#include <>
#include ""
*/

#include <stdio.h>
#include <stdbool.h>


int main()
{

	//��Ģ���� + ������

	printf("������ �ǽ�1 \n");

	//������ �ʱ�ȭ
	int num1 = 10;
	int num2 = 3;

	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
	printf("%d ������ %d = %d \n", num1, num2, num1 % num2);


	printf("������ �ǽ�2 \n");
	printf("�񱳰�� num1 > num2 : %d \n", num1 > num2); //��
	printf("�񱳰�� num1 < num2 : %d \n", num1 < num2); //����

	
	printf("������ �ǽ�3 \n");
	bool istrue = true;
	bool isfalse = false;

	int result1 = num1 > num2;
	printf("���� ������ ��� ��� : %d \n", result1 ? true : false);
	printf("���� ������ ��� ��� : %d \n", result1 ? 1 : 0);

	printf("�ǽ�4 : ���� ������ \n");
	
	// !num2 : num2�� �ƴϴ�. false ���� true �� true ���� false�� ����

	printf("���� ������ : %d \n", (num1 != num2) || (num1 > num2)); //�μ��� �ٸ��� ������ ����
	printf("���� ������ : %d \n", (num1 != num2) && (num1 < num2));


	printf("�ǽ�5 : ���� ������ \n");

	int num3 = 2;
	int num4 = 5;
	//num3 = num3 + num4; // num <- 2+5 = 7
	// T = T +a;
	// T+-A;
	printf("num3 + num4�� �� : %d \n", num3);

	printf("�ǽ�6 : �ǽ� ������ \n");

	//���� ������ : ������ ���� ó���� �Ŀ� �����Ѵ�
	// num3�� �� : ��� num3++ num3 +-1
	//���� ������ : ����� ����� ���忡 �����Ѵ�
	//num+-1 printf ������ ó���Ѵ�

	printf("num3�� �� : %d \n", num3++);
	printf("num3�� �� : %d \n", num3);
	printf("num4�� �� : %d \n", ++num4);
	printf("num4�� �� : %d \n", num4);

	//���� ���丮 1
	
	//���⸦ ��ȭ�ϴµ�
	//n ���϶��� ����, n+1 ������ ������ ȭ�鿡 ����ϴ� ���丮�� �ۼ�
	
	
	//printf("���� %d \n", num5);
	//printf("���� %d \n", ++num5);
	
	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 7777;

	printf("1�ð� ���� ����� �ؼ� �������� ȹ���� �ߴ�.\n");
	printf("A������ : %d, B������ : %d ȹ���ߴ�.\n", ADrop, BDrop);

	// ������

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (ADrop / AStackCount) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BDrop / BStackCount) : (BDrop / BStackCount) + 1;

	printf(" A�� ���� :%d B�� ���� : %d\n", AInventoryCount, BInventoryCount);
	printf("��� :  %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "������" : "�������");

	//���� ���丮 2
	//������ �κ��丮 slot ��Ÿ ������ ����, stack ����
	//slot �ִ� ���� : ����
	//stack �ִ� ���� : ����
	//������ n�� ȹ��, B ������ M�� ȹ��
	//�ִ� �κ��丮�� ������ ���� á���� ��á���� ǥ���ϴ� ����� ǥ��


		//���� ���丮 3 �ۼ�
}