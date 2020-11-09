#include"student1.h"

space1::Student::Student()
{
	rollNo = 0;
	strcpy(name, " ");
	per = 0;
}

space1::Student::Student(int rno, const char *nm, float p)
{
	rollNo = rno;
	strcpy(name, nm);
	per = p;
}
void space1::Student::Accept()
{
	cout << "\n\n\t Enter Roll No Name And Per ";
	cin >> rollNo >> name >> per;
}
void space1::Student::Display()
{
	cout << "\n\n   ***********  Student Data ***********";
	cout << "\n\n\t Roll No : " << rollNo;
	cout << "\n\t Name  : " << name;
	cout << "\n\t Per   : " << per;
}
