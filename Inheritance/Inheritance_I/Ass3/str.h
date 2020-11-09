
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;

#ifndef _STR_
#define _STR_
class cString
{
	char *str;
public:
	cString();
	cString(const char*);
	cString(const cString&);
	cString operator =(const cString&);
	void setname(const char*);
	void Accept();
	void Display()const;
	~cString();
};

#endif // !_STR_


