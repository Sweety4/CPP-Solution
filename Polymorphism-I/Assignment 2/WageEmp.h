#pragma once
#include"Employee.h"
#ifndef WGEMP_
#define WGEMP_

class cWageEmployee : public cEmployee
{
	int NoOfHrs;
	int RatePerHr;
public:
	cWageEmployee(); 
	cWageEmployee(int,const char*, int,int,int, const char*,const char*, const char*, const char*,int, int,int);
	int Calculate_Sal();
};
#endif // !WGEMP_

