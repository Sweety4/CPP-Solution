#include<iostream>
using namespace std;

class MinimumBalanceException :public exception
{
public:
	const char *what()
	{
		return "\n\t Minimun Balance Required !!!,So you can withdraw  ";
	}
};