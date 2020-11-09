#include"Person.h"

Person::Person()
{
	strcpy(this->m_name, "");
	strcpy(this->city, "");
	m_age = 20;
}
Person::Person(const char* p, const char *c,int a)
{
	strcpy(this->m_name, p);
	strcpy(this->city, c);
	m_age = a;
}
Person::Person(const char* p,const char *c)
{
	strcpy(this->m_name, p);
	strcpy(this->city, c);

	m_age = 20;
}
char* Person::GetName()
{
	return m_name;
}
int Person::GetAge()
{
	return m_age;
}
void Person::SetName(const char* p)
{
	strcpy(m_name, p);
}
void Person::SetAge(int a)
{
	m_age = a;
}
void Person::Display()
{
	cout << "\n\t"<<m_name << "\t " << m_age <<"\t"<<city;
}