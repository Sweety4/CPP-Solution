#include"Area.h"
int main()
{
	cArea A1, A2(2, 1);
	int temp;

	cout << "Default Area when no argument is passed." << endl;
	temp = A1.AreaCalculation();
	A1.DisplayArea(temp);

	cout << "Area when (2,1) is passed as argument." << endl;
	temp = A2.AreaCalculation();
	A2.DisplayArea(temp);

	return 0;
}
