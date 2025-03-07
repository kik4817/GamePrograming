#include "border.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "random.h"

// Ŀ�� : output����� ����ϴ� ��ġ�� �ȳ����ִ� �ȳ� ��ȣ.

// (x,Y)��ǥ�� Ŀ���� �ȱ�� �ʹ�.
void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// Ŀ���� ����� �ͽ��ϴ�. true = Ŀ���� ���δ�, false = Ŀ���� ������ �ʴ´�.
void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

/*
	���� ����
	�÷��̾��� ���� ��ġ�� �������ּ���.
	��ǥ�� ���� ������ ����������.
	setCursorPos << �̿��ؼ� ���ϴ� ��ġ�� �÷��̾ ��ġ
	int pos x,
*/

// ���� ����
bool GameOver = false;
int CurrentScore = 0;
int randomX = 16;
int randomY = 1;
int playTime = 0;

int questItemPosX = 34;
int questItemPosY = 5;
bool IsQuest = false;

int main()
{
	// 1��° �̽� : ��� " "�� ������ ũ�Ⱑ �ٸ���. �� = " " *2

	ShowBorder();
	CreateRandomSeed();
	setCursorPos(randomX, randomY);
	printf("��");
	setCursorPos(questItemPosX, questItemPosY);
	printf("��");
		
	// �÷��̾��� ���� ��ǥ �������ִ� ������ ����

	int playerX = 10; // x�� �� +2 (�� ���������� 2ĭ �Ȱܰ���) : (+1, ���������� 1ĭ �Ȱܰ�)
	int playerY = 5;  // y�� �� +1 �Ʒ��� 1ĭ ��������.

	// �÷��̾ ������ �� �����Ѵ�.
	// �÷��̾ ��輱 �ȿ� �׸��� �ʹ�.

	setCursorPos(playerX, playerY);
	printf("��");
	setCursorVisible(false);

	// ������ �ٷ� ������� �ʵ��� Loop �����
	// �ݺ������� ����Ǵ� �κ�
	while (1)
	{
		if (_kbhit())
		{
			// ȭ��ǥ �Է� ����
			setCursorPos(playerX, playerY);
			printf("  ");


			if (GetAsyncKeyState(VK_UP) & 0x8000) // 0x8000 C���� �Է��� ����� ��(��Ʈ)
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
				// x,y �� �ڸ� �״��
			}
		}

		//printf("���� ��ǥ : (%d, %d)", playerX, playerY); // �׽�Ʈ �ڵ�
		//system("cls")
		
		setCursorPos(playerX, playerY);
		printf("��");


		setCursorPos(60, 0);
		printf("Score");
		setCursorPos(60, 1);
		printf("���� ���� : %d", CurrentScore);


		playTime++;

		//int hour = playTime / 360;
		int minute = playTime / 60;
		int second = playTime % 60;

		setCursorPos(60, 2);
		printf("�÷��� �ð� : %02d : %02d", minute, second);

		if (IsQuest)
		{
			setCursorPos(60, 2);
			printf("����Ʈ�� Ȱ��ȭ �Ǿ����ϴ�.");
		}

		Sleep(50);

		// UI �ڵ� 
		



		// 1. wait inputkey(Ư�� Ű�� ������ ��)
		// 2. playerX, playerY���� ��ȭ��Ų��.
		// 3. �ش� ��ǥ�� Ŀ���� ��ġ�� �ٲٰ� printf 

		/*if (���� ����)
			break;*/
			//break;

			// ĳ���Ͱ� Ư�� ��ġ�� �����ϸ� GameOver true ����

			// if(playerX�� playerY Ư�� ��ġ�� �� )
		if (playerX == randomX && playerY == randomY) // �����۰� �÷��̾��� ��ġ�� ���� ��Ȳ
		{
			CurrentScore++; // 1. ������ ������.
			// 2. �������� ��ġ�� ����Ǿ�� �Ѵ�.
			randomX = ReturnPosX();
			randomY = ReturnPosY();
			setCursorPos(randomX, randomY);
			printf("��");
		}

		if (playerX == questItemPosX && playerY == questItemPosY)
		{
			IsQuest = true;
		}

		if (CurrentScore == 10)
		{
			break;
		}
	}
	// ���� ����
}