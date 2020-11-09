#include"emp.h"

cEmployee::cEmployee()
{
	id = 0;
	name = new char [1];
	name[0] = '\0';
}
cEmployee::cEmployee(int i, const char *nm, float sal)
{
	id = i;
	name = new char[strlen(nm) + 1];
	strcpy(name, nm);
	salary = sal;
}
void cEmployee::Accept()
{
	char temp[20];
	cout << "\n\n\t Enter Employee id ,name and salary ";
	cin >> id >> temp >> salary;
	name = new char[strlen(temp) + 1];
	strcpy(name, temp);
}
void cEmployee::Display()
{
	cout << "\n\n\t Employee Id  " << id;
	cout << "\n\t Name   : " << name;
	cout << "\n\t Salary :"<< salary;

}