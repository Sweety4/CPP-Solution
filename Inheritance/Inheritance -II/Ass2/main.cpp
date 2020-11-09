#include"smanager.h"

void main()
{
	cEmployee e1(101, "tuka", 50000);
	e1.Display();

	cManager mg1(202, "abhi", 1000, 100, 40);
	mg1.Display();

	cSalesPerson sp1(303, "xyz", 500, 100, 20);
	sp1.Display();

	cSalesManager sm1(404, "pqr", 30, 40, 50, 300, 7);
	sm1.Display();

	cout << "\n\n\t Size of Employee      " << sizeof(cEmployee);
	cout << "\n\n\t Size of Manager       " << sizeof(cManager);
	cout << "\n\n\t Size of Sales Person  " << sizeof(cSalesPerson);
	cout << "\n\n\t Size of Sales Manager  " << sizeof(cSalesManager);
	
	cout << "\n\n\n";
}