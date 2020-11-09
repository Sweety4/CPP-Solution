
#include"sales.h"
cSalesPerson::cSalesPerson()
{
	sales = comm = 0;
}
cSalesPerson::cSalesPerson(int id, const char *nm, float sal, float sa, float con) :cEmployee(id, nm, sal)
{
	sales = sa;
	comm = con;
}
void cSalesPerson::Accept()
{
	cEmployee::Accept();
	cout << "\n\t Enter Sales and Commission ";
	cin >> sales >> comm;
}
void cSalesPerson::Display()
{
	cEmployee::Display();
	cout << "\n\t sales : " << sales;
	cout << "\n\t comm  : " << comm;
}
