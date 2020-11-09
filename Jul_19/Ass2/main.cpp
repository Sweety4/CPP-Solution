#include"Box.h"
int main()
{
	Box b1(30);
	Box b2(40);
	b1.Display();
	b2.Display();
	if (b1 > b2)
	{
		cout << "\n\n\t Capacity Of First Box is Greater";
	}
	else
	{
		cout << "\n\t Capacity Of Second Box is Greater ";
	}
	return 0;
}