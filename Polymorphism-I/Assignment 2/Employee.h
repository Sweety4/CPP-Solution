#pragma once
#include"MyString.h"
#include"MyDate.h"
#include "MyAddress.h"
#ifndef EMP_
#define EMP_

class cEmployee
{
	int empid;
	cString name;
	cDate doj;
	cAddress p_add;
	cAddress c_add;
	int salary;
public:
	cEmployee();
	cEmployee(int,const char*, int, int, int, const char*, const char*,const char*,const char*,int);

	void Display();
	int getsalary(void);
	virtual int Calculate_Sal() = 0;
};
#endif // !EMP_

