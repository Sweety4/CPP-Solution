#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
#ifndef _ADD_
#define _ADD_
class Address
{
	int pin;
	char *area, *city;
public:
	Address();
	Address(const char*, const char*, int);
	Address(Address&);
	Address operator =(Address&);
	void accept();
	void setarea(const char*);
	void setcity(const char*);
	void setpin(int);
	const char* getarea()const;
	const char* getcity()const;
	int getpin()const;
	void display()const;
	~Address();
};

#endif // !_ADD_


