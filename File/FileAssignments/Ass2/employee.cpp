#include "Employee.h"
#include <string.h>
void cEmployee::accept()
{
	cout << "Employee No  ::  ";
	cin >> empno ;
	cout << endl<<"Name         ::  ";
	cin >> empname;
	cout << endl<<"Salary  ::  " ;
	cin >> sal;
}
void cEmployee::display()
{
	cout << "Employee No :: " << empno << endl;
	cout << "Name        :: " << empname << endl;
	cout << "Salary      :: " << sal << endl;
}