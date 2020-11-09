#define _CRT_SECURE_NO_WARNINGS
#include"date.h"
#include"str.h"

#ifndef EMP
#define EMP
class cEmployee
{
	int eid;
	cString name;
	cDate doj;
protected:
	float salary;
public:
	cEmployee();
	cEmployee(int, const char*, int, int, int, float);
	void Accept();
	void Display();
};
#endif
