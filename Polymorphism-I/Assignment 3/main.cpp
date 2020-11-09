#define _CRT_SECURE_NO_WARNINGS

#include "Shape.h"
#include"MyRectangle.h"
#include"MyTriangle.h"
int main()
{
	cShape *S;
	S = new cRectangle(10,5);
	S->Display();
	S->Calculate_Area();
	S->Calculate_Perimeter();
	delete S;

	S = new cTriangle(20, 4,2);
	S->Display();
	S->Calculate_Area();
	S->Calculate_Perimeter();
	delete S;


}