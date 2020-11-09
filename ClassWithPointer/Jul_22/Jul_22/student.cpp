#include"student.h"
int cStudent::cnt = 0;
cStudent::cStudent()
{
	cnt++;
	rno = cnt;
	strcpy(name, "NA");
}
cStudent::cStudent(const char *nm)
{
	cnt++;
	rno = cnt;
	strcpy(name, nm);
}
void cStudent::Display()const
{
	cout << "\n\n\t" << rno << "\t" << name;
}
void cStudent::setName(const char *nm)
{
	strcpy(name, nm);
}
cStudent::cStudent(cStudent &obj)
{
	cnt++;
	rno = cnt;
	strcpy(this->name, obj.name);

}
int cStudent::getRno()const
{
	return rno;
}
const char * cStudent::getName()const
{
	return name;
}