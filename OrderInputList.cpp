#include "OrderInputList.h"
///////////����� ������ OrderInputList//////////////////
void OrderInputList::setOrder() // �������� ������ � ������
{
	cout << "������� ����� ������: " << endl;
	cin >> num;
	cin.ignore(80, '\n');
	cout << "������� ����: " << endl;
	do {
		cin >> day;
		cin.ignore(80, '\n');
	} while (day > 31);
	cout << "������� �����: " << endl;
	do {

		cin >> month;
		cin.ignore(80, '\n');
	} while (month > 12);


	cout << "������� ��� ����������� (���� �����): " << endl;
	getaLine(ship);
	cout << "������� ��� ���������� (���� �����): " << endl;
	getaLine(cons);
	cout << "������� ����: " << endl;
	cin >> pr;
	cin.ignore(80, '\n');
	Order* ptrOrder = new Order(num, day, month, ship, cons, pr); // ������� �����
	ptrOrderList->insertOrder(ptrOrder); // ������� � ������ �������
}
