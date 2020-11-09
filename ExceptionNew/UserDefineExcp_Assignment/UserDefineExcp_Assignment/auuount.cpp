#define _CRT_SECURE_NO_WARNINGS
#include"account.h"

Account::Account()
{
	id = 1;
	strcpy(name, " ");
	balance = 1000;
}
Account::Account(int i, const char *nm, float bal)
{
	id = i;
	strcpy(name, nm);
	balance = bal;
}

void Account::Deposit(int amt)
{
	try
	{
		if (amt >= 50000)
		{
			PANCardDetailsException obj;
			throw obj;
		}
		balance = balance + amt;
	}
	catch (PANCardDetailsException &obj)
	{
		cout << "\n\n\n" << obj.what();
	}
}
void Account::Display()
{
	cout << "\n\n\t" << id << "\t" << name << "\t" << balance;
}
void Account::Withdraw(int amt)
{
	int check;
	try
	{
		check = balance - amt;
		if (check<1500)
		{
			MinimumBalanceException obj;
			throw obj;
		}
		balance = balance + amt;
	}
	catch (MinimumBalanceException &obj)
	{
		cout << "\n\n\n" << obj.what();
	}
}