#include"MyTriangle.h"
cTriangle::cTriangle()
{
	length = 0;
	breadth = 0;
	height = 0;
}
cTriangle::cTriangle(int l, int b, int h)
{
	length = l;
	breadth = b;
	height = h;
}
void cTriangle::Calculate_Area()
{
	int A = length * breadth*height;
	cout << "Area of Triangle :: " << A;
}
void cTriangle::Calculate_Perimeter()
{
	int A = length + breadth+height;
	cout << "Perimeter of Triangle :: " << A;
}
void cTriangle::Display()
{
	cout << "Length  :: " << length<<endl;
	cout << "Breadth :: " << breadth<<endl;
	cout << "Height  :: " << height<<endl;

}