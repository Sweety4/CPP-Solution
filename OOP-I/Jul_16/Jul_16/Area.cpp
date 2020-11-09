#include"Area.h"
// Constructor with no arguments
cArea::cArea()
{
	length = 5;
	breadth = 2;
}

// Constructor with two arguments
cArea::cArea(int l, int b)
{
	length = l;
	breadth = b;
}

int cArea::AreaCalculation()
{
	return length * breadth;
}

void cArea::DisplayArea(int temp)
{
	cout << "Area: " << temp << endl;
}
