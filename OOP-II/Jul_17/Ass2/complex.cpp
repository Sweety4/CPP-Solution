#include"complex.h"

int cComplex::cnt;
cComplex::cComplex()
{
	real = img = 1;
	cnt++;
}
cComplex::cComplex(int r, int i)
{
	real = r;
	img = i;
	cnt++;
}
void cComplex::Display()
{
	if (img > 0)
		cout << "\n\n\t Complex : " << real << "+" << img << "i";
	else
		cout << "\n\n\t Complex : " << real << img << "i";
}
void cComplex::showCount()
{
	cout << "\n\n\t Count  : " << cnt;
}