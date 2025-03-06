#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

// 커서 : output결과를 출력하는 위치를 안내해주는 안내 기호.

// (x,Y)좌표로 커서를 옴기고 싶다.
void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

/*
	도전 과제
	플레이어의 시작 위치를 설정해주세요.
	좌표에 대한 감각을 익혀보세요.
	setCursorPos << 이요해서 원하는 위치에 플레이어를 배치
	int pos x,
*/

bool GameOver = false;

int main()
{
	// 1번째 이슈 : ■와 " "의 간격의 크기가 다르다. ■ = " " *2

	ShowBorder();

	// 플레이어의 현제 좌표 설명해주는 변수를 선언

	int playerX = 10; // x의 값 +2 (ㅁ 오른쪽으로 2칸 옴겨간다) : (+1, 오른족으로 1칸 옴겨감)
	int playerY = 5;  // y의 값 +1 아래로 1칸 내려간다.

	// 플레이어가 시작할 때 등장한다.
	// 플레이어를 경계선 안에 그리고 싶다.

	setCursorPos(playerX, playerY);
	printf("□");

	// 게임이 바로 종료되지 않도록 Loop 만든다
	// 반복적으로 실행되는 부분
	while (1)
	{
		if (_kbhit())
		{
			// 화살표 입력 인지

			if (GetAsyncKeyState(VK_UP) & 0x8000) // 0x8000 C언어에서 입력을 사용할 때(세트)
			{
				playerY -= 1;
				if (playerY <= 0)
				{
					playerY = 1;
				}
			}
			if (GetAsyncKeyState(VK_DOWN) & 0x8000)
			{
				playerY += 1;
				if (playerY >= 19)
				{
					playerY = 18;
				}
			}
			if (GetAsyncKeyState(VK_LEFT) & 0x8000)
			{
				playerX -= 2;
				if (playerX <= 0)
				{
					playerX = 2;
				}
			}
			if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
			{
				playerX += 2;
				if (playerX >= 38)
				{
					playerX = 36;
				}
			}
			else
			{
				// x,y 그 자리 그대로
			}
		}

		//printf("현제 좌표 : (%d, %d)", playerX, playerY); // 테스트 코드

		system("cls");
		ShowBorder();
		setCursorPos(playerX, playerY);
		printf("□");

		Sleep(50);

		// 1. wait inputkey(특정 키를 눌렀을 때)

		// 2. playerX, playerY값을 변화시킨다.

		// 3. 해당 좌표로 커서를 위치를 바꾸고 printf

		// 4. 

		/*if (종료 조건)
			break;*/
			//break;

			// 캐릭터가 특정 위치에 도달하면 GameOver true 종료

			// if(playerX와 playerY 특정 위치할 때 )
		if (playerY == 1 && playerX == 2)
		{
			GameOver = true;
		}
		if (GameOver)
		{
			break;
		}
	}
	// 게임 종료
}