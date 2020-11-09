#include"sales.h"

cSalesPerson::cSalesPerson()
{
	sales = comm = 0;
}
cSalesPerson::cSalesPerson(int id, const char *nm, int d, int m, int y, float sal, float sa, float com) :cEmployee(id, nm, d, m, y, sal)
{
	sales = sa;
	comm = com;
}
void cSalesPerson::Accept()
{
	cEmployee::Accept();
	cout << "\n\n\t Enter Number of sales  and commission ";
	cin >> sales >> comm;
}
void cSalesPerson::Display()
{
	cEmployee::Display();
	cout << "\n\t Sales      :" << sales;
	cout << "\n\t Commission : " << comm;
}
void cSalesPerson::CalculateSalary()
{
	cout << "\n\n\t Net Salary :" << salary + (sales+comm);
}