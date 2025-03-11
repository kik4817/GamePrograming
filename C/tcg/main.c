#include "InfoM.h"
#include "Console.h"
#include "Map.h"
#include <Windows.h>
#include <stdlib.h>

void setCursorPos(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void setCursorVisible(bool enable)
{
	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = enable;
	cursorInfo.dwSize = 1;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


int main()
{
	ShowInfoM();
	SetColor(0, 6);
	ShowMenu();
	//ShowMap();


}