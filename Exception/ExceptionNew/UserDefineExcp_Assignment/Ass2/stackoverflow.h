#include<iostream>
using namespace std;
class StackOverFlowException:public exception
{
public:
	const char* what()
	{
		return "Stack Is Overflow !!! ";
	}

};


