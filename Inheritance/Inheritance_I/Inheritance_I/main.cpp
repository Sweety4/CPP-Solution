#include"rect.h"
#include"squ.h"

int main()
{
	cRect r;
	r.accept();
	r.CalculateArea();

	cSquare s(10);
	s.CalculateArea();
	
	return 0;
}