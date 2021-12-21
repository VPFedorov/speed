#pragma once
#include "ExpenseRecord.h"

////////////////класс ExpenseInputScreen///////////////////
// ласс дл¤ ввода расходов
class ExpenseInputScreen
{
private:
	ExpenseRecord* ptrExpenseRecord; // запись о расходах
public:
	ExpenseInputScreen(ExpenseRecord*);
	void setExpense();
};
