#include"Rectangle.h"
#include"Square.h"

int main()
{
	cShape *S;
	S = new cRectangle(5,7);
	S->Display();
	cout << " Area :: " << S->Calculate_Area() << endl;
	delete S;
	S = new cSquare(6);
	S->Display();
	cout << " Area :: " << S->Calculate_Area() << endl;
	delete S;

	return 0;
}
