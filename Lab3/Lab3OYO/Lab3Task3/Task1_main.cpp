// Name: Joshua Comfort
// Date: 2/11/2023
// Description: Test code for the circle class

#include "Circle.h"
#include <iostream>
#include <time.h>

int main()
{
	const int ARR_SIZE = 1000;
	Circle cir_array[ARR_SIZE]; // Define array to hold circle objects
	
	// Setup random seed
	srand(time(NULL));
	
	// Create 1000 random circles
	for (int i = 0; i < ARR_SIZE; i++)
	{
		double radius = ((double) rand() / RAND_MAX) + 1; 
		double x = rand() % 41 - 20;
		double y = rand() % 41 - 20;
		cir_array[i].setRadius(radius);
		cir_array[i].setCenter(x, y);
	}

	// Check for collision between circles
	for (int i = 0; i < ARR_SIZE; i++)
		for (int j = i + 1; j < ARR_SIZE; j++)
			if (cir_array[i].collide(cir_array[j]))
				std::cout << "Circle #" << i << " collides with Circle #" << j << std::endl;

	return 0;
}
