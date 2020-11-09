#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
namespace space1
{
	class Student
	{
		int rollNo;
		char name[20];
		float per;
	public:
		Student();
		Student(int, const char*, float);
		void Accept();
		void Display();
	};

}