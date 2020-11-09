#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cEmployee
{
	static int cnt;
	int id;
	char *name;
	char city[20];
public:
	cEmployee();
	cEmployee(const char*, const char*);
	void setName(const char*nm);
	int getId();
	char* getName()const;
	void Display()const;
};
