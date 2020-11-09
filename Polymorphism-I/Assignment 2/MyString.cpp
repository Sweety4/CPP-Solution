#define _CRT_SECURE_NO_WARNINGS
#include"MyString.h"
#include<string.h>
cString::cString()
{
	Nm = new char;
	Nm[0] = '\0';
}
cString::cString(const char *name)
{
	int l = strlen(name);
	Nm = new char[l + 1];
	strcpy(Nm, name);
}


