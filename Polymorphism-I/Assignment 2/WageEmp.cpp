#include "WageEmp.h"
#include "Employee.h"

cWageEmployee::cWageEmployee()
{
	NoOfHrs=RatePerHr=0;
}
//int, const char*, int, int, int, const char*, const char*, const char*, const char*, int, int, int
cWageEmployee::cWageEmployee(int id, const char *n, int dd, int mm, int yy, const char *pcc, const char *pll, const char *ccc, const char *cll, int h, int r, int sall)
	:cEmployee(id,n,dd,dd,yy,pcc,pll,ccc,cll,sall)
{
	NoOfHrs = h;
	RatePerHr = r;
}

int cWageEmployee::Calculate_Sal()
{
	int y = getsalary();
	int x = y+(NoOfHrs *RatePerHr);
	return x;
}