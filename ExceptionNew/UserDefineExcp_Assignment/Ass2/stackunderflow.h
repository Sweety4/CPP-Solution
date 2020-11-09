#include<iostream>
using namespace std;
class StackUnderFlowException :public exception
{
public:
	const char* what()
	{
		return "Stack Is Underflow !!! ";
	}

};


