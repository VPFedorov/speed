#pragma once
#include "ExpenseRecord.h"

////////////////����� ExpenseInputScreen///////////////////
//����� �� ����� ��������
class ExpenseInputScreen
{
private:
	ExpenseRecord* ptrExpenseRecord; // ������ � ��������
public:
	ExpenseInputScreen(ExpenseRecord*);
	void setExpense();
};
