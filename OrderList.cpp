#include "OrderList.h"
////////////////������ ������ OrderList///////////////////
OrderList::~OrderList() // ����������
{
	while (!setPtrsTens.empty()) // �������� ���� �������,
	{ // �������� ���������� �� ����������
		iter = setPtrsTens.begin();
		delete* iter;

		setPtrsTens.erase(iter);
	}
}
//---------------------------------------------------------
void OrderList::insertOrder(Order* ptrT)
{
	setPtrsTens.push_back(ptrT); // ������� ������ ������ � ������
}

//--------------------------------------------------------
float OrderList::getSumPrice() // �������� ����� ��������� ���� �������
{
	float sum = 0;
	iter = setPtrsTens.begin();
	while (iter != setPtrsTens.end())
	{ // ����� ������ � ������ (������� � ������� ������ ����� ������������)
		sum += (*iter)->getPrice();

		iter++;
	}
	return sum; // ���� ��� - ���������� -1
}
//--------------------------------------------------------
void OrderList::display() // ����� ������ �������
{
	cout << "\n�����#\t����\t�����������\t����������\t�����\n----------------------------------------------------------------\n";
	if (setPtrsTens.empty()) // ���� ������ ������� ����
		cout << "***��� �������***\n" << endl; // ������� ������, ��� �� ����)
	else
	{
		iter = setPtrsTens.begin();
		while (iter != setPtrsTens.end()) // ������������� ��� ������
		{
			cout << (*iter)->getNumber() << " || " << (*iter)->getMonth() << "/" << (*iter)->getDay() << " || " << (*iter)->getShip() << " || " << (*iter)->getCons() << " || " << (*iter)->getPrice() << endl;
			*iter++;
		}
	}
}
//---------------------------------------------------------