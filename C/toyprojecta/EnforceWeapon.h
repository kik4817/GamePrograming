#pragma once

// Money System header ����
// Upgrade System header ����

#include <stdio.h>   // ����� �Լ��� �����ϴ� ���
#include <stdbool.h> // bool type �߰�
#include <conio.h>   // _getch() �Է� ���� ���� ����� �Լ��� �����ϴ� ���
#include <Windows.h> // system("cls") ������ �ܼ� �Լ� ���ԵǾ� �ִ� ���
//#include <stdlib.h>  // rand() ����ϱ� ���� ���
//#include <time.h>    // time() ����ϱ� ���� ���
#include "Random.h"  // <stdlib.h>, <time.h>�� Random�� ���ԵǾ��ִ�
#include "Currency.h"// �ڽ�Ʈ ��� �Լ��� ���� ����� ���� ��� 

void ShowMenu(); // 1. ��ȭ�ϴ�. 2. ���¸� �����ش�.
// ShowMenu�� ���� ���� �Լ�

void Upgrade();
void ShowStatus();

// ������ ���� ����
// ��ǥ�� �޼��ߴ°�? - success ����

bool IsGameClear(); // ������ ����

// �������� ���� ����ߴ°�? - fail ����

// ���� ����

extern int CurrentLevel;
extern int Targetlevel;
extern bool isClear;
extern bool isFail;

