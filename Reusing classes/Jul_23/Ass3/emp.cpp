#include"emp.h"
int cEmployee::cnt;
cEmployee::cEmployee()
{
	cnt++;
	eid = cnt;
	salary = 0;
}
cEmployee::cEmployee(const char *nm, int d, int m, int y, float sal)
{
	cnt++;
	eid = cnt;
	name = cString(nm);
	doj = cDate(d, m, y);
	salary = sal;
}
void cEmployee::Accept()
{
	cout << "\n\n\t *********** Employee Id " << eid << " ***********";
	name.Accept();
	doj.Accept();
	cout << "\n\t Enter Salary ";
	cin >> salary;
}
void cEmployee::Display()
{
	cout << "\n\n\t *********** Employee Id " << eid << " ***********";
	name.Display();
	doj.Display();
	cout << "\n\t Salary  : " << salary;
}