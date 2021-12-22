#include "UserInterface.h"

////////////////методы класса userInterface//////////////
UserInterface::UserInterface()
{
	ptrOrderList = new OrderList;
	ptrExpenseRecord = new ExpenseRecord;
}
//---------------------------------------------------------
UserInterface::~UserInterface()
{
	delete ptrOrderList;
	delete ptrExpenseRecord;
}
//---------------------------------------------------------
void UserInterface::interact()
{
	while (true)
	{
		cout << "Для ввода данных нажмите 'i', \n"
			<< " для вывода отчета 'd', \n"
			<< " для выхода 'q': \n";
		ch = getaChar();
		if (ch == 'i') // ввод данных
		{
			cout << " нажмите для добавления заказа 't', \n"
				//<< " для записи арендной платы 'r', \n"
				<< " для записи расходов 'e': \n";
			ch = getaChar();
			switch (ch)
			{
				//экраны ввода существуют только во время их
				//использования
			case 't': ptrOrderInputScreen =
				new OrderInputScreen(ptrOrderList);
				ptrOrderInputScreen->setOrder();
				delete ptrOrderInputScreen;
				break;

			case 'e': ptrExpenseInputScreen =
				new ExpenseInputScreen(ptrExpenseRecord);
				ptrExpenseInputScreen->setExpense();
				delete ptrExpenseInputScreen;
				break;
			default: cout << "Неизвестная функция\n";
				break;
			} // конец секции switch
		} // конец условия if
		else if (ch == 'd') // вывод данных
		{
			cout << "Нажмите для вывода заказов 't', \n"
				<< " для вывода расходов 'e', \n"
				<< "для вывода годового отчета 'a': \n";
			ch = getaChar();
			switch (ch)
			{
			case 't': ptrOrderList->display();
				break;
			case 'e': ptrExpenseRecord->display();
				break;
			case 'a':
				ptrAnnualReport = new AnnualReport(ptrExpenseRecord, ptrOrderList);
				ptrAnnualReport->display();
				delete ptrAnnualReport;
				break;
			default: cout << "Неизвестная функция вывода\n";
				break;
			} // конец switch
		} // конец elseif
		else if (ch == 'q')
			return; // выход
		else
			cout << "Неизвестная функция. Нажимайте только 'i', 'd' или 'q'\n";
	} // конец while
} // конец interact()