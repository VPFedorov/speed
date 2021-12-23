#include "OrderList.h"
////////////////методы класса OrderList///////////////////
OrderList::~OrderList() // деструктор
{
	while (!setPtrsOrd.empty()) // удаление всех заказов,
	{ // удаление указателей из контейнера
		iter = setPtrsOrd.begin();
		delete* iter;

		setPtrsOrd.erase(iter);
	}
}
//---------------------------------------------------------
void OrderList::insertOrder(Order* ptrT)
{
	setPtrsOrd.push_back(ptrT); // вставка нового заказа в список
}

//--------------------------------------------------------
float OrderList::getSumPrice() // получить сумму стоимости всех заказов
{
	float sum = 0;
	iter = setPtrsOrd.begin();
	while (iter != setPtrsOrd.end())
	{ // Считает сумму всех доходов от заказов
		sum += (*iter)->getPrice();

		iter++;
	}
	return sum; 
}
//--------------------------------------------------------
void OrderList::display() // вывод списка заказов
{
	cout << "\nНомер#\tДата\tОтправитель\tПолучатель\tДоход\n----------------------------------------------------------------\n";
	if (setPtrsOrd.empty()) // если список заказов пуст
		cout << "***Нет заказов***\n" << endl; // выводим запись, что он пуст)
	else
	{
		iter = setPtrsOrd.begin();
		while (iter != setPtrsOrd.end()) // распечатываем все заказы
		{
			cout << (*iter)->getNumber() << " || " << (*iter)->getMonth() << "/" << (*iter)->getDay() << " || " << (*iter)->getShip() << " || " << (*iter)->getCons() << " || " << (*iter)->getPrice() << endl;
			*iter++;
		}
	}
}
//---------------------------------------------------------