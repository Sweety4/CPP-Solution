
#include<iostream>
using namespace std;

template <class T>
class Stack
{
	T *arr;
	int top, size;
public:
	Stack();
	Stack(int);
	void Push();
	void Pop();
	void Display();
};

