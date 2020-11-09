#include"calculator.h"


void main()
{
	cCalculator obj;
	obj.Addition(10, 2);
	obj.Subtraction(10, 2);
	obj.Multiplication(10, 2);
	obj.Division(10, 2);

	obj.Math1::CalArea();
	//  CalArea function is available in both parent classes
	// so call this function with object.class_name::fucntion_name()
	         

	cout << "\n\n\n";

}