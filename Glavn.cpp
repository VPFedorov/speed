// lordApp.cpp
#include "Global.h"
#include "AnnualReport.h"
#include "Expense.h"
#include "ExpenseInputScreen.h"
#include "ExpenseRecord.h"
#include "Order.h"
#include "OrderInputList.h"
#include "OrderList.h"
#include "UserInterface.h"
int main()
{
	//Функция setlocale() задаёт локализацию программы.
	setlocale(LC_ALL, "rus");
	UserInterface theUserInterface;
	theUserInterface.interact();
	return 0;
}
////////////////////конец файла lordApp.cpp////////////////