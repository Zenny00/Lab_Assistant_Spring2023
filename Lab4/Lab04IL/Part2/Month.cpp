#include "Month.h"
#include <stdlib.h>     /* abs */

Month::Month()
{
	month_strings = monthList; 
	// Set default month values
	this->monthNumber = 1;
	this->name = month_strings[monthNumber-1];
}

Month::Month(string name)
{
	month_strings = monthList;
	this->setName(name);
}

Month::Month(int monthNumber)
{
	month_strings = monthList;
	this->setNumber(monthNumber);
}

void Month::setName(string name)
{
	int index = 0;

	// Find the index of the month
	for (int i = 0; i < sizeof(month_strings)/sizeof(string); i++)
		if (name == month_strings[i])
			index = i;

	// Set the name and number to the proper values
	this->name = name;
	this->monthNumber = index;
}

void Month::setNumber(int monthNumber)
{	
	this->monthNumber = monthNumber;
	this->name = month_strings[monthNumber-1];
}

string Month::getName()
{
	return this->name;
}

int Month::getNumber()
{
	return this->monthNumber;
}

ostream& operator<<(ostream &strm, const Month &obj) {
	// Output to the console
	strm << "Month: " << obj.name << " | Month Number: " << obj.monthNumber;	
	return strm;
}

istream& operator >>(istream &strm, Month &obj) {
	const string month_strings[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

	cout << "Input the month number: ";
	strm >> obj.monthNumber;
	obj.name = month_strings[obj.monthNumber-1];
	return strm;
}

Month Month::operator ++()
{
	int month_number = monthNumber;
	++month_number;

	if (month_number == 13)
		month_number = 1;
	
	Month tmp(month_number);
	return tmp;
} // Prefix ++

Month Month::operator ++(int input)
{
	int month_number = monthNumber;
	month_number++;

	if (month_number == 13)
		month_number = 1;

	Month tmp(month_number);
	return tmp;

} // Postfix ++

Month Month::operator --()
{
	int month_number = monthNumber;
	--month_number;

	if (month_number == 0)
		month_number = 12;

	Month tmp(month_number);
	return tmp;
} // Prefix ++

Month Month::operator --(int input)
{
	int month_number = monthNumber;
	month_number--;

	if (month_number == 0)
		month_number = 12;

	Month tmp(month_number);
	return tmp;
} // Postfix ++
