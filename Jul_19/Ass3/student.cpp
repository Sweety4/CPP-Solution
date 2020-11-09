#include"student.h"

cStudent::cStudent()
{
	nosubject = 0;
	mark = new int;
}
cStudent::cStudent(int no)
{
	nosubject = no;
	mark = new int[no];
}
void cStudent::Accept()
{
	cout << "\n\n\t Enter mark for "<<nosubject<<" Subject ";
	for (int i = 0; i < nosubject; i++)
		cin >> mark[i];
}
void cStudent::Display()
{
	cout << "\n\n\t Number Of Subject : " << nosubject;
	for (int i = 0; i < nosubject; i++)
		cout<<"\n\n\t"<< mark[i];
}



