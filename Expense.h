#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
#include <cctype>
#include "Global.h"
///////////////////////����� Expense///////////////////////
//����� ������
class Expense
{
public:
	int month, day; // ����� � ���� ������ ��������
	string category; // ��������� ��������
	string payee; // ���� ������
	float amount; // ������� ������
//	Expense(int m, int d, string c, string p, float a) : month(m), day(d), category(c), payee(p), amount(a)
	//{ }
	Expense(int m, int d, string c, string p, float a) :
		month(m), day(d), category(c), payee(p), amount(a)
	{
		/* ��� �����! */
	}
};

