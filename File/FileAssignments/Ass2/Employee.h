#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
class cEmployee
{
	int empno;
	char empname[30];
	int sal;
public:
	void accept();
	void display();
};

