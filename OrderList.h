#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //��� accumulate()
#include <cctype>
using namespace std;
#include "Order.h"

///////////////////����� OrderList////////////////////////
//����� OrderList � ������ ���� �������.
//�� �������� ��������� ���������� �� ����� Order
// � ��������� ��� ��� ������
class OrderList
{
private:
	// ���������� ��������� �� �����
	list <Order*> setPtrsOrd; // ��������� �� ����� �������
	list <Order*>::iterator iter; //��������

public:
	~OrderList(); // ���������� (�������� ������ �������)
	void insertOrder(Order*); // �������� ����� � ������
	void display(); // ����� ������ �������
	float getSumPrice();

};