#include"date.h"

void cDate::Display()
{
	cout << "\n\t Date : " << dd << "/" << mm << "/" << yy;
}

void cDate::setData()
{
	dd = 1;
	mm = 1;
	yy = 2010;
}
void cDate::Display(char ch)
{
	cout << "\n\t Date :" << dd << ch << mm << ch << yy;
}