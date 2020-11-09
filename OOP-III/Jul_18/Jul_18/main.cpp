#include"Book.h"

void main()
{
	Book b1("C Prog ", 345);
	Book b2("CPP ", 200);
	b1.Display();
	b2.Display();
	b2 = b1;
	b1.setName("JAVA ");
	b1.Display();
	b2.Display();



	/*Book b[5];
	int maxprice=0,i;

	for ( i = 0; i < 5; i++)
		b[i].Accept();
	
	for (i = 0; i < 5; i++)
	{
		b[i].Display();
		if (b[i].getPrice() > maxprice)
			maxprice = b[i].getPrice();
	}
	cout << "\n\n\t Max Price " << maxprice;
	*/

}