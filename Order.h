#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //для  accumulate()
#include <cctype>

using namespace std;
//////////////////// класс Order (заказы) //////////////////
//Он хранит имя жильца и номер апартаментов, которые он арендует.
class Order
{
private:
	string shipper; // грузоотправитель
	string consignee; //грузополучатель
	int number; // номер заказа
	float price; //стоимость заказа
	int month, day; // месяц и день заказа
//	float sumPrice;
	// здесь может быть прочая информация о жильце
	// (телефон и т.п.)
public:
	Order(int num, int dated, int datem, string ship, string cons, float price);
	~Order();
	int getNumber(); //возвращает номер заказа
	int getDay();  //возвращает день заказа
	int getMonth();	//возвращает месяц заказа
	float getPrice();  //возвращает стоимость заказа
	string getCons();  //возвращает грузополучателя
	string getShip(); //возвращает грузоотправителя
};