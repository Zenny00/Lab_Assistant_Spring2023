#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<char> user_vector; //Create an array hold the user's floats read in from the standard input
	char curr = 0;
	//Fill the array with 10 floats from stdin
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Input a char: ";
		std::cin >> curr;
		user_vector.push_back(curr); //Read in the user's float
	}

	//Create two variables to hold the minimum and maximum elements
	//Initialize them to the first element of the array
	char min = user_vector.front();
	char max = user_vector.front();

	//Loop through the array to find the minimum and maximum elements
	for (int i = 0; i < 10; i++)
	{
		//If the current element is less than the smallest, set the smallest equal to the current element
		if (user_vector.at(i) < min)
			min = user_vector.at(i);
		//If the current element is greater than the largest, set the largest equal to the current element
		if (user_vector.at(i) > max)
			max = user_vector.at(i);
	}
	
	std::cout << "The smallest element is: " << min << std::endl;
	std::cout << "The largest element is: " << max << std::endl;
}
