

#include<iostream>
using namespace std;
#include"stackoverflow.h"
#include"stackunderflow.h"

class Stack
{
	int *arr;
	int top, size;
public:
	Stack();
	Stack(int);
	void Push();
	void Pop();
	void Display();
};

