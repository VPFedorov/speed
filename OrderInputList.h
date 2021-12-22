#pragma once
#include"OrderList.h"
#include"Global.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //дл¤ accumulate()
#include <cctype>
using namespace std;
////////////////класс OrderInputList////////////////////
//класс OrderInputList. Ёто класс, отвечающий за отображение Ђэкранаї,
//куда пользователь может ввести данные о новом заказе:
class OrderInputList
{
private:
	OrderList* ptrOrderList;
	string ship; // грузоотправитель
	string cons; //грузополучатель
	int num; // номер заказа
	float pr; //стоимость заказа
	int month, day; // мес¤ц и день заказа
public:
	OrderInputList(OrderList* ptrTL)/*, string sh, string cons, int num, int mont, int day, float pr) */: ptrOrderList(ptrTL)//, ship(sh), cons(cons), num(num), month(month), pr(pr)*/
	{
		/* тут пусто */
	}
	void setOrder(); // добавить данные о жильце
};
