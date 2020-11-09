#include"Employee.h"
#include"WageEmp.h"
#include "SalesPerson.h"

int main()
{

	cEmployee *e;
	
	e=new cWageEmployee(11,"Seeta",12,10,88,"Pune","Lohgaon","Mumbai","Dadar",10,200,20000);
	e->Display();
	e->Calculate_Sal();
	delete e;
	e = new cSalesPerson(22,"Sameer",02,11,90,"Pune","Karve Nagar","Mumbai","VT",1000,300,50000);
	e->Display();
	e->Calculate_Sal();
	return 0;
}