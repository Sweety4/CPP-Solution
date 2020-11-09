#include"MyRectangle.h"


cRectangle::cRectangle()
{
	length = 0;
	breadth = 0;
}
cRectangle::cRectangle(int l, int b)
{
	length = l;
	breadth = b;
}
void cRectangle::Calculate_Area()
{
	int A = length * breadth;
	cout << "Area of Rectangle :: " << A;
}
void cRectangle::Calculate_Perimeter()
{
	int A = 2 * (length + breadth);
	cout << "Perimeter of Rectangle :: " << A;
}
void cRectangle::Display()
{
	cout << "Length :: " << length<< endl;
	cout << "Breadth :: " << breadth<<endl;
}
