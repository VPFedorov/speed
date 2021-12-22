#include "OrderInputList.h"
///////////метод класса OrderInputList//////////////////
void OrderInputList::setOrder() // добавить данные о заказе
{
	cout << "¬ведите номер заказа: " << endl;
	cin >> num;
	cin.ignore(80, '\n');
	cout << "¬ведите день: " << endl;
	do {
		cin >> day;
		cin.ignore(80, '\n');
	} while (day > 31);
	cout << "¬ведите мес€ц: " << endl;
	do {

		cin >> month;
		cin.ignore(80, '\n');
	} while (month > 12);


	cout << "¬ведите им€ отправител€ (ƒ€д€ ‘едор): " << endl;
	getaLine(ship);
	cout << "¬ведите им€ получател€ (ƒ€д€ ‘едор): " << endl;
	getaLine(cons);
	cout << "¬ведите цену: " << endl;
	cin >> pr;
	cin.ignore(80, '\n');
	Order* ptrOrder = new Order(num, day, month, ship, cons, pr); // создать заказ
	ptrOrderList->insertOrder(ptrOrder); // занести в список заказов
}
