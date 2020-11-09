#include"date.h"


class cStudent
{
	static int cnt;
	int rno;
	char name[20];
	cDate dateOfAdmission;
public:
	cStudent();
	cStudent(const char*, int, int, int);
	void Display();
	void Accept();
};
