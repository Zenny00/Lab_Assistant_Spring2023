// Name: Joshua Comfort
// Date: 2/11/2023
// Description: A coin class that allows users to simulate tosses

#include "Coin.h"
#include <string>
#include <time.h>

Coin::Coin()
{
	srand(time(NULL)); // Initialize the random seed with the time epoch
	toss(); // Toss the coin to pick a starting side
}

void Coin::toss()
{
	double random_side = ((double) rand())/RAND_MAX; // Generate a number between 0-1

	// Set the coin accordingly
	if (random_side > 0.5)
		sideUp = "heads";
	else
		sideUp = "tails";
}

std::string Coin::getSideUp()
{
	return sideUp; // Return the side the coin is facing
}
