#include"emp.h"

#define STUDENT

class Student:public Person
{
	static int cnt;
	int rno;
	float per;
public:
	Student();
	Student(const char*, const char*, const char*, int, int);
	int getPer()const;
	void accept();
	void display()const;
};
	
