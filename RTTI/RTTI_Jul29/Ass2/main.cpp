#include"programmer.h"
#include"system.h"
#include"data.h"

void Check(Employee *e[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		e[i]->Display();

		if (typeid(*e[i]) == typeid(Programmer))
		{
		   dynamic_cast<Programmer*>(e[i])->Codding();
		}
		else if(typeid(*e[i]) == typeid(SystemAdministrator))
			dynamic_cast<SystemAdministrator*>(e[i])->UpdateSystem();
		else if (typeid(*e[i]) == typeid(DataBaseAdministrator))
			dynamic_cast<DataBaseAdministrator*>(e[i])->CreatingDataBase();
	} 
}
void main()
{
	Employee *e[5];
	e[0] = new SystemAdministrator("Amol");
	e[1] = new Employee("Seeta");
	e[2] = new DataBaseAdministrator("Nitin");
	e[3] = new Programmer("Trupti");
	e[4] = new SystemAdministrator("Amit");

	Check(e, 5);
	
	cout << "\n\n\n";
}
