#include"emp.h"
int Employee::cnt;
Employee::Employee()
{
	cnt++;
	id = cnt;
	salary = 0;
}
Employee::Employee(const char *n, const char *a, const char *c, int p, int s) :Person(n, a, c, p)
{
	cnt++;
	id = cnt;
	salary = s;
}
int Employee::getsal()const
{
	return salary;
}
void Employee::accept()
{
	Person::accept();
	cout << "enter salary:";
	cin >> salary;
}
void Employee::display()const
{
	cout << "\n\n\tEmployee Id    :" << id << "\n";
	Person::display();
	cout << "\n\n\tSalary         :" << salary << "\n";
}
