#include "ExpenseInputScreen.h"
//////////////������ ������ ExpenseInputScreen/////////////

// �����������
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseRecord(per)
{
	/*�����*/
}
//------------------------------------------------------
void ExpenseInputScreen::setExpense()
{
	int month, day;
	string category, payee;
	float amount;
	cout << "������� ����� (1-12): ";
	do
		cin >> month;
	while (month > 12);
	cin.ignore(80, '\n');
	cout << "������� ���� (1-31): ";
	do
		cin >> day;
	while (day > 31);
	cin.ignore(80, '\n');
	cout << "������� ��������� �������� (������, ������): ";
	getaLine(category);
	cout << "������� ����������: ";
	getaLine(payee);
	cout << "������� ����� (39.95): ";
	cin >> amount;
	cin.ignore(80, '\n');
	// ������� ����� ������
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	// ��������� ������ � ������ ���� ��������
	ptrExpenseRecord->insertExp(ptrExpense);
}
//---------------------------------------------------------