#pragma once
#include"person.h"
#ifndef _EMP
#define _EMP

class Employee :public Person
{
	static int cnt;
	int id, salary;
public:
	Employee();
	Employee(const char*, const char*, const char*, int, int);
	int getsal()const;
	void accept();
	void display()const;
};
#endif // !_EMP

