#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
namespace space2
{
	class Student
	{
		int rollNo;
		int height, weight;
	public:
		Student();
		Student(int, int, int);
		void Accept();
		void Display();
	};
}
