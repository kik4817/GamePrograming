#include "WeaponUpgrade.h"

//int weaponLevel = 0;
int weaponLv = 0;
int basePower = 10;
int weight = 5;
//int weaponPower;
int currentAttackPower = 0;


void ShowUpgradeMenu()
{
	printf("���׷��̵� �޴��� ������\n");
}

void Upgrade()
{
	// Alt Ű���� ȭ��ǥ ��, �Ʒ�
	printf("��ȭ�� �����մϴ�.\n");
	// ������ ����
	// ������ �⺻ ���ݷ�
	// ����ġ
	// ���� ���ݷ�
	// ��ȭ�� ������ �����ϴ� case
	// ������ ������ 1��� ��ŵ�ϴ�.
	weaponLv = weaponLv + 1;
	//while (weaponLevel++<0) {
	//	printf("���� ������ ��ȭ�Ǿ����ϴ�");
	//}
	//printf("���� ���� : %d\n", weaponLevel);
	////weaponPower = basePower + weaponLevel * weaponPower// ���� ���ݷ� = �⺻ ���ݷ� + ���� * ����ġ
	//weaponPower = basePower + weaponLevel * weight;
	currentAttackPower = basePower + weaponLv * weight;
	//printf("���� ���ݷ� : %d\n", weaponPower);
	// printf(���� ���ݷ�, ����)
	printf("���� ���ݷ� : %d, ������ ���� : %d\n", currentAttackPower, weaponLv);


}

