#include"emp.h"

cEmployee::cEmployee()
{
	eid = salary = 0;
}
cEmployee::cEmployee(int id, const char *nm, int d, int m, int y,float sal):name(nm),doj(d,m,y)
{
	eid = id;
	salary = sal;
}
void cEmployee::Accept()
{
	cout << "\n\n\t Enter Id ";
	cin >> eid;
	name.Accept();
	doj.Accept();
	cout << "\n\t Enter Salary ";
	cin >> salary;
}
void cEmployee::Display()
{
	cout << "\n\n\t ******* Emp Id " << eid << " *******";
	name.Display();
	doj.Display();
	cout << "\n\t Salary  : " << salary;
}


