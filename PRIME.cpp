#include <stdlib.h>
#include <iostream>
#include <Windows.h>
#include <string>
#include "PRIME.h"

bool prim(int num)
{
	SetConsoleTitleA("MP - load|pr");
	int divCount = 0;
	bool primo = false;
	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0) divCount++;
	}
	if (divCount < 3) primo = true;

	return primo;
}

int primC(int num)
{
	SetConsoleTitleA("MP - load|pc");
	int primC = 0;
	for (int i = 1; i <= num; i++)
	{
		if (prim(i)) primC++;
	}
	return primC;
}

int primV(int num)
{
	SetConsoleTitleA("MP - load|pv");
	int primNum = 0;
	int couter = 0;
	for (int i = 1; i <= i + 2; i++)
	{
		if (primNum == num + 1) return couter;
		couter++;
		if (prim(i)) primNum++;
	}
}

int primF(int num)
{
	SetConsoleTitleA("MP - loading");
	int primNum = 0;
	int couter = 0;
	for (int i = 1; i <= i + 2; i++)
	{
		if (couter == num) return primNum - 1;
		couter++;
		if (prim(i)) primNum++;
	}
}
