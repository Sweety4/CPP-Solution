#include"area.h"
#include"str.h"

class cPerson
{
	cString name;
	cAddress add;
public:
	cPerson();
	cPerson(const char*, const char*,const char*,int);
	void Accept();
	void Display();

};
