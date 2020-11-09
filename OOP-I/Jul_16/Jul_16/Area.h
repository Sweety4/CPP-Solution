#include <iostream>
using namespace std;

class cArea
{
private:
	int length;
	int breadth;

public:
	// Constructor with no arguments
	cArea();
	// Constructor with two arguments
	cArea(int,int);
	int AreaCalculation();
	void DisplayArea(int);
};
