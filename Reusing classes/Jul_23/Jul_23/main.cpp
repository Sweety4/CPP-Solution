#include "student.h"
void main()
{
	cStudent s[5];
	int i;
	for (i = 0; i < 5; i++)
		s[i].Accept();

	for (i = 0; i < 5; i++)
		s[i].Display();

	cout << "\n\n\n";
}