/*
작성일 : 2025-02-19
작성자 : 김인국
주 제 : 사칙연산 이해
*/

/*
사칙 연산 : +, -, *, /, %

단항 연산자
부호 : +, - 음수(-) 양수(+)

이항 연산자
num1 + num2

삼항 연산자
1항 = 2항 : 3항
*/

/*
연산자의 쓰임새
산수 연산자 +, -, *, /
바로 연산자 <, >, =
비트 연산자(data type)
관계 연산자(or, and ||, &&)
*/

/*
비교 연산자 결과 : 참(true) 1, 거짓(false) 0
*/


/*
<> 시스템 파일
"" 커스텀 파일

#include <>
#include ""
*/

#include <stdio.h>
#include <stdbool.h>


int main()
{

	//사칙연산 + 나머지

	printf("연산자 실습1 \n");

	//변수의 초기화
	int num1 = 10;
	int num2 = 3;

	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d * %d = %d \n", num1, num2, num1 * num2);
	printf("%d / %d = %d \n", num1, num2, num1 / num2);
	printf("%d 나머지 %d = %d \n", num1, num2, num1 % num2);


	printf("연산자 실습2 \n");
	printf("비교결과 num1 > num2 : %d \n", num1 > num2); //참
	printf("비교결과 num1 < num2 : %d \n", num1 < num2); //거짓

	
	printf("연산자 실습3 \n");
	bool istrue = true;
	bool isfalse = false;

	int result1 = num1 > num2;
	printf("삼항 연산자 결과 출력 : %d \n", result1 ? true : false);
	printf("삼항 연산자 결과 출력 : %d \n", result1 ? 1 : 0);

	printf("실습4 : 관계 연산자 \n");
	
	// !num2 : num2가 아니다. false 에서 true 로 true 에서 false로 변경

	printf("관계 연산자 : %d \n", (num1 != num2) || (num1 > num2)); //두수가 다른때 참으로 나옴
	printf("관계 연산자 : %d \n", (num1 != num2) && (num1 < num2));


	printf("실습5 : 복합 연산자 \n");

	int num3 = 2;
	int num4 = 5;
	//num3 = num3 + num4; // num <- 2+5 = 7
	// T = T +a;
	// T+-A;
	printf("num3 + num4의 값 : %d \n", num3);

	printf("실습6 : 실습 연산자 \n");

	//전위 연산자 : 문장을 먼저 처리한 후에 연산한다
	// num3의 값 : 출력 num3++ num3 +-1
	//후위 연산자 : 연산된 결과를 문장에 대입한다
	//num+-1 printf 연산을 처리한다

	printf("num3의 값 : %d \n", num3++);
	printf("num3의 값 : %d \n", num3);
	printf("num4의 값 : %d \n", ++num4);
	printf("num4의 값 : %d \n", num4);

	//게임 스토리 1
	
	//무기를 강화하는데
	//n 강일때의 무기, n+1 무기의 정보를 화면에 출력하는 스토리를 작성
	
	
	//printf("무기 %d \n", num5);
	//printf("무기 %d \n", ++num5);
	
	int maxInventorySlot = 10;
	int AStackCount = 200;
	int BStackCount = 200;
	int ADrop = 555;
	int BDrop = 7777;

	printf("1시간 동안 사냥을 해서 아이템을 획득을 했다.\n");
	printf("A아이템 : %d, B아이템 : %d 획득했다.\n", ADrop, BDrop);

	// 나머지

	int AInventoryCount = (ADrop % AStackCount) == 0 ? (ADrop / AStackCount) : (ADrop / AStackCount) + 1;
	int BInventoryCount = (BDrop % BStackCount) == 0 ? (BDrop / BStackCount) : (BDrop / BStackCount) + 1;

	printf(" A의 갯수 :%d B의 갯수 : %d\n", AInventoryCount, BInventoryCount);
	printf("결과 :  %s\n", maxInventorySlot <= (AInventoryCount + BInventoryCount) ? "가득참" : "가득안참");

	//게임 스토리 2
	//아이템 인벤토리 slot 기타 아이템 수집, stack 갯수
	//slot 최대 갯수 : 변수
	//stack 최대 갯수 : 변수
	//아이템 n개 획득, B 아이템 M개 획득
	//최대 인벤토리의 갯수가 가득 찼는지 안찼는지 표한하는 결과를 표현


		//게임 스토리 3 작성
}