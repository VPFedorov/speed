#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <numeric> //���  accumulate()
#include <cctype>

using namespace std;
//////////////////// ����� Order (������) //////////////////
//�� ������ ��� ������ � ����� ������������, ������� �� ��������.
class Order
{
private:
	string shipper; // ����������������
	string consignee; //���������������
	int number; // ����� ������
	float price; //��������� ������
	int month, day; // ����� � ���� ������
//	float sumPrice;
	// ����� ����� ���� ������ ���������� � ������
	// (������� � �.�.)
public:
	Order(int num, int dated, int datem, string ship, string cons, float price);
	~Order();
	int getNumber(); //���������� ����� ������
	int getDay();  //���������� ���� ������
	int getMonth();	//���������� ����� ������
	float getPrice();  //���������� ��������� ������
	string getCons();  //���������� ���������������
	string getShip(); //���������� ����������������
};