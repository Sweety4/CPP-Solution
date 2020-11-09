#include"complex.h"
cComplex::cComplex(int real, int img)
{
	this->real = real;
	this->img = img;
}
void cComplex::Display() const
{
	if (img > 0)
		cout << "\n\n\t Complex : " << real << "+" << img << "i";
	else
		cout << "\n\n\t Complex : " << real  << img << "i";

}
void cComplex::setImg(int img)
{
	this->img = img;
}
void cComplex::setReal(int real)
{
	this->real = real;
}
int cComplex::getImg()const
{
	return img;
}
int cComplex::getReal()const
{
	return real;
}
cComplex cComplex::operator+(cComplex obj)
{
	cComplex temp;
	temp.real = this->real + obj.real;
	temp.img = this->img + obj.img;
	return temp;
}
cComplex cComplex::operator++(int no)
{
	cComplex temp;
	temp.real = ++this->real;
	temp.img = ++this->img;
	return temp;
}

cComplex cComplex::operator++()
{
	cComplex temp;
	temp.real = this->real++;
	temp.img = this->img++;
	return temp;
}

cComplex cComplex::operator-(const cComplex &obj)
{
	cComplex temp;
	temp.real = this->real - obj.real;
	temp.img = this->img - obj.img;
	return temp;
}

