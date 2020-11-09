#include"student.h"
int cStudent::cnt;
cStudent::cStudent()
{
	cnt++;
	rno = cnt;
	strcpy(name, " ");
}
void cStudent::Accept()
{
	cout << "\n\n\t Roll No " << rno;
	cout << "\n\n\t Enter Name ";
	cin >> name;
	dateOfAdmission.Accept();

}
cStudent::cStudent(const char *nm, int day, int month, int year)
{
	cnt++;
	rno = cnt;
	strcpy(name, nm);
	dateOfAdmission = cDate(day, month, year);
}
void cStudent::Display()
{
	cout << "\n\n\t Roll No : " << rno;
	cout << "\n\t Name    : " << name;
	dateOfAdmission.Display();
}