#include"shape.h"

#ifndef _SQ_
#define _SQ_

class cSquare :public cShape
{
	int len;
public:
	cSquare();
	cSquare(int);
	void getlen();
	void display()const;
	void CalculateArea();
};
#endif // !_SQ_
