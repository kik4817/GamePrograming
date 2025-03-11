#include "playerR.h"

void CreateRandomSeed()
{
	srand(time(NULL) * 1000 + clock());
}

int ReturnPosX()
{
	int randValue = rand() % 8 + 1;
	return randValue % 2 == 0 ? randValue : randValue + 1;
}

int ReturnPosY()
{
	int randValue = rand() % 9 + 1;
	return randValue;
}
