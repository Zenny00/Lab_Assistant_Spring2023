// Name: Joshua Comfort
// Date: 2/11/2023
// Description: Test code for the circle class

#include "Circle.h"
#include <iostream>

int main()
{
	// Get input from the user
	double radius = 0.0;
	std::cout << "Please enter the radius of the circle: ";
	std::cin >> radius;

	Circle circle(radius); // Create a new circle object with the user specified radius
	
	std::cout << "The circle's area is: " << circle.getArea() << std::endl;
	std::cout << "The circle's diameter is: " << circle.getDiameter() << std::endl;
	std::cout << "The circle's circumference is: " << circle.getCircumference() << std::endl;
	
	return 0;
}
