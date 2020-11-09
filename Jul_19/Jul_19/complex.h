#include<iostream>
using namespace std;


// = s2
//strcpy(str1, str2);
class cComplex
{
	int real, img;
public:
	cComplex(int = 1, int = 1);
	void Display()const;
	void setReal(int);
	void setImg(int);
	int getReal()const;
	int getImg()const;
	cComplex operator + (cComplex);

	cComplex operator - (const cComplex&);
	cComplex operator ++ (int);
	cComplex operator ++ ();
};
