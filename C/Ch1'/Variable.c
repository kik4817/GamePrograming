/*
�ۼ��� : 2025-02-17
�ۼ��� : ���α�
�� �� : ����
*/

// 0. ȯ�� ��û
#include<stdio.h>

int main()
{
	// player : �г���(���ڿ�)  
	// enemy : ���� �̸�(���ڿ�)  
	// player's attackpower : �÷��̾��� ���ݷ�(����) 
	// enemy's attackpower : ������ ���ݷ�(����)

	// ������ �̿��ؼ� �ѹ��� player �̸��� �ٲ���
	//��ǻ�� player's attackpower ���� 8�� ���ּ���.
	//��ǻ�Ϳ��� �����ؾ� �� ����(������ �̸�, ��� �����ΰ���, ��)

	int playerAttackPower = 4;
	int enemyAttackPower = 2;


	printf("%s�� %s�� ��򰡿��� �������ϴ�.\n", "kkk", "���");
	printf("%s�� ���� %s �� �߰����� ���߽��ϴ�.\n", "���", "kkk");
	printf("%s�� %s�� �����Ͽ� %d ��ŭ �������� ����ϴ�.\n", "kkk", "���", playerAttackPower);
	printf("%s�� %s�� ���� �����Ͽ� %d �� %d.\n", "kkk", "���", playerAttackPower, enemyAttackPower);

	char char1 = '4';
	int int1 = 10;
	float float1 = 0.1;


	printf("���� ��� %c\n", char1);
	printf("���� ��� %d\n", int1);
	printf("�Ǽ� ��� %f\n", float1);
	printf("���ڿ� ���\n", "���");


	// ���� ��ȭ���丮
	
	float float2 = 0.8;
	float float3 = 0.2;
	int int2 = 0;

	printf("%s ��ȭ���丮\n", "�����ҵ�");
	printf("�⺻ %s %d�� �ʹ� ���� ��ȭ�ϱ����\n", "�����ҵ�", int2);
	printf("%s %d ��ȭ �õ��ý� %f ��ŭ ��ȭ�Ҽ� �ֽ��ϴ�.\n", "�����ҵ�", int2, float2);
	printf("%s�� ��ȭ �Ͽ����� %f �� �����Ͽ����ϴ�.\n", "�����ҵ�", float3);
			

}
// F5, ����� ��ư Ŭ��
// �ܼ� â�� "�ȳ� ����" ���


//1. ����ϰ� ���� ������ �ۼ�
//2. �ܾ�, ����, �Ǽ�, ���ڿ� ���