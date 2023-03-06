#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <iostream>
#include <string>

using namespace std;

class PersonData
{
	private:
		string lastName;
		string firstName;
		string address;	
		string city;
		string state;
		string zip;
		string phone;	

	public:
		string getLastName() { return lastName; }
		string getFirstName() { return firstName; }
		string getAddress() { return address; }
		string getCity() { return city; }
		string getState() { return state; }
		string getZip() { return zip; }
		string getPhone() { return phone; }

		void setLastName(string lastName) { this->lastName = lastName; }
		void setFirstName(string firstName) { this->firstName = firstName; }
		void setAddress(string address) { this->address = address; }
		void setCity(string city) { this->city = city; }
		void setState(string state) { this->state = state; }
		void setZip(string zip) { this->zip = zip; }
		void setPhone(string phone) { this->phone = phone; }
};

#endif
