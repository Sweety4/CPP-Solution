#include"str.h"

void main()
{
	cString s1;
	s1.Display();

	cString s2('A', 10);
	s2.Display();

	cString s3("Know-IT");
	s3.Display();

	cString s4(s2);
	s4.Display();

	cString s5 = s3;
	s5.Display();

	cout << "\n\n\n";
}