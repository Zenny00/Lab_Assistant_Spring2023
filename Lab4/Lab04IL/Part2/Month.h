#ifndef MONTH_H
#define MONTH_H

#include <iostream>
#include <string>

using namespace std;

static const string monthList[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

class Month;
ostream& operator <<(ostream&, const Month&);
istream& operator >>(istream&, Month&);

class Month
{
	private:
		const string *month_strings;	
		string name;
		int monthNumber;
	public:
		// Constructors
		Month();
		Month(string);
		Month(int);

		// Getters and setters
		void setName(string);
		void setNumber(int);
		string getName();
		int getNumber();

		// Overloaded operators
		friend ostream& operator <<(ostream&, const Month&);
		friend istream& operator >>(istream&, Month&);
		Month operator ++(); // Prefix ++
		Month operator ++(int); // Postfix ++
		Month operator --(); // Prefix ++
		Month operator --(int); // Postfix ++
};

#endif
