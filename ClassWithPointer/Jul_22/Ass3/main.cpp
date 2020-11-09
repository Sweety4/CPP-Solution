#include"emp.h"
int main()
{
	cEmployee e1;
	e1.Display();

	cEmployee e2("Seeta", "Pune");
	e2.Display();

	e1.setName("SaraSwati");
	e1.Display();

	cout << "\n\n\n";
}