#include<iostream>
using namespace std;
namespace shape
{
	namespace circle
	{
		void CalculateAreaCircle(int r)
		{
			cout << "\n\n\t Area Of Circle : " << 3.14*r*r;
		}
		void CalculateCircum(int r)
		{
			cout << "\n\n\t Circumference Of Circle : " << 2 * 3.14*r;
		}

	}
	namespace Rectangle
	{
		void CalculateAreaRectangle(int l,int b)
		{
			cout << "\n\n\t Area Of Rectangle : " << l*b;
		}
		void CalculateRectangle(int l,int b)
		{
			cout << "\n\n\t Perimeter Of Rectangle : " << 2 * (l+b);
		}

	}
	namespace square
	{
		void CalculateAreaSquare(int side)
		{
			cout << "\n\n\t Area Of Square : " << side * side;
		}
		void CalculatePeri(int side)
		{
			cout << "\n\n\t Perimeter Of Squeare : " << 4*side;
		}

	}
}
