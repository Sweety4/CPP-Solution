#include "Rectangle.h"

cRectangle:: cRectangle()
{
	length = 0;
    breadth = 0;
}

cRectangle::cRectangle(int l ,int b)
{
	length = l;
	breadth = b;
}

int cRectangle::Calculate_Area()
{
	return length * breadth;
}

void cRectangle::Display()
{
	cout << " Length  :: " << length << endl;
	cout << " Breadth :: " << breadth << endl;
}