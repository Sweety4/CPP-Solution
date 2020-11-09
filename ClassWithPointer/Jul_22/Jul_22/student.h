#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class cStudent
{
	static int cnt;
	int rno;
	char name[20];
public:
	cStudent();
	cStudent(const char*);
	cStudent(cStudent&);
	void Display()const;
	void setName(const char*);
	int getRno()const;
	const char* getName()const;

};
