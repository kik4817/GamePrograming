#pragma once

/*
	#include <stdlib.h>
	#include <time.h>
	srand(time(NULL)) // rand seed�� �����ϴ� �Լ�
	rand()
*/

#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// 1 ~ 100 �����ϰ� ��� (����)
// 30% ���� (1 ~ 100) 70 ũ�ų� ������ �����Ѵ�. [ 1 ~ 100]

// A �̸�(B)
// A : ���Ѱ�
// B : �Ű�����

int ReturnRandomValue();
bool CheckRandomFunc(int randValue);

int ReturnRandomInRange(int min, int max); // 20~40