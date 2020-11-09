#include"area.h"

cAddress::cAddress()
{
	strcpy(area, "NA");
	strcpy(city, "NA");
	pin = 0;
}
cAddress::cAddress(const char *ar, const char *cty, int pn)
{
	strcpy(area, ar);
	strcpy(city, cty);
	pin = pn;
}
void cAddress::Accept()
{
	cout << "\n\n\t Enter Area City and Pincode ";
	cin >> area >> city >> pin;
}
void cAddress::Display()
{
	cout << "\n\t Area    : " << area;
	cout << "\n\t City    : " << city;
	cout << "\n\t Pin     : " << pin;
}