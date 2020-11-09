#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

#ifndef EMP
#define EMP
class cEmployee
{
	int id;
	char *name;//use of dunamic memory allocation
	float salary;
public:
	cEmployee();
	cEmployee(int, const char*, float);
	void Accept();
	void Display();
};
#endif
