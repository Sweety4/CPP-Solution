#include "Person.h"

int main()
{
	// Default constructor will be called here
	Person p1;
	p1.SetName("Anil");
	p1.SetAge(28);

	Person p2;

	char name[] = "Seeta";
	// Parameterized constructor with signature (const char*) will be called here
	Person p3("seeta","Nasik");
	
	// Parameterized constructor with signature (const char*,int) will be called here
	Person p4("Sunil",",Pune", 25);
	
	p1.Display();
	p2.Display();
	p3.Display();
	p4.Display();




}

