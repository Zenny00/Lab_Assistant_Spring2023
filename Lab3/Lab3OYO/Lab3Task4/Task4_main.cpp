#include "NumberArray.h"
#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));
	const int SIZE = 25;
	NumberArray float_arr(SIZE);
	
	// Fill array
	for (int i = 0; i < SIZE; i++)
		float_arr.storeValue(i, (((float) rand() / RAND_MAX) * 100) );

	for (int i = 0; i < SIZE; i++)
		std::cout << float_arr.retrieveValue(i) << " ";
	std::cout << std::endl;

	float highest = float_arr.highest();
	float lowest = float_arr.lowest();
	float average = float_arr.average();

	std::cout << "The highest value is: " << highest << std::endl;
	std::cout << "The lowest value is: " << lowest << std::endl;
	std::cout << "The average value is: " << average << std::endl;
	
	return 0;
}
