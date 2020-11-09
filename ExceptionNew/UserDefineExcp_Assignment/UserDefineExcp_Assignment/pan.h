#include<iostream>
using namespace std;

class PANCardDetailsException :public exception
{
public:
	const char *what()
	{
		return "\n\t PAN Card Details Required , so you can not Deposit !!! ";
	}
};