#include <iostream>
#include <cstdlib>
#include "IntegerList.h"

using namespace std;

IntegerList::IntegerList()
{
	list = nullptr;
	numElements = 0;
}

IntegerList::IntegerList(int size) {
	cout << "Entering constructor" << endl;
	list = new int[size];
	numElements = size;
	for (int ndx = 0; ndx < size; ndx++)
		list[ndx] = 0;
}

IntegerList::~IntegerList() {
	cout << "Entering destructor" << endl;
	delete[] list;
}

IntegerList::IntegerList(const IntegerList &obj) {
	cout << "Entering copy constructor" << endl;
	numElements = obj.numElements;
	list = new int[numElements];
	for (int i = 0; i < numElements; i++)
		list[i] = obj.list[i];
}

const IntegerList IntegerList::operator=(const IntegerList &right) {
	delete[] list;
	numElements = right.numElements;
	list = new int[numElements];
	for (int i = 0; i < numElements; i++)
		list[i] = right.list[i];

	return *this;
}

const IntegerList IntegerList::operator+(const IntegerList &right)
{
	cout << "Entering + operator" << endl;
	// Combine the two lists into one and return the IntegerList list object that results
	
	int new_size = numElements + right.numElements; // The size of the new IntegerList should be the sum of the two input IntegerLists

	IntegerList l3(new_size); // Create a new IntegerList with the size calculated previously

	for (int i = 0; i < numElements; i++)
		l3[i] = list[i]; // Assign the elements of the current list to the new list in the correct order

	// Add all the additional elements from the second list
	for (int i = 0; i < right.numElements; i++)
		l3[numElements + i] = right.list[i];

	cout << "Exiting + operator" << endl;
	return l3;
}

int & IntegerList::operator[](const int &index)
{
	cout << "[] operator with " << index << endl;
	if (index < 0)
		return list[0];
	else if (index > numElements - 1)
		return list[numElements - 1];
	else
		return list[index];
}

void IntegerList::resize(int new_size)
{
	int *new_list = new int[new_size]; // Dynamically create a new array
	
	// If the new size of the list is smaller than it is currently the elements at the end of the array will be lost
	for (int i = 0; i < new_size; i++)
		if (i < numElements)
			new_list[i] = list[i];
		else
			new_list[i] = 0;
	
	numElements = new_size;
	delete [] list; // Free the dynamically allocated memory
	list = new_list; // Set the list pointer to point to the new_list
}

bool IntegerList::isValid(int element) const {
	bool status;

	if (element < 0 || element >= numElements)
		status = false;
	else
		status = true;
	return status;
}

void IntegerList::setElement(int element, int value) {
	if (isValid(element))
		list[element] = value;
	else {
		cout << "Error: Invalid subscript\n";
		exit(EXIT_FAILURE);
	}
}

int IntegerList::getElement(int element) const {
	if (isValid(element))
		return list[element];
	else {
		cout << "Error: Invalid subscript\n";
		exit(EXIT_FAILURE);
	}
}

void IntegerList::displayList() const {
	for (int i = 0; i < numElements; i++)
		cout << list[i] << " ";
	cout << endl;
}
