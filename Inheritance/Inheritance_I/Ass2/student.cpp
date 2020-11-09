#include"student.h"
int Student::cnt;
Student::Student()
{
	cnt++;
	rno = cnt;
	per = 0;
}
Student::Student(const char *n, const char *a, const char *c, int p, int s) :Person(n, a, c, p)
{
	cnt++;
	rno = cnt;
	per = s;
}
int Student::getPer()const
{
	return per;
}
void Student::accept()
{
	Person::accept();
	cout << "\n\t Enter Percentages :";
	cin >> per;
}
void Student::display()const
{
	cout << "\n\n\t Student Roll No    :" << rno << "\n";
	Person::display();
	cout << "\n\n\tPercentage          :" << per << "\n";
}
