#include"student2.h"
space2::Student::Student()
{
	rollNo = 1;
	height = weight = 1;
}
space2::Student::Student(int rno, int hg, int wg)
{
	rollNo = rno;
	height = hg;
	weight = wg;
}
void space2::Student::Accept()
{
	cout << "\n\t Enter Roll Number Height and Weight ";
	cin >> rollNo >> height >> weight;
}
void space2::Student::Display()
{
	cout << "\n\n   ***********  Student Data ***********";
	cout << "\n\n\t Roll No : " << rollNo;
	cout << "\n\t Height : " << height;
	cout << "\n\t Weight : " << weight;
}