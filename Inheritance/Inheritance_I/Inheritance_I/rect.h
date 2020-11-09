#include"shape.h"

#ifndef _RE_
#define _RE_

class cRect :public cShape
{
	int length, breadth;
public:
	cRect();
	cRect(int, int);
	void accept();
	void display()const;
	void CalculateArea();
};
#endif // !_RE_
