#include"person.h"

cPerson::cPerson()
{

}
cPerson::cPerson(const char *nm, const char *ar, const char *cty, int pin)
{
	name=cString(nm);
	add = cAddress(ar, cty, pin);
}
void cPerson::Accept()
{
	name.Accept();
	add.Accept();
}
void cPerson::Display()
{
	name.Display();
	add.Display();
}