#include"MyDate.h"
cDate::cDate()
{
	day = month = year = 0;
}

cDate::cDate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}