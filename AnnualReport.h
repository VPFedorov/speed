#pragma once
#include "ExpenseRecord.h"
#include "OrderList.h"

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //�� accumulate()
#include <cctype>
using namespace std;
//////////////////����� AnnualReport///////////////////////
//����� �������� ������
class AnnualReport
{
private:
	//RentRecord* ptrRR; // ������ �������
	ExpenseRecord* ptrER; // ������ ��������
	float expenses, income; // ����� ������� � ��������
	OrderList* summa;
	//float saa;
public:
	AnnualReport(ExpenseRecord*, OrderList*);
	void display(); // ����������� �������� ������
};

