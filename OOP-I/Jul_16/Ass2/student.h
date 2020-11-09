#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
class cStudent
{
	int rno;
	char name[20];
	float per;
public:
	cStudent();
	cStudent(int,char*,float);
	void Accept();
	void Display();
	void displayResult();
};
