#include "Employee.h"
#include<fstream>
int main()
{
	cEmployee E1, E2;
	char p;
	ofstream out("Data1.dat", ios::app | ios::binary);
	do
	{
		E1.accept();

		out.write((char*)&E1, sizeof(cEmployee));

		cout << "More Data (y/n) ?";
		cin >> p;
	} while (p == 'y' || p == 'Y');
	out.close();

	ifstream in("Data1.dat", ios::in | ios::binary);
	in.read((char*)&E2, sizeof(cEmployee));
	while (!in.eof())
	{
		E2.display();
		in.read((char*)&E2, sizeof(cEmployee));
	}
	in.close();
	return 0;
}