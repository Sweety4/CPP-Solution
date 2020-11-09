#include"person.h"

Person::Person()
{

}
Person::Person(const char *n, const char *a, const char *c, int p) :name(n), add(a, c, p)
{

}
Person::Person(Person &obj)
{
	this->name = obj.name;
	this->add = obj.add;
}
void Person::accept()
{
	name.accept();
	cout << "\n\n\tEnter permenent address:" << "\n";
	add.accept();
}
void Person::display()const
{
	name.display();
	add.display();
}