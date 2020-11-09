#include"smanager.h"

cSalesManager::cSalesManager()
{
	
}
cSalesManager::cSalesManager(int i, const char *nm, float sal, float sa, float com, float tta, float dda) \
	:cEmployee(i, nm, sal), cManager(i, nm, sal, dda, tta), cSalesPerson(i, nm, sal, sa, com)
{

}
void cSalesManager::Display()
{
	cSalesPerson::Display();
	cManager::Display1();
	
}
void cSalesManager::Accept()
{
	cSalesPerson::Accept();
	cManager::Accept1();

}