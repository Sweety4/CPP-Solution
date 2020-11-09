#include"Header.h"
#include<typeinfo.h>

template<class T>
void Accept<T>(T a[], int size)
{
	cout << "\n\n\t Enter " << size << "  " << typeid(a[0]).name() << " Element ";
	for (int i = 0; i < size; i++)
		cin >> a[i];
}
template<class T>
void Display<T>(T a[], int size)
{
	cout << "\n\n\t ****** Array is ******\n\n ";
	for (int i = 0; i < size; i++)
		cout << "   " << a[i];
}
template<class T>
void Sort<T>(T a[], int size)
{
	T temp;
	int i, j;
	for (i = 0; i < size-1; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}