#include"rect.h"

cRect::cRect()
{
	length = breadth = 0;
}
cRect::cRect(int l, int b)
{
	length = l;
	breadth = b;
}
void cRect::accept()
{
	cout << "\n\n\tEnter length and breadth:";
	cin >> length >> breadth;
}
void cRect::display()const
{
	cout << "\n\n\tlength of rectangle:" << length << "\n";
	cout << "\n\n\tBreadth of rectangle:" << breadth << "\n";
}
void cRect::CalculateArea()
{
	int area;
	area = length * breadth;
	cout << "\n\n\tarea of rectangle:" << area << "\n";
}