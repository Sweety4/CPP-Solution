#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

template<class T>
class cArray
{
	int *arr;
	int size;
public:
	cArray();
	cArray(int);
	void Display();
	void Accept();
	void Copy(cArray&);
	void Reverse();
	void Sort();
	friend ostream& operator<<(ostream &out, cArray &obj)
	{
		//out << "\n\n ********** Array Is **********\n\n";
		for (int i = 0; i < obj.size; i++)
			out << "   " << obj.arr[i];
		return out;
	}
	friend istream& operator>>(istream &in, cArray &obj)
	{
		cout << "\n\n\t Enter " << obj.size << " " << typeid(obj.arr[0]).name() << " Elements ";
		for (int i = 0; i < obj.size; i++)
			in >> obj.arr[i];
		return in;
	}
};
