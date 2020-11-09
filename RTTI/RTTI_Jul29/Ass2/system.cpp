#include"system.h"
SystemAdministrator::SystemAdministrator()
{

}
SystemAdministrator::SystemAdministrator(const char *nm):Employee(nm)
{
	
}
void SystemAdministrator::Display()
{
	Employee::Display();
	cout << "    System Administrator";
}
void SystemAdministrator::UpdateSystem()
{
	cout << "\n\n\t System Updating.....";
}