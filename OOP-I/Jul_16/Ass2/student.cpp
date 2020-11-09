#include"student.h"

cStudent::cStudent()
{
	rno = 1;
	strcpy(name, " ");
	per = 0;
}
cStudent::cStudent(int r, char *nm, float p)
{
	rno = r;
	strcpy(name, nm);
	per = p;

}
void cStudent::Accept()
{
	cout << "\n\n\t Enter Rno Name and Percentage ";
	cin >> rno >> name >> per;
}
void cStudent::Display()
{
	cout << "\n\n\t " << rno << "\t" << name<<"\t"<<per;
}
void cStudent::displayResult()
{
	if (per >= 35 && per < 50)
		cout << "\n\t\t Pass ";
	else if (per >= 50 && per < 60)
		cout << "\n\t\t Pass With Second Division";
	else if (per >= 60 && per < 70)
		cout << "\n\t\t Pass With First Division ";
	else if (per >= 75)
		cout << "\n\t\t Pass With Distinction ";
}
