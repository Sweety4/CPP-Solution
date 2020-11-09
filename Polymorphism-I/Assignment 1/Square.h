#pragma once
#include "cShape.h"
#ifndef SQU_
#define SQU_

class cSquare : public cShape
{
	int side;
public:
	cSquare();
	cSquare(int);

	int Calculate_Area();
	void Display();
};
#endif 


