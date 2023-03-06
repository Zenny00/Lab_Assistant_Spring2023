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

		void setName(string lastName, string firstName) 
		{
			this->lastName = lastName; 
			this->firstName = firstName;
		}

		void setAddress(string address, string city, string state, string zip) 
		{ 
			this->address = address;
			this->city = city;
			this->state = state; 
			this->zip = zip; 
		}

		void setPhone(string phone) { this->phone = phone; }

		void PrintRecord()
		{
			cout << lastName << ", " << firstName << endl;
			cout << address << endl;
			cout << city << ", " << state << " " << zip << endl;
			cout << phone << endl;
		}

		string getRecord()
		{
			string record;
			record += lastName + ", " + firstName + " / ";
			record += address + " / ";
			record += city + ", " + state + " " + zip + " / ";
			record += phone;
			return record;
		}
};

#endif
