#include"emp.h"

#ifndef MANAGER
#define MANAGER
class cManager :virtual public cEmployee
{
	float da, ta;
public:
	cManager();
	cManager(int, const char*, float, float, float);
	void Display();
	void Accept();
	void Display1();
	void Accept1();

};
#endif

