#include"str.h"

Cstring::Cstring()
{
	str = new char[1];
	str[0] = '\0';
}
Cstring::Cstring(const char *str)
{
	this->str = new char[strlen(str) + 1];
	strcpy(this->str, str);
}
Cstring::Cstring(const Cstring &obj)
{
	this->str = new char[strlen(obj.str) + 1];
	strcpy(this->str, obj.str);
}
Cstring Cstring::operator =(const Cstring &obj)
{
	this->str = new char[strlen(obj.str) + 1];
	strcpy(this->str, obj.str);
	return *this;
}
void Cstring::setname(const char *s)
{
	this->str = new char[strlen(s) + 1];
	strcpy(str, s);
}
void Cstring::accept()
{
	char nm[10];
	cout << "Enter name:";
	cin >> nm;
	str = new char[strlen(nm) + 1];
	strcpy(str, nm);
}
void Cstring::display()const
{
	cout << "Name of Person :" << str << "\n";
}
Cstring::~Cstring()
{
	delete[] str;
}