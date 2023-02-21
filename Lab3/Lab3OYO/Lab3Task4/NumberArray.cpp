#include "NumberArray.h"

NumberArray::NumberArray(int size)
{
	// Dynamically allocate the float array
	array = new float[size];
	arr_size = size;
}

NumberArray::~NumberArray()
{
	// Free dynamically allocated memory
	delete array;
}

void NumberArray::storeValue(int pos, float value)
{
	if (pos >= 0 && pos < arr_size)
		array[pos] = value;
}

float NumberArray::retrieveValue(int pos)
{
	if (pos > 0 && pos < arr_size)
		return array[pos];
}

float NumberArray::highest()
{
	float highest = array[0];

	for (int i = 0; i < arr_size; i++)
		if (array[i] > highest)
			highest = array[i];

	return highest;
}

float NumberArray::lowest()
{
	float lowest = array[0];

	for (int i = 0; i < arr_size; i++)
		if (array[i] < lowest)
			lowest = array[i];

	return lowest;
}

float NumberArray::average()
{
	float sum = 0;

	for (int i = 0; i < arr_size; i++)
		sum += array[i];

	float average = sum / arr_size;
	return average;
}
