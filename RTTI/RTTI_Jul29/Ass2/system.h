#include"Employee.h"

#ifndef SYSTEM
#define SYSTEM

class SystemAdministrator :public Employee
{
public:
	SystemAdministrator();
	SystemAdministrator(const char*);
	void Display();
	void UpdateSystem();
};
#endif
