#include"data.h"

void DataBaseAdministrator::CreatingDataBase()
{
	cout << "\n\n\t Creating Data Base ";
}
DataBaseAdministrator::DataBaseAdministrator(const char *nm) :Employee(nm)
{

}
DataBaseAdministrator::DataBaseAdministrator()
{

}
void DataBaseAdministrator::Display()
{
	Employee::Display();
	cout << "  DataBase Administrator ";
}