#include"emp.h"

#ifndef SALES
#define SALES
class cSalesPerson :virtual public cEmployee
{
	float sales, comm;
public:
	cSalesPerson();
	cSalesPerson(int, const char*, float, float, float);
	void Display();
	void Accept();
};
#endif


