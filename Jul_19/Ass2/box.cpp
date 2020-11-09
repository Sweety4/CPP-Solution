#include"box.h"
Box::Box()
{
	capacity = 0;
}
Box::Box(int capacity)
{
	this->capacity = capacity;
}
int Box::operator>(Box &obj)
{
	if (this->capacity > obj.capacity)
		return 1;
	else
		return 0;
}
void Box::Display()
{
	cout << "\n\t Capacity : " << capacity;
}