#pragma once
#include "ExpenseRecord.h"
#include "OrderList.h"

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //дл¤ accumulate()
#include <cctype>
using namespace std;
//////////////////класс AnnualReport///////////////////////
// ласс годового отчета
class AnnualReport
{
private:
	//RentRecord* ptrRR; // записи доходов
	ExpenseRecord* ptrER; // записи расходов
	float expenses, income; // суммы доходов и расходов
	OrderList* summa;
	//float saa;
public:
	AnnualReport(ExpenseRecord*, OrderList*);
	void display(); // отображение годового отчета
};

