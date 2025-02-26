#include "WeaponUpgrade.h"

//int weaponLevel = 0;
int weaponLv = 0;
int basePower = 10;
int weight = 5;
//int weaponPower;
int currentAttackPower = 0;


void Upgrade()
{
	while (true)
	{
		system("cls");
		int inputNumber = -1;
		scanf_s("%d", &inputNumber);
		while (getchar() != '\n');

		if (inputNumber == 1)
		{
			// Alt 키보드 화살표 위, 아래
			printf("강화를 진행합니다.\n");
			// 무기의 레벨
			// 무기의 기본 공격력
			// 가증치
			// 현제 공격력
			// 강화를 무조건 성공하는 case
			// 무기의 레벨을 1상승 시킵니다.
			weaponLv = weaponLv + 1;
			//while (weaponLevel++<0) {
			//	printf("무기 레벨이 강화되었습니다");
			//}
			//printf("무기 레벨 : %d\n", weaponLevel);
			////weaponPower = basePower + weaponLevel * weaponPower// 현제 공격력 = 기본 공격력 + 레벨 * 가중치
			//weaponPower = basePower + weaponLevel * weight;
			currentAttackPower = basePower + weaponLv * weight;
			//printf("현제 공격력 : %d\n", weaponPower);
			// printf(현제 공격력, 레벨)
			printf("현제 공격력 : %d, 무기의 레벨 : %d\n", currentAttackPower, weaponLv);
		}
		else if (inputNumber == 2)
		{
			printf("강화를 취소합니다.\n");
		}
		else if (inputNumber == 3)
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else
		{
			printf("잘못된 값을 입력했습니다.\n");
		}

		// 플레이어가 특정 키를 입력했을 때 넘어가도록 하고 싶다.

		

	}

}
