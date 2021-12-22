#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#include <cctype>
#include "Global.h"
///////////////////////класс Expense///////////////////////
//Класс затрат
class Expense
{
public:
	int month, day; // месяц и день уплаты расходов
	string category; // категория расходов
	string payee; // кому платим
	float amount; // сколько платим
//	Expense(int m, int d, string c, string p, float a) : month(m), day(d), category(c), payee(p), amount(a)
	//{ }
	Expense(int m, int d, string c, string p, float a) :
		month(m), day(d), category(c), payee(p), amount(a)
	{
		/* тут пусто! */
	}
};

