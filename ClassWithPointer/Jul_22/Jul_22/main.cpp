
#include"student.h"
void main()
{
	cStudent s1;
	cStudent s2("Seeta");
	cStudent s3("Suresh");
	s1.Display();
	s2.Display();
	cStudent s4 = s2;
	s3.Display();
	s4.Display();

	cout << "\n\n\n";

}