
#include<iostream>
#include<typeinfo.h>
using namespace std;
class Test
{

};
void main()
{
	int a;
	char b, str[20] = "Seeta";
	float var;
	Test obj;

	cout << "\n\n\t Type Of A : " << typeid(a).name();
	cout << "\n\n\t Type Of B : " << typeid(b).name();
	cout << "\n\n\t Type Of Var : " << typeid(var).name();
	cout << "\n\n\t Type Of str : " << typeid(str).name();
	cout << "\n\n\t Type Of str : " << typeid(str[0]).name();
	cout << "\n\n\t Type Of obj : " << typeid(obj).name();

	if (typeid(a) == typeid(b))
		cout << "\n\n\t Same ";
	else
		cout << "\n\n\t Not ";






	cout << "\n\n\n";
}