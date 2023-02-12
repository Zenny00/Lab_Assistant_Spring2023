// Name: Joshua Comfort
// Date: 2/11/2023
// Description: Driver code to test the coin class

#include "Coin.h"
#include <iostream>
#include <string>

int main()
{
	Coin coin; // Create a coin object

	// Get the side the coin started on
	std::cout << "The starting side is: " << coin.getSideUp() << std::endl; 

	int heads_count = 0;
	int tails_count = 0;

	for (int i = 0; i < 20; i++)
	{
		coin.toss(); // Toss the coin

		// Check which side the coin landed on and increment the correct counter
		if (coin.getSideUp().compare("heads"))
			heads_count++;
		else
			tails_count++;

		// Display the result of the toss
		std::cout << "The coin landed on: " << coin.getSideUp() << std::endl;
	}

	// Display the total number of heads and tails flipped
	std::cout << "The total number of heads is: " << heads_count << std::endl;
	std::cout << "The total number of tails is: " << tails_count << std::endl;
}
