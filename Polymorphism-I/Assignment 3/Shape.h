#pragma once
#include<iostream>
using namespace std;

#ifndef SHP_
#define SHP_

class cShape
{
protected:
    int length, breadth, height;
public:
	cShape();
	virtual void Calculate_Area() = 0;
	virtual void Calculate_Perimeter() = 0;
	virtual void Display() = 0;
};
#endif // !SHP_


