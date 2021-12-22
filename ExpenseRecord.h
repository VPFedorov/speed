#pragma once
#include "Expense.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //�� accumulate()
#include <cctype>
using namespace std;
///////////////////����� ExpenseRecord/////////////////////
//����� ������� � ��������
class ExpenseRecord
{
private:
	vector<Expense*> vectPtrsExpenses; //������ ���������� �� �������
	vector<Expense*>::iterator iter;
public:
	~ExpenseRecord();

	void insertExp(Expense*);
	void display();
	float displaySummary(); // ����� �� �������� ������
};
