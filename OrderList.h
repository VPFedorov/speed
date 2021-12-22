#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#include <cctype>
using namespace std;
#include "Order.h"

///////////////////класс OrderList////////////////////////
//класс OrderList — список всех жильцов.
//Он содержит множество указателей на класс Order
// и оперирует ими при выводе
class OrderList
{
private:
	// установить указатели на жильцов
	list <Order*> setPtrsTens; // указатели на класс жильцов
	list <Order*>::iterator iter; //итератор

public:
	~OrderList(); // деструктор (удаление списка заказов)
	void insertOrder(Order*); // добавить заказ в список
	void display(); // вывод списка заказов
	float getSumPrice();

};