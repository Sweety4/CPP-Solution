
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Account
{
	static int interestrate;
	static int cnt;
	int acno;
	char name[20];
	float balance;
public:
	Account();
	Account(const char*, float);
	static void setInterestRate(int);
	void Display();
};
