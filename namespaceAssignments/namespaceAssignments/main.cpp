#include"student1.h"
#include"student2.h"

void main()
{
	space1::Student obj1(101,"Seeta",67);
	//obj1.Accept();
	obj1.Display();

	space2::Student obj2;
	obj2.Display();

	cout << "\n\n\n";
}