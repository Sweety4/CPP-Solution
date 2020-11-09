#include"bank.h"
int Account::cnt = 100;
int Account::interestrate;
Account::Account()
{
	cnt++;
	acno = cnt;
	strcpy(name, " ");
	balance = 1000;
}
Account::Account( const char *nm, float bal)
{
	cnt++;
	acno = cnt;
	strcpy(name, nm);
	balance = bal;
}
void Account::setInterestRate(int rate)
{
	interestrate = rate;
}
void Account::Display()
{
	cout << "\n\n ************ Account No :" << acno << " ************* ";
	cout << "\n\t Name         : " << name;
	cout << "\n\t Balance      : " << balance;
	cout << "\n\t Interst Rate : " << interestrate;
}



