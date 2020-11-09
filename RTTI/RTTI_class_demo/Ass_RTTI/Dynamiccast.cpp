
#include<iostream>
using namespace std;
class ABC
{
public:
	virtual void Fun()
	{
		cout << "\n\n\t Fun In ABC Class ";
	}
};
class A :public ABC
{
public:
	void Fun()
	{
		cout << "\n\n\t Fun In A";
	}
};
class B :public ABC
{
public:
	void Fun()
	{
		cout << "\n\n\t Fun In B";
	}
	void Check()
	{
		cout << "\n\n\t Check In B";
	}
};
class C :public ABC
{
public:
	void Fun()
	{
		cout << "\n\n\t Fun In c";
	}
};
void Fun(ABC *a[], int size)
{
	for (int i = 0; i < size; i++)
	{
		a[i]->Fun();
		if (typeid(*a[i]) == typeid(B))
			dynamic_cast<B*>(a[i])->Check();
	}
}
void main()
{



	ABC  *p[5];
	p[0] = new ABC();
	p[1] = new A();
	p[2] = new C();
	p[3] = new ABC();
	p[4] = new B();
	Fun(p, 5);


	cout << "\n\n\n";








}


