#pragma once
#ifndef ADDR_
#define ADDR_

class cAddress
{
	char *city;
	char *area;
public:
	cAddress();
	cAddress(const char*, const char*);
};

#endif // !ADDR_

