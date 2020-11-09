#include "SalesPerson.h"
#include "Employee.h"

cSalesPerson::cSalesPerson()
{
	totalSales = 0;
	commission = 0;


}
cSalesPerson::cSalesPerson(int id, const char *n, int dd, int mm, int yy, const char *pcc, const char *pll, const char *ccc, const char *cll, int h, int r, int sall)
	:cEmployee(id, n, dd, dd, yy, pcc, pll, ccc, cll, sall)

{
	totalSales= h;
	commission = r;
}

int cSalesPerson::Calculate_Sal()
{
	int x = getsalary();
	int y = x + (totalSales *commission);
	return x;
}