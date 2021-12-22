#include "ExpenseRecord.h"

//////////////////методы класса expenseRecord//////////////
ExpenseRecord::~ExpenseRecord() // деструктор
{ // удалить объекты expense
// удалить указатели на вектор
	while (!vectPtrsExpenses.empty())
	{
		iter = vectPtrsExpenses.begin();
		delete* iter;
		vectPtrsExpenses.erase(iter);
	}
}
//--------------------------------------------------------
void ExpenseRecord::insertExp(Expense* ptrExp)
{

	vectPtrsExpenses.push_back(ptrExp);
}
//---------------------------------------------------------
void ExpenseRecord::display() // распечатываем все расходы
{
	cout << "\nДата\tПолучатель\tСумма\tКатегория\n"
		<< "----------------------------------------\n" << endl;
	if (vectPtrsExpenses.size() == 0) // В контейнере нет расходов
		cout << "***Расходов нет***\n" << endl;
	else
	{
		iter = vectPtrsExpenses.begin();
		while (iter != vectPtrsExpenses.end())
		{ // распечатываем все расходы
			cout << (*iter)->month << '/' << (*iter)->day << '\t' << (*iter)->payee << '\t' << '\t';
			cout << (*iter)->amount << '\t' << (*iter)->category << endl;
			iter++;
		}
		cout << endl;
	}
}
//--------------------------------------------------------
// используется при составлении годового отчета
// используется при составлении годового отчета
float ExpenseRecord::displaySummary()
{
	float totalExpenses = 0; // Сумма по всем категориям расходов
	if (vectPtrsExpenses.size() == 0)
	{
		cout << "\tВсе категории\t0\n";
		return 0;
	}
	iter = vectPtrsExpenses.begin();
	while (iter != vectPtrsExpenses.end())
	{
		//выводим на экран категории расходов
		cout << '\t' << ((*iter)->category) << '\t' << ((*iter)->amount) << endl;
		totalExpenses += (*iter)->amount; //подсчитываем все расходы
		iter++;
	}
	return totalExpenses;
}
//--------------------------------------------------------