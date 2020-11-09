#include"Book.h"
int Book::cnt;
Book::Book()
{
	cnt++;
	bno=cnt;
	strcpy(name, " ");
	price = 0;
}
void Book::setName(const char  *name)
{
	strcpy(this->name, name);
}
Book::Book(const char *nm, float pr)
{
	cnt++;
	strcpy(name, nm);
	price = pr;
}
void Book::Display()
{
	cout << "\n\n\t Book No : " << bno;
	cout << "\n\t Name  : " << name;
	cout << "\n\t Price : " << price;
}
void Book::Accept()
{
	char name[20];
	cout << "\n\n\t\t Book No :" << bno;
	cout << "\n\t Enter Book Name ";
	cin >> name;
	strcpy(this->name, name);
	cout << "\n\t Enter Price ";
	cin >> price;
}
float Book::getPrice()
{
	return price;
}