#include"Array.h"
template<class T>
cArray<T>::cArray()
{
	size = 5;
	arr = new T[size];
}
template<class T>
cArray<T>::cArray(int sz)
{
	size = sz;
	arr = new T[size];
}
template<class T>
void cArray<T>::Display()
{
	cout << "\n\n";
	for (int i = 0; i <size; i++)
		cout << "   " << arr[i];
}
template<class T>
void cArray<T>::Accept()
{
	cout << "\n\n\t Enter " << size << " " << typeid(arr[0]).name() << " Elements ";
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}
template<class T>
void cArray<T>::Copy(cArray &obj)
{
	this->size = obj.size;
	this->arr = new T[this->size];
	for (int i = 0; i < size; i++)
		this->arr[i] = obj.arr[i];
}
template<class T>
void cArray<T>::Reverse()
{
	int i, j, temp;
	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	}
}
template<class T>
void cArray<T>::Sort()
{
	int i,j,temp;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j > 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
