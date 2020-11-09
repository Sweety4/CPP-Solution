#pragma once
#include "Shape.h"
#ifndef TRI_
#define TRI_
class cTriangle : public cShape
{

public:
	cTriangle();
	cTriangle(int, int,int);

	void Calculate_Area();
	void Calculate_Perimeter();

	void Display();
};
#endif // !REC_



