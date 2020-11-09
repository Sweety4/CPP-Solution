#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Account
{
	int acno;
	char name[20];
	float balance;
public:
	Account();
	Account(int,const char*, float);
	void Display();
};
