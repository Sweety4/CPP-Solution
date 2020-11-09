#pragma once
#include "Shape.h"
#ifndef REC_
#define REC_

class cRectangle : public cShape
{

public:
	cRectangle();
	cRectangle(int, int);

	void Calculate_Area();
	void Calculate_Perimeter();

	void Display();
};
#endif // !REC_


