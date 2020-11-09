#include"Header.h"
template<class T>
void MySwap<T>(T a,T b)
{
	cout << "\n\n\t Before  \n\t\t" << a << "\t" << b;
	T temp;
	temp = a;
	a = b;
	b = temp;
	cout << "\n\t After  \n\t\t" << a << "\t" << b;
}