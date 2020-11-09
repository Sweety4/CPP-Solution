#include<iostream>
using namespace std;

class Box
{
	int capacity;
public:
	Box();
	Box(int);
	void Display();
	int operator> (Box&);
};
//if(b1>b2)