#include"complex.h"
void main()
{
	{
		cout << "\n\t ******* Operator + ******* ";
		cComplex c1(10, 20);
		cComplex c2(2, 4);
		cComplex temp;
		temp = c1 + c2;
		c1.Display();
		c2.Display();
		temp.Display();
		cout << "\n\n\t ****************************";
	}
	{
		cout << "\n\t ******* Operator - ******* ";
		cComplex c1(10, 20);
		cComplex c2(2, 4);
		cComplex temp;
		temp = c1 - c2;
		c1.Display();
		c2.Display();
		temp.Display();
		cout << "\n\n\t ***************************";
	}
	{
		cout << "\n\t ******* Operator ++(post) ******* ";
		cComplex c1(2, 3);
		cComplex temp;
		temp = c1++;
		c1.Display();
		temp.Display();
		cout << "\n\n\t ****************************";
	}
	/*{
		cout << "\n\t ******* Operator ++(pre) ******* ";
		cComplex c1(2, 3);
		cComplex temp;
		temp = ++c1;
		c1.Display();
		temp.Display();
		cout << "\n\n\t ****************************";
	}
	*/

	

	

}