
#include"sales.h"
#include"manager.h"

class cSalesManager :public cSalesPerson, public cManager
{
public:
	cSalesManager();
	cSalesManager(int, const char*, float, float, float, float, float);
	void Accept();
	void Display();
};
