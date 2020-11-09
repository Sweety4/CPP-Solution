#include"wage.h"

cWageEmployee::cWageEmployee()
{
	hrs = rate = 0;
}
cWageEmployee::cWageEmployee(int id, const char *nm, int d, int m, int y, float sal, float hr, float ra) :cEmployee(id, nm, d, m, y, sal)
{
	hrs = hr;
	rate = ra;
}
void cWageEmployee::Accept()
{
	cEmployee::Accept();
	cout << "\n\n\t Enter Number of hours  and rate pre hour ";
	cin >> hrs >> rate;
}
void cWageEmployee::Display()
{
	cEmployee::Display();
	cout << "\n\t Total Hrs :" << hrs;
	cout << "\n\t Rate      : " << rate;
}
void cWageEmployee::CalculateSalary()
{
	cout << "\n\n\t Net Salary :" << salary + (hrs*rate);
}