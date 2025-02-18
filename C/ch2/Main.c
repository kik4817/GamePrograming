/*
작성일 : 2025-2-18
작성자 : 김인국
주 제 : 변수에 대한 이해
*/

/*
지역 변수
(변수) 선언
(데이터형) (변수의 이름); 변수의 이름 데이터형의 성질을 갖는다.

(변수) 초기화 ; 변수에 처음으로 값을 대입하는 것

주의해야할 점

변수를 사용하려면 선언을 해야한다
선언 후 초기화를 해야한다. (에러가 발생)
이미 선언한 변수에 다시 선언할 수 없다.
*/

/*
변수의 이용 규칙
1.
2.
3. 특수 기호를 넣으면 안된다
4. 이름사이에 공백 문자가 들어갈수 없다
5. 키워드는 이름으로 사용할수 없다
*/

/*
연산자
사칙연산 : +, -, *, /
나머지, 몫
0, 1 bit 연산자
a > b, a < b, 
*/

#include <stdio.h> // 검색 google, chat gtp C언어 입츌력을 담당하는 라이브러리가 무엇인가요? (DeepL 번역사이트)



int main()
{
	int attackPower; // attackPower이름을 갖는 변수가 int의 성질을 갖는다.
	
	//무기 공격력 공식 attackPower = 기본 공격력 + 무기의 레벨 * 성장 계수
	
	int basicPower = 10;
	int weaponLevel = 2;
	int growthPower = 3;

    attackPower = basicPower + weaponLevel * growthPower;

	//attackPower = 10;
	//float _attackfloatPower; // attackPowr이름을 갖는 변수가 float의 성질을 갖는다.
	//_attackfloatPower = 10
    

	printf("무기의 이름 %s, 무기의 공격력 %d,\n", "검", basicPower);
	printf("무기가 약해서 강화를 시도하여 무기레벨%d이 되고 공격력이 %d더 올랐습니다.\n", weaponLevel, growthPower);
	printf("강화 후 무기의 공격력이 %d 되었습니다.\n", attackPower);

	//예시 문제
	//사각형 넓이
	//정수의 데이터 width height


	//int width, height, extent;
	//width = 3;
	//height = 5;
	//extent = width * height;

	
	//printf("가로의 길이를 입력해주세요\n");
	//scanf("%d", &width);
	//printf("세로의 길이를 입력해주세요\n");
	//scanf("%d", &height);
	
	//extent = width * height;

	//printf("사각형의 넓이는 : %d", extent);




}



