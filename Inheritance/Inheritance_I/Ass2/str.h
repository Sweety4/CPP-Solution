#define _CRT_SECURE_NO_WARNINGS_
#include<iostream>
#include<string>
#pragma warning(disable:4996)
using namespace std;
#ifndef _STR_
#define _STR_
class Cstring
{
	char *str;
public:
	Cstring();
	Cstring(const char*);
	Cstring(const Cstring&);
	Cstring operator =(const Cstring&);
	void setname(const char*);
	void accept();
	void display()const;
	~Cstring();
};

#endif // !_STR_


