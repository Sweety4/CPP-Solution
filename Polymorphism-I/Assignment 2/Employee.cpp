#include"Employee.h"

cEmployee::cEmployee()
{
	empid = 0; 
	salary = 0;
}
cEmployee::cEmployee(int id, const char *nm, int d, int m, int y, const char *pcity,const char *parea, const char *ccity,const char *carea, int sal)
	     :name(nm),doj(d,m,y),p_add(pcity,parea),c_add(ccity,carea)
{
	empid = id;
	salary = sal;
}

void cEmployee::Display()
{

}
int cEmployee::getsalary()
{
	return salary;
}
/*int cEmployee::Calculate_Sal()
{

}*/