
#include"manager.h"
cManager::cManager()
{
	ta = da = 0;
}
cManager::cManager(int id,const char *nm,float sal,float tta,float dda):cEmployee(id,nm,sal)
{
	ta = tta;
	da = dda;
}
void cManager::Accept()
{
	cEmployee::Accept();
	cout << "\n\t Enter Ta and Da ";
	cin >> ta >> da;
}
void cManager::Accept1()
{
	cout << "\n\t Enter Ta and Da ";
	cin >> ta >> da;
}
void cManager::Display()
{
	cEmployee::Display();
	cout << "\n\t Ta    : " << ta;
	cout << "\n\t Da    : " << da;
}
void cManager::Display1()
{
	//cEmployee::Display();
	cout << "\n\t Ta    : " << ta;
	cout << "\n\t Da    : " << da;
}


