#include"Employee.h"

#ifndef PROGRAM
#define PROGRAM

class Programmer :public Employee
{
public:
	Programmer();
	Programmer(const char*);
	void Display();
	void Codding();
};
#endif
