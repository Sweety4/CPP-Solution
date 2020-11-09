#include"person.h"

void main()
{
	cPerson p1;
	p1.Display();

	cPerson p2("Amol", "Kothrud", "Pune", 411002);
	p2.Display();

	p1.Accept();
	p1.Display();

	cout << "\n\n\n";
}