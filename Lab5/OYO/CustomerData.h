#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

#include <iostream>
#include <string>
#include "PersonData.h"

using namespace std;

class CustomerData : public PersonData
{
	private:
		int customerNumber;
		bool mailingList;
	public:
		void setCustomerNumber(int customerNumber) { this->customerNumber = customerNumber; }
		void setMailingList(bool mailingList) { this->mailingList = mailingList; }	
		
		void PrintRecord()
		{
			PersonData::PrintRecord();
			cout << "Customer Number: " << customerNumber << endl;
			cout << "On the Mailing List: ";
			if (mailingList)
				cout << "Yes";
			else
				cout << "No";
			cout << endl;	
		}

		string getRecord()
		{
			string record = PersonData::getRecord();
			record += " / C#: " + to_string(customerNumber) + " / ";
			record += "ML: ";
			if (mailingList)
				record += "Yes";
			else
				record += "No";
		
			return record;
		}
};

#endif
