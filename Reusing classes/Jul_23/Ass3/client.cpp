#include"emp.h"

void main()
{
	cEmployee *e;
	int no, i;
	cout << "\n\n\t Enter No Employees ";
	cin >> no;
	e = new cEmployee[no];
	for (i = 0; i < no; i++)
		e[i].Accept();
	for (i = 0; i < no; i++)
		e[i].Display();

	delete[] e;
	cout << "\n\n\n";
}
