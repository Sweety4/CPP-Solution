#include"complex.h"
void main()
{
	cComplex c[3];
	for (int i = 0; i < 3; i++)
		c[i].Display();

	cComplex obj(10, 20);
	obj.Display();

	obj.showCount();

	cout << "\n\n\n";
}