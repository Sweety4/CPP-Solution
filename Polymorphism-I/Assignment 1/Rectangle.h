#pragma once
#include "cShape.h"
#ifndef REC_
#define REC_

class cRectangle : public cShape
{
	int length, breadth;
public:
	cRectangle();
	cRectangle(int, int);

	int Calculate_Area();
	void Display();
};
#endif // !REC_

