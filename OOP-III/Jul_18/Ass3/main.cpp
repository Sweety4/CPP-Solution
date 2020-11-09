#include"complx.h"
void main()
{
	cComplex::showCount();
	
	cComplex c[3];
	for (int i = 0; i < 3; i++)
		c[i].Display();

	cComplex obj(10,20);
	obj.Display();

	obj.showCount();

	const cComplex obj2(20, 30);
	obj2.Display();

	cout << "\n\n\n";
}