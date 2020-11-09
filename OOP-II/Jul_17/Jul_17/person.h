#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<iostream>
using namespace std;

class Person
{
	char m_name[30];
	int m_age;
	char city[20];
public:
	// Constructors
	Person();
	Person(const char*,const char*);
	Person(const char*,const char*, int);

	// Getters
	char* GetName();
	int GetAge();

	// Setters
	void SetName(const char*);
	void SetAge(int);

	// Other functions
	void Display();
};