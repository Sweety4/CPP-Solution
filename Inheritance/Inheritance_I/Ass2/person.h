#pragma once
#include"add.h"
#include"str.h"

#ifndef _PER_
#define _PER_

class Person
{
	Cstring name;
	Address add;
public:
	Person();
	Person(const char*, const char*, const char*, int);
	Person(Person&);
	void accept();
	void display()const;
};

#endif;