#include "ExpenseInputScreen.h"
//////////////методы класса ExpenseInputScreen/////////////

// конструктор
ExpenseInputScreen::ExpenseInputScreen(ExpenseRecord* per) : ptrExpenseRecord(per)
{
	/*пусто*/
}
//------------------------------------------------------
void ExpenseInputScreen::setExpense()
{
	int month, day;
	string category, payee;
	float amount;
	cout << "¬ведите мес¤ц (1-12): ";
	do
		cin >> month;
	while (month > 12);
	cin.ignore(80, '\n');
	cout << "¬ведите день (1-31): ";
	do
		cin >> day;
	while (day > 31);
	cin.ignore(80, '\n');
	cout << "¬ведите категорию расходов (–емонт, Ќалоги): ";
	getaLine(category);
	cout << "¬ведите получател¤ (ѕростоквашиноЁлектро—быт): ";
	getaLine(payee);
	cout << "¬ведите сумму (39.95): ";
	cin >> amount;
	cin.ignore(80, '\n');
	// создаем новый расход
	Expense* ptrExpense = new Expense(month, day, category, payee, amount);
	// вставл¤ем расход в список всех расходов
	ptrExpenseRecord->insertExp(ptrExpense);
}
//---------------------------------------------------------