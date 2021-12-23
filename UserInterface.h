#include "Global.h"
#include "OrderList.h"
#include "OrderInputList.h"
#include "ExpenseRecord.h"
#include "ExpenseInputScreen.h"
#include "AnnualReport.h"
#include <vector>
#include <list>
#include <string>
#pragma once
#include <numeric> //дл¤ accumulate()
#include <cctype>
using namespace std;

////////////////// ласс UserInterface//////////////////////
//vлавный класс для запуска приложения:
//этот класс определяет взаимодействие юзера с программой.
class UserInterface
{
private:
	OrderList* ptrOrderList;
	OrderInputList* ptrOrderInputScreen;
	ExpenseRecord* ptrExpenseRecord;
	ExpenseInputScreen* ptrExpenseInputScreen;
	AnnualReport* ptrAnnualReport;
	char ch;
	int cs;
public:

	UserInterface();
	~UserInterface();
	void interact();
}; // конец класса userInterfac
