#include "OrderList.h"
////////////////методы класса OrderList///////////////////
OrderList::~OrderList() // деструктор
{
	while (!setPtrsTens.empty()) // удаление всех заказов,
	{ // удаление указателей из контейнера
		iter = setPtrsTens.begin();
		delete* iter;

		setPtrsTens.erase(iter);
	}
}
//---------------------------------------------------------
void OrderList::insertOrder(Order* ptrT)
{
	setPtrsTens.push_back(ptrT); // вставка нового заказа в список
}

//--------------------------------------------------------
float OrderList::getSumPrice() // получить сумму стоимости всех заказов
{
	float sum = 0;
	iter = setPtrsTens.begin();
	while (iter != setPtrsTens.end())
	{ // поиск жильца в списке (достаем у каждого жильца номер апартаментов)
		sum += (*iter)->getPrice();

		iter++;
	}
	return sum; // если нет - возвращаем -1
}
//--------------------------------------------------------
void OrderList::display() // вывод списка заказов
{
	cout << "\nНомер#\tДата\tОтправитель\tПолучатель\tДоход\n----------------------------------------------------------------\n";
	if (setPtrsTens.empty()) // если список заказов пуст
		cout << "***Нет заказов***\n" << endl; // выводим запись, что он пуст)
	else
	{
		iter = setPtrsTens.begin();
		while (iter != setPtrsTens.end()) // распечатываем все заказы
		{
			cout << (*iter)->getNumber() << " || " << (*iter)->getMonth() << "/" << (*iter)->getDay() << " || " << (*iter)->getShip() << " || " << (*iter)->getCons() << " || " << (*iter)->getPrice() << endl;
			*iter++;
		}
	}
}
//---------------------------------------------------------