
#include"account.h"
void main()
{
	Account ac1(101, "Seeta", 40000);
	ac1.Display();
	ac1.Deposit(60000);
	ac1.Display();


	Account ac2(202, "Geeta", 30000);
	ac2.Display();
	ac2.Withdraw(29000);
	ac2.Display();

	cout << "\n\n\n";
}