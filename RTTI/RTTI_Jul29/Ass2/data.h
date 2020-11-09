#include"Employee.h"

#ifndef DATABASE
#define DATABASE

class DataBaseAdministrator :public Employee
{
public:
	DataBaseAdministrator();
	DataBaseAdministrator(const char*);
	void Display();
	void CreatingDataBase();
};
#endif
