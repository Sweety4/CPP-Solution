#include"date.h"
cDate::cDate()
{
	day = month = 1;
	year = 2020;
}
cDate::cDate(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}
void cDate::setDay(int)
{
	this->day = day;

}
void cDate::setMonth(int month)
{
	this->month = month;
}
void cDate::setYear(int year)
{
	this->year = year;

}
int cDate::getDay()
{
	return day;
}
void cDate::Accept()
{
	cout << "\n\t Enter Day Month and Year ";
	cin >> day >> month >> year;
}
int cDate::getMonth()
{
	return month;
}
int cDate::getYear()
{
	return year;

}
void cDate::Display()
{
	cout << "\n\t Date    : " << day << "/" << month << "/" << year;
}