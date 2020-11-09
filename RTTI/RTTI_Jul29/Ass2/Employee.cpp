#include"Employee.h"

Employee::Employee()
{
	strcpy(name, " ");

}
Employee::Employee(const char *nm)
{
	strcpy(name, nm);
}
void Employee::Display()
{
	cout << "\n\n\t Name  : " << name;
}