#pragma once
#include"OrderList.h"
#include"Global.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для accumulate()
#include <cctype>
using namespace std;
////////////////класс OrderInputList////////////////////
//класс OrderInputList. Это класс, отвечающий за отображение экрана,
//куда пользователь может ввести данные о новом заказе:
class OrderInputList
{
private:
	OrderList* ptrOrderList;
	string ship; // грузоотправитель
	string cons; //грузополучатель
	int num; // номер заказа
	float pr; //стоимость заказа
	int month, day; // месяц и день заказа
public:
	OrderInputList(OrderList* ptrTL)/*, string sh, string cons, int num, int mont, int day, float pr) */: ptrOrderList(ptrTL)//, ship(sh), cons(cons), num(num), month(month), pr(pr)*/
	{
		/* тут пусто */
	}
	void setOrder(); // добавить данные о заказе
};
