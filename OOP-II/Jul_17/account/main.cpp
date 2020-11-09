#include"account.h"

int main()
{
	Account a1;
	Account a2(11,"Seeta", 20000);

	Account a[2];
	
	a1.Display();
	a2.Display();
	for (int i = 0; i < 2; i++)
		a[i].Display();

	cout << "\n\n\n";
}