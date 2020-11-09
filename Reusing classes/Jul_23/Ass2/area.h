
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cAddress
{
	char area[20], city[20];
	int pin;
public:
	cAddress();
	cAddress(const char*, const char*, int);
	void Accept();
	void Display();
};
