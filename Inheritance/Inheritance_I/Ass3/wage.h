#include"emp.h"

#ifndef WAGE
#define WAGE
class cWageEmployee:public  cEmployee
{
	float hrs, rate;
public:
	cWageEmployee();
	cWageEmployee(int, const char*, int, int, int, float, float, float);
	void Accept();
	void Display();
	void CalculateSalary();
};
#endif