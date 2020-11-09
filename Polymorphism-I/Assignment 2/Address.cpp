#define _CRT_SECURE_NO_WARNINGS

#include"MyAddress.h"
#include<string.h>

cAddress::cAddress()
{
	city = new char;
	city[0] = '\0';
	area = new char;
	area[0] = '\0';
}
cAddress::cAddress(const char *mcity, const char *marea)
{
	int l;
	l = strlen(mcity);
	city = new char[l + 1];
	strcpy(city, mcity);
	l = strlen(marea);
	area = new char[l + 1];
	strcpy(area, marea);

}