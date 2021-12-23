#include "UserInterface.h"

////////////////������ ������ userInterface//////////////
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
		cout << "��� ����� ������ ������� 'i', \n" 
			<< "��� ������ ������ 'd', \n"
			<< "��� ������ 'q': \n";
		ch = getaChar();
		if (ch == 'i') // ���� ������
		{
			cout << "������� ��� ���������� ������ 't', \n"
				<< "��� ������ �������� 'e': \n";
			ch = getaChar();
			switch (ch)
			{
				//������ ����� ���������� ������ �� ����� ��
				//�������������
			case 't': ptrOrderInputScreen =
				new OrderInputList(ptrOrderList);
				ptrOrderInputScreen->setOrder();
				delete ptrOrderInputScreen;
				break;

			case 'e': ptrExpenseInputScreen =
				new ExpenseInputScreen(ptrExpenseRecord);
				ptrExpenseInputScreen->setExpense();
				delete ptrExpenseInputScreen;
				break;
			default: cout << "����������� �������\n";
				break;
			} // ����� ������ switch
		} // ����� ������� if
		else if (ch == 'd') // ����� ������
		{
			cout << "������� ��� ������ ������� 't', \n"
				<< " ��� ������ �������� 'e', \n"
				<< "��� ������ �������� ������ 'a': \n";
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
			default: cout << "����������� ������� ������\n";
				break;
			} // ����� switch
		} // ����� elseif
		else if (ch == 'q')
			return; // �����
		else
			cout << "����������� �������. ��������� ������ 'i', 'd' ��� 'q'\n";
	} // ����� while
} // ����� interact()