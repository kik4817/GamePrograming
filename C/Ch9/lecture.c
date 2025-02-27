#include "lecture.h"

int number = 1; // 전역 변수

void ShowExample()
{
	
	printf("number의 값 : %d\n", number);
	int number = 10; //지역 변수
	printf("number의 값 : %d\n", number);

	LocalFunc(10); //생성과 소멸이 반복되고 있다.
	LocalFunc(15);
}

void LocalFunc(int a)
{
	// 만약에 함수가 종료될 때 소멸되지 않으면 어떤 일이 일어날까?

	int value = 5;
	printf("a의 값에 s를 더한 값 : %d\n", a + value);
}
