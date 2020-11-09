#include"bank.h"

int main()
{
	Account::setInterestRate(10);

	Account a1;
	Account a2("Seeta", 20000);

	Account a[2];

	a1.Display();
	a2.Display();
	
	for (int i = 0; i < 2; i++)
		a[i].Display();

	cout << "\n\n\n";
}