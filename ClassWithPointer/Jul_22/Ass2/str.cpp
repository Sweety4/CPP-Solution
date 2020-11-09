#include"str.h"
cString::cString()
{
	len = 0;
	str = new char[len + 1];
	str[0] = '\0';
}
cString::cString(const cString &obj)
{
	len = obj.len;
	str = new char[len + 1];
	strcpy(str, obj.str);
}
cString cString::operator=(const cString &obj)
{
	len = obj.len;
	str = new char[len + 1];
	strcpy(str, obj.str);
	return *this;


}
cString::cString(const char *nm)
{
	len = strlen(nm);
	str = new char[len + 1];
	strcpy(str, nm);
}
cString::cString(char ch, int ln)
{
	len = ln;
	str = new char[len + 1];
	for (int i = 0; i < ln; i++)
		str[i] = ch;
	str[ln] = '\0';
}
void cString::Display()
{
	cout << "\n\n\t String " << str;
}
cString::~cString()
{
	delete[]str;
}

