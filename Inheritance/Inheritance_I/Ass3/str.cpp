#include"str.h"

cString::cString()
{
	str = new char[1];
	str[0] = '\0';
}
cString::cString(const char *str)
{
	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);
}
cString::cString(const cString &obj)
{
	this->str = new char[strlen(obj.str) + 1];
	strcpy(this->str, obj.str);
}
cString cString::operator =(const cString &obj)
{
	this->str = new char[strlen(obj.str) + 1];
	strcpy(this->str, obj.str);
	return *this;
}
void cString::setname(const char *s)
{
	this->str = new char[strlen(s) + 1];
	strcpy(str, s);
}
void cString::Accept()
{
	char nm[10];
	cout << "Enter name:";
	cin >> nm;
	str = new char[strlen(nm) + 1];
	strcpy(str, nm);
}
void cString::Display()const
{
	cout << "\n\t Name    : " << str;
}
cString::~cString()
{
	delete[] str;
}