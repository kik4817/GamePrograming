/*
�ۼ��� : 2025-2-18
�ۼ��� : ���α�
�� �� : ������ ���� ����
*/

/*
���� ����
(����) ����
(��������) (������ �̸�); ������ �̸� ���������� ������ ���´�.

(����) �ʱ�ȭ ; ������ ó������ ���� �����ϴ� ��

�����ؾ��� ��

������ ����Ϸ��� ������ �ؾ��Ѵ�
���� �� �ʱ�ȭ�� �ؾ��Ѵ�. (������ �߻�)
�̹� ������ ������ �ٽ� ������ �� ����.
*/

/*
������ �̿� ��Ģ
1.
2.
3. Ư�� ��ȣ�� ������ �ȵȴ�
4. �̸����̿� ���� ���ڰ� ���� ����
5. Ű����� �̸����� ����Ҽ� ����
*/

/*
������
��Ģ���� : +, -, *, /
������, ��
0, 1 bit ������
a > b, a < b, 
*/

#include <stdio.h> // �˻� google, chat gtp C��� �������� ����ϴ� ���̺귯���� �����ΰ���? (DeepL ��������Ʈ)



int main()
{
	int attackPower; // attackPower�̸��� ���� ������ int�� ������ ���´�.
	
	//���� ���ݷ� ���� attackPower = �⺻ ���ݷ� + ������ ���� * ���� ���
	
	int basicPower = 10;
	int weaponLevel = 2;
	int growthPower = 3;

    attackPower = basicPower + weaponLevel * growthPower;

	//attackPower = 10;
	//float _attackfloatPower; // attackPowr�̸��� ���� ������ float�� ������ ���´�.
	//_attackfloatPower = 10
    

	printf("������ �̸� %s, ������ ���ݷ� %d,\n", "��", basicPower);
	printf("���Ⱑ ���ؼ� ��ȭ�� �õ��Ͽ� ���ⷹ��%d�� �ǰ� ���ݷ��� %d�� �ö����ϴ�.\n", weaponLevel, growthPower);
	printf("��ȭ �� ������ ���ݷ��� %d �Ǿ����ϴ�.\n", attackPower);

	//���� ����
	//�簢�� ����
	//������ ������ width height


	//int width, height, extent;
	//width = 3;
	//height = 5;
	//extent = width * height;

	
	//printf("������ ���̸� �Է����ּ���\n");
	//scanf("%d", &width);
	//printf("������ ���̸� �Է����ּ���\n");
	//scanf("%d", &height);
	
	//extent = width * height;

	//printf("�簢���� ���̴� : %d", extent);




}



