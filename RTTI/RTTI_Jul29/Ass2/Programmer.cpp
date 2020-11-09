#include"programmer.h"
Programmer::Programmer()
{

}
Programmer::Programmer(const char *nm) :Employee(nm)
{

}
void Programmer::Display()
{
	Employee::Display();
	cout << "   Programmer ";
}
void Programmer::Codding()
{
	cout << "\n\n\t Codding.....";
}