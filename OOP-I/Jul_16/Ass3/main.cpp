#include"date.h"

int main()
{
	cDate obj;
	obj.setData();
	obj.Display();

	cDate d1;
	d1.setData();
	d1.Display('-');

	cout << "\n\n";
	return 0;
}