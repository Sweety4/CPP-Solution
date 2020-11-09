#pragma once
#include"Employee.h"
#ifndef SEMP_
#define SGEMP_

class cSalesPerson : public cEmployee
{
	int totalSales;
	int commission;

public:
	cSalesPerson();
	cSalesPerson(int, const char*, int, int, int, const char*, const char*, const char*, const char*, int, int, int);

	int Calculate_Sal();
};
#endif // !SGEMP_


