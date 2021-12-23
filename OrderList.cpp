#include "OrderList.h"
////////////////������ ������ OrderList///////////////////
OrderList::~OrderList() // ����������
{
	while (!setPtrsOrd.empty()) // �������� ���� �������,
	{ // �������� ���������� �� ����������
		iter = setPtrsOrd.begin();
		delete* iter;

		setPtrsOrd.erase(iter);
	}
}
//---------------------------------------------------------
void OrderList::insertOrder(Order* ptrT)
{
	setPtrsOrd.push_back(ptrT); // ������� ������ ������ � ������
}

//--------------------------------------------------------
float OrderList::getSumPrice() // �������� ����� ��������� ���� �������
{
	float sum = 0;
	iter = setPtrsOrd.begin();
	while (iter != setPtrsOrd.end())
	{ // ������� ����� ���� ������� �� �������
		sum += (*iter)->getPrice();

		iter++;
	}
	return sum; 
}
//--------------------------------------------------------
void OrderList::display() // ����� ������ �������
{
	cout << "\n�����#\t����\t�����������\t����������\t�����\n----------------------------------------------------------------\n";
	if (setPtrsOrd.empty()) // ���� ������ ������� ����
		cout << "***��� �������***\n" << endl; // ������� ������, ��� �� ����)
	else
	{
		iter = setPtrsOrd.begin();
		while (iter != setPtrsOrd.end()) // ������������� ��� ������
		{
			cout << (*iter)->getNumber() << " || " << (*iter)->getMonth() << "/" << (*iter)->getDay() << " || " << (*iter)->getShip() << " || " << (*iter)->getCons() << " || " << (*iter)->getPrice() << endl;
			*iter++;
		}
	}
}
//---------------------------------------------------------