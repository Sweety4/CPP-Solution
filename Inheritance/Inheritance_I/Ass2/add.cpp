#include"add.h"

Address::Address()
{
	area = new char[1];
	area[0] = '\0';
	city = new char[1];
	city[0] = '\0';
	pin = 0;
}
Address::Address(const char *a, const char *c, int p)
{
	area = new char[strlen(a) + 1];
	strcpy(area, a);
	city = new char[strlen(c) + 1];
	strcpy(city, c);
	pin = p;
}
Address::Address(Address &obj)
{
	area = new char[strlen(obj.area) + 1];
	strcpy(area, obj.area);
	city = new char[strlen(obj.city) + 1];
	strcpy(city, obj.city);
	pin = obj.pin;
}
Address Address::operator =(Address &obj)
{
	area = new char[strlen(obj.area) + 1];
	strcpy(area, obj.area);
	city = new char[strlen(obj.city) + 1];
	strcpy(city, obj.city);
	pin = obj.pin;
	return *this;
}
void Address::accept()
{
	char ar[10], ct[10];
	cout << "Enter area";
	cin >> ar;
	area = new char[strlen(ar) + 1];
	strcpy(area, ar);
	cout << "Enter city";
	cin >> ct;
	city = new char[strlen(ct) + 1];
	strcpy(city, ct);
	cout << "Enter pin";
	cin >> pin;
}
void Address::setarea(const char *a)
{
	area = new char[strlen(a) + 1];
	strcpy(area, a);
}
void Address::setcity(const char *c)
{
	city = new char[strlen(c) + 1];
	strcpy(city, c);
}
void Address::setpin(int p)
{
	pin = p;
}
const char* Address::getarea()const
{
	return area;
}
const char* Address::getcity()const
{
	return city;
}
int Address::getpin()const
{
	return pin;
}
void Address::display()const
{
	cout << "Area           :" << area << "\n";
	cout << "City           :" << city << "\n";
	cout << "Pin            :" << pin << "\n";
}
Address::~Address()
{
	delete[] area;
	delete[] city;
}