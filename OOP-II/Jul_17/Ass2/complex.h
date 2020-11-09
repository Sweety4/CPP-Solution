#pragma once
#include<iostream>
using namespace std;

class cComplex
{
	int real, img;
	static int cnt;
public:
	cComplex();
	cComplex(int, int);
	void Display();
	 void showCount();
};