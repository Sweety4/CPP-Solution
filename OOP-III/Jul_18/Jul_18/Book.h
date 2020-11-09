#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Book
{
	static int cnt;
	int bno;
	char name[20];
	float price;
public:
	Book();
	Book(const char*, float);
	void Accept();
	void setName(const char *);
	void Display();
	void setPrice(float);
	float getPrice();
};
