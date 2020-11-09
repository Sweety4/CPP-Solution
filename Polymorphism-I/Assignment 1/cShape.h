#pragma once
#include<iostream>
using namespace std;

#ifndef SHP_
#define SHP_

class cShape
{
public:
	virtual int Calculate_Area()=0;
	virtual void Display()=0;
};
#endif // !SHP_


