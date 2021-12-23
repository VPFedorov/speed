#include "AnnualReport.h"

////////////////������ ������ AnnualReport/////////////////
//�����������
AnnualReport::AnnualReport(ExpenseRecord* pER, OrderList* sP) : ptrER(pER), summa(sP)
{ /* ����� */
}
//---------------------------------------------------------
void AnnualReport::display()
{
	cout << "������� �����\n--------------\n" << endl;
	cout << "������\n" << endl;
	cout << "\t����� �� ���� �������:\t\t";
	income = summa->getSumPrice();
	cout << income << endl;

	cout << "�������\n" << endl;
	expenses = ptrER->displaySummary();
	cout << "����� ��������:\t\t";
	cout << expenses << endl;
	// ��������� ������������
	cout << "\n�������:\t\t\t" << (income - expenses) << endl;
}
//---------------------------------------------------------