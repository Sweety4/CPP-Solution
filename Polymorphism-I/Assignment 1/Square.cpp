#include "Square.h"
cSquare::cSquare()
{
	side = 0;
}

cSquare::cSquare(int s)
{
	side = s;
}

int cSquare::Calculate_Area()
{
	return side * side;
}

void cSquare::Display()
{
	cout << endl<<" Side  :: " << side<<endl;
}