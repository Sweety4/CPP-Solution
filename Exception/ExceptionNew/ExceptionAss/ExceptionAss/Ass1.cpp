#include<iostream>
using namespace std;
void Divide(int a, int b)
{
	if (b == 0)
		throw 100;
	cout << "\n\n\t Result : " << a / b;
}
void main()
{
	int no1, no2;
	try
	{
		cout << "\n\n\t Enter Two Nos ";
		cin >> no1 >> no2;
		Divide(no1, no2);
	}
	catch (int no)
	{
		cout << "\n\n\t ERROR !!!!";
	}
	cout << "\n\n\n";
}