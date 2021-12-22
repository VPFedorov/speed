#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //дл§  accumulate()
#include <cctype>

using namespace std;
//////////////////// класс Order (заказы) //////////////////
//Эн хранит им§ жильца и номер апартаментов, которые он арендует.
class Order
{
private:
	string shipper; // грузоотправитель
	string consignee; //грузополучатель
	int number; // номер заказа
	float price; //стоимость заказа
	int month, day; // мес§ц и день заказа
//	float sumPrice;
	// здесь может быть проча§ информаци§ о жильце
	// (телефон и т.п.)
public:
	Order(int num, int dated, int datem, string ship, string cons, float price);
	~Order();
	int getNumber(); //возвращает номер заказа
	int getDay();  //возвращает день заказа
	int getMonth();	//возвращает мес§ц заказа
	float getPrice();  //возвращает стоимость заказа
	string getCons();  //возвращает грузополучател§
	string getShip(); //возвращает грузоотправител§
};