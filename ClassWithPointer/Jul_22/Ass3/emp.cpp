#include"emp.h"
int cEmployee::cnt;
cEmployee::cEmployee()
{
	cnt++;
	id = cnt;
	name = new char[1];
	name[0] = '\0';
	strcpy(city, "NA");
}
cEmployee::cEmployee(const char *nm,const char *cty)
{
	cnt++;
	id = cnt;
	name = new char[strlen(nm)+1];
	strcpy(name, nm);
	strcpy(city, cty);
}
void cEmployee::setName(const char *nm)
{
	name = new char[strlen(nm) + 1];
	strcpy(name, nm);

}
int cEmployee::getId()
{
	return id;
}
char* cEmployee::getName()const
{
	return name;
}

void cEmployee::Display()const 
{
	cout << "\n\n\t " << id << "\t" << name << "\t" << city;
}

