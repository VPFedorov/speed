#pragma once
#include"OrderList.h"
#include"Global.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //�� accumulate()
#include <cctype>
using namespace std;
////////////////����� OrderInputList////////////////////
//����� OrderInputList. ��� �����, ���������� �� ����������� �������,
//���� ������������ ����� ������ ������ � ����� ������:
class OrderInputList
{
private:
	OrderList* ptrOrderList;
	string ship; // ����������������
	string cons; //���������������
	int num; // ����� ������
	float pr; //��������� ������
	int month, day; // ���� � ���� ������
public:
	OrderInputList(OrderList* ptrTL)/*, string sh, string cons, int num, int mont, int day, float pr) */: ptrOrderList(ptrTL)//, ship(sh), cons(cons), num(num), month(month), pr(pr)*/
	{
		/* ��� ����� */
	}
	void setOrder(); // �������� ������ � ������
};
