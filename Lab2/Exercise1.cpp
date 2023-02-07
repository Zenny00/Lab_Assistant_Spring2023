#include <iostream>

int main()
{
	float user_array[10]; //Create an array hold the user's floats read in from the standard input
	
	//Fill the array with 10 floats from stdin
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Input a float: ";
		std::cin >> user_array[i]; //Read in the user's float
	}

	//Create two variables to hold the minimum and maximum elements
	//Initialize them to the first element of the array
	float min = user_array[0];
	float max = user_array[0];

	//Loop through the array to find the minimum and maximum elements
	for (int i = 0; i < 10; i++)
	{
		//If the current element is less than the smallest, set the smallest equal to the current element
		if (user_array[i] < min)
			min = user_array[i];
		//If the current element is greater than the largest, set the largest equal to the current element
		if (user_array[i] > max)
			max = user_array[i];
	}
	
	std::cout << "The smallest element is: " << min << std::endl;
	std::cout << "The largest element is: " << max << std::endl;
}
