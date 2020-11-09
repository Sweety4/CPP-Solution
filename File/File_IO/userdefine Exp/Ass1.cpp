
#include<iostream>
using namespace std;

class MyException :public exception
{
public:
	const char *what()
	{
		return "Divide By ZERO ";
	}
};

#include"Header.h"

void main()
{
	try {
		int no1, no2;
		cout << "\n\n\t Enter Two No ";
		cin >> no1 >> no2;
		if (no2 == 0)
		{
			MyException obj;
			throw obj;
		}
		float res;
		res = no1 / no2;
		cout << "\n\n\t Result : " << res;
	}
	catch (MyException &obj)
	{
		cout << "\n\t" << obj.what();
	}
}


