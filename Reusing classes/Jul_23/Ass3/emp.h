#include"str.h"
#include"date.h"

class cEmployee
{
	static int cnt;
	int eid;
	cString name;
	cDate doj;
	float salary;
public:
	cEmployee();
	cEmployee(const char*, int, int, int, float);
	void Accept();
	void Display();
};
