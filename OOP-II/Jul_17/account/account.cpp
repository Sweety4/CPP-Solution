#include"account.h"
Account::Account()
{
	acno = 1001;
	strcpy(name, " ");
	balance = 1000;
	
}
Account::Account(int ac,const char *nm,float bal)
{
	acno = ac;
	strcpy(name, nm);
	balance = bal;
}
void Account::Display()
{
	cout << "\n\n ************ Account No :" << acno << " ************* ";
	cout << "\n\t Name : " << name;
	cout << "\n\t Balance : " << balance;
}



