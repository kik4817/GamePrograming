#pragma once

#include <stdio.h>
#include <stdbool.h>

extern int CurrentMoney;
extern int UpgradeCost;
extern bool isFail;        // Play.c ���������� �����ϰڴ�.

bool CanUpgrade(int cost); // cost CurrentMoney
