/*
작성일 : 2025-02-17
작성자 : 김인국
주 제 : 변수
*/

// 0. 환경 설청
#include<stdio.h>

int main()
{
	// player : 닉네임(문자열)  
	// enemy : 몬스터 이름(문자열)  
	// player's attackpower : 플레이어의 공격력(숫자) 
	// enemy's attackpower : 몬스터의 공격력(숫자)

	// 변수를 이용해서 한번에 player 이름을 바꾸자
	//컴퓨터 player's attackpower 값을 8로 해주세요.
	//컴퓨터에게 전달해야 할 정보(변수의 이름, 어떠한 종류인가★, 값)

	int playerAttackPower = 4;
	int enemyAttackPower = 2;


	printf("%s와 %s가 어딘가에서 만났습니다.\n", "kkk", "고블린");
	printf("%s는 아직 %s 를 발견하지 못했습니다.\n", "고블린", "kkk");
	printf("%s가 %s를 공격하여 %d 만큼 데미지를 줬습니다.\n", "kkk", "고블린", playerAttackPower);
	printf("%s와 %s가 서로 공격하여 %d 와 %d.\n", "kkk", "고블린", playerAttackPower, enemyAttackPower);

	char char1 = '4';
	int int1 = 10;
	float float1 = 0.1;


	printf("문자 출력 %c\n", char1);
	printf("정수 출력 %d\n", int1);
	printf("실수 출력 %f\n", float1);
	printf("문자열 출력\n", "고블린");


	// 무기 강화스토리
	
	float float2 = 0.8;
	float float3 = 0.2;
	int int2 = 0;

	printf("%s 강화스토리\n", "브론즈소드");
	printf("기본 %s %d가 너무 약해 강화하기로함\n", "브론즈소드", int2);
	printf("%s %d 강화 시도시시 %f 만큼 강화할수 있습니다.\n", "브론즈소드", int2, float2);
	printf("%s를 강화 하였으나 %f 로 실패하였습니다.\n", "브론즈소드", float3);
			

}
// F5, 디버깅 버튼 클릭
// 콘솔 창에 "안녕 변수" 출력


//1. 출력하고 싶은 내용을 작성
//2. 단어, 정수, 실수, 문자열 출력