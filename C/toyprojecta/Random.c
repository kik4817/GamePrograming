#include "Random.h"

// 1 ~ 100

int ReturnRandomValue()
{
	srand((unsigned int)time(NULL) * 1000 + clock());

	// int randomValue = (rand() % 100) + 1;
	return (rand() % 100) + 1;

}

bool CheckRandomFunc(int percent) // 70
{
	int randValue = ReturnRandomValue(); // 1 ~ 100 랜덤으로 변환

	if (randValue <= percent)
	{
		printf("성공하였습니다.\n\n");//, randValue);
		return true;
	}
	else
	{
		printf("실패했습니다.\n\n");//, randValue);
		return false;
	}


	return false;
}

int ReturnRandomInRange(int min, int max)
{
	srand((unsigned int)time(NULL) * 1000 + clock());

	return (rand() % (max - min + 1)) + min;
}
