#include"squ.h"

cSquare::cSquare()
{
	len = 0;
}
cSquare::cSquare(int l)
{
	len = l;
}
void cSquare::getlen()
{
	cout << "\n\n\tEnter length:";
	cin >> len;
}
void cSquare::display()const
{
	cout << "\n\n\tlength of rectangle:" << len << "\n";
}
void cSquare::CalculateArea()
{
	int area;
	area = len * len;
	cout << "\n\n\tarea of square:" << area << "\n";
}