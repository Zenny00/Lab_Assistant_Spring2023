#include "ListCollection.h"
#include <iostream>
#include <cstdlib>

using namespace std;

ListCollection::ListCollection(int sz)
{
	list = new int[sz];
	numElements = 0;
	numCapacity = sz;
}

ListCollection::~ListCollection() {
	delete[] list;
}

ListCollection::ListCollection(const ListCollection &obj) {
	numElements = obj.numElements;
	numCapacity = obj.numCapacity;
	list = new int[numElements];
	for (int i = 0; i < numElements; i++)
		list[i] = obj.list[i];
}

const ListCollection ListCollection::operator=(const ListCollection &right) {
	delete[] list;
	numElements = right.numElements;
	numCapacity = right.numCapacity;
	list = new int[numElements];

	for (int i = 0; i < numElements; i++)
		list[i] = right.list[i];

	return *this;
}

const ListCollection ListCollection::operator+(const ListCollection &right)
{
	// Combine the two lists into one and return the IntegerList list object that results
	
	int new_size = numCapacity + right.numCapacity; // The size of the new IntegerList should be the sum of the two input IntegerLists
	
	ListCollection l3(new_size); // Create a new IntegerList with the size calculated previously
	l3.numElements = numElements + right.numElements;
	for (int i = 0; i < numElements; i++)
		l3.list[i] = list[i]; // Assign the elements of the current list to the new list in the correct order

	// Add all the additional elements from the second list
	for (int i = 0; i < right.numElements; i++)
		l3.list[numElements + i] = right.list[i];

	return l3;
}

/*
int & ListCollection::operator[](const int &index)
{
	if (index < 0)
		return list[0];
	else if (index > numElements - 1)
		return list[numElements - 1];
	else
		return list[index];
}
*/

void ListCollection::resize(int new_size)
{
	numCapacity = new_size; // Set the new capacity
	int *new_list = new int[new_size]; // Dynamically create a new array
	
	// If the new size of the list is smaller than it is currently the elements at the end of the array will be lost
	for (int i = 0; i < new_size; i++)
		if (i < numElements)
			new_list[i] = list[i];
		else
			new_list[i] = 0;

	if (numElements >= numCapacity)
		numElements = numCapacity;

	//If this code does not run the	number of elements in the new array will not change
	delete [] list; // Free the dynamically allocated memory
	list = new_list; // Set the list pointer to point to the new_list
}

bool ListCollection::isValid(int element) const {
	bool status;

	if (element < 0 || element >= numElements)
		status = false;
	else
		status = true;
	return status;
}

void ListCollection::setElement(int element, int value) {
	if (isValid(element))
		list[element] = value;
	else {
		cout << "Error: Invalid subscript\n";
		exit(EXIT_FAILURE);
	}
}

int ListCollection::getElement(int element) const {
	if (isValid(element))
		return list[element];
	else {
		cout << "Error: Invalid subscript\n";
		exit(EXIT_FAILURE);
	}
}

void ListCollection::displayList(bool nl) const {
	if (nl)
	{
		for (int i = 0; i < numElements; i++)
			cout << list[i] << endl;
		cout << endl;
	}
	else
	{
		for (int i = 0; i < numElements; i++)
			cout << list[i] << " ";
		cout << endl;
	}
}

const ListCollection ListCollection::sublist(int start, int end)
{
	int num = end - (start - 1);
	ListCollection l3(num); // New sublist

	int index = 0;
	for (int i = start; i <= end; i++)
	{
		l3.list[index] = list[i];
		index++;
	}

	l3.numElements = num;
	return l3;
}

const ListCollection ListCollection::sublist(int start)
{
	int num = numElements - (start);
	ListCollection l3(num); // New sublist

	int index = 0;
	for (int i = start; i < numElements; i++)
	{
		l3.list[index] = list[i];
		index++;
	}

	l3.numElements = num;
	return l3;
}

const ListCollection ListCollection::sort()
{
	ListCollection l3(numCapacity);
	l3 = *this;
	l3.numCapacity = numElements;
	
	for (int i = 0; i < numElements - 1; i++)
		for (int j = 0; j < numElements - 1 - i; j++)
			if (l3.list[j] > l3.list[j + 1])
			{
				int tmp = l3.list[j];
				l3.list[j] = l3.list[j + 1];
				l3.list[j + 1] = tmp;
			}
	
	return l3;
}

void ListCollection::clear()
{
	for (int i = 0; i < numElements; i++)
	{
		list[i] = 0;
	}

	numElements = 0;
}

int ListCollection::size()
{
	return numElements;
}

int ListCollection::capacity()
{
	return numCapacity;
}

void ListCollection::pushFront(int element)
{
	if (numElements > numCapacity)
		resize(numCapacity * 2);

	numElements++;
	for (int i = numElements - 1; i > 0; --i)
		list[i] = list[i - 1];
	
	list[0] = element;
}

void ListCollection::pushBack(int element)
{	
	list[numElements] = element;
	numElements++;

	if (numElements > numCapacity)
		resize(numCapacity * 2);
}

int ListCollection::popFront()
{
	int element = list[0];

	for (int i = 0; i < numElements - 1; i++)
		list[i] = list[i + 1];

	numElements--;
	return element;
}

int ListCollection::popBack()
{
	int element = list[numElements - 1];
	list[numElements - 1] = 0;
	numElements--;
	return element;
}

void ListCollection::insertOrdred(int element)
{
	if (numElements >= numCapacity)
		resize(numCapacity * 2);

	int index = 0;

	for (index = 0; index < numElements; index++)
		if (element < list[index])
			break;

	for (int j = numElements; j >= index; j--)
		list[j + 1] = list[j];

	list[index] = element;
	numElements++;
}

void ListCollection::removeElement(int element)
{
	int index = -1;

	for (int i = 0; i < numElements - 1; i++)
		if (element == list[i])
			index = i;

	if (index != -1)
	{
		for (int i = index; i < numElements - 1; i++)
			list[i] = list[i + 1];

		numElements--;
	}
}

void ListCollection::insert(int index, int element)
{
	if (numElements > numCapacity)
		resize(numCapacity * 2);
	
	if (index < 0)
	{
		pushFront(element);
	} 
	else if (index > numElements - 1)
	{
		pushBack(element);
	}
	else
	{
		for (int j = numElements; j >= index; j--)
			list[j + 1] = list[j];

		list[index] = element;
		numElements++;
	}
}

void ListCollection::remove(int index)
{
	if (index < 0 || index > numElements - 1)
		return;

	for (int i = index; i < numElements - 1; i++)
		list[i] = list[i + 1];

	numElements--;
}
