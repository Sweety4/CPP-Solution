#include"emp.h"
#ifndef SALES
#define SALES
class cSalesPerson :public  cEmployee
{
	float sales, comm;
public:
	cSalesPerson();
	cSalesPerson(int, const char*, int, int, int, float, float, float);
	void Accept();
	void Display();
	void CalculateSalary();
};

#endif