#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#ifndef EMP
#define EMP
class Employee
{
	char name[20];
public:
	Employee();
	Employee(const char*);
	virtual void Display();
};
#endif