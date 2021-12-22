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
	//������� setlocale() ����� ����������� ���������.
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	//setlocale(LC_ALL, "rus");
	UserInterface theUserInterface;
	theUserInterface.interact();
	return 0; 
}
////////////////////����� ����� lordApp.cpp////////////////