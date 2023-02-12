// Name: Joshua Comfort
// Date: 2/11/2023
// Description: A coin class that allows users to simulate tosses
 
#ifndef COIN_H
#define COIN_H

#include <string>

class Coin
{
	
	private:
		// Private data members
		std::string sideUp;

	public:
		// Public member functions
		// Constructors
		Coin(); // Default constructor

		// Coin member functions
		void toss(); // Simulate a coin toss
		std::string getSideUp(); // Return the current side the coin is facing
};

#endif
