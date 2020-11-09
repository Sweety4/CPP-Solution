#include"student.h"
int main()
{
	char name[20];

	cStudent obj1;
	
	cout << "\n\t Enter Name ";
	cin >> name;
	cStudent obj2(101,name,75);
	
	
	
	obj2.Display();
	obj1.Display();
	obj1.Accept();
	obj1.Display();

	obj1.displayResult();
	obj2.displayResult();
	cout << "\n\n\n";
	return 0;

};

