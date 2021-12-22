#include "AnnualReport.h"

////////////////методы класса AnnualReport/////////////////
//Конструктор
AnnualReport::AnnualReport(ExpenseRecord* pER, OrderList* sP) : ptrER(pER), summa(sP)
{ /* пусто */
}
//---------------------------------------------------------
void AnnualReport::display()
{
	cout << "Годовой отчет\n--------------\n" << endl;
	cout << "Доходы\n" << endl;
	cout << "\tДоход со всех заказов:\t\t";
	income = summa->getSumPrice();
	cout << income << endl;

	cout << "Расходы\n" << endl;
	expenses = ptrER->displaySummary();
	cout << "Сумма расходов:\t\t";
	cout << expenses << endl;
	// вычисляем прибыльность
	cout << "\nПрибыль:\t\t\t" << (income - expenses) << endl;
}
//---------------------------------------------------------