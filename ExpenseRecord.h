#pragma once
#include "Expense.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //дл¤ accumulate()
#include <cctype>
using namespace std;
///////////////////класс ExpenseRecord/////////////////////
// ласс записей о затратах
class ExpenseRecord
{
private:
	vector<Expense*> vectPtrsExpenses; //вектор указателей на расходы
	vector<Expense*>::iterator iter;
public:
	~ExpenseRecord();

	void insertExp(Expense*);
	void display();
	float displaySummary(); // нужно дл¤ годового отчета
};
