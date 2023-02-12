// Name: Joshua Comfort
// Date: 2/11/2023
// Description: Implementation for the circle class

#include "Circle.h"

// Default constructor
Circle::Circle()
{
	// Set the radius equal to a default value of 0.0
	radius = 0.0;
}

Circle::Circle(double radius)
{
	setRadius(radius); // Call the set radius function to initialize the circle with the user's specified value	
}

// Set the radius of the circle equal to the value specified by the user
void Circle::setRadius(double radius)
{
	// If the user inputs a value less than 0, set the radius equal to 0
	if (radius >= 0)
		this->radius = radius;
	else
		this->radius = 0;
}

// Return the radius of the cirlce
double Circle::getRadius()
{
	return radius;
}

// Return the area of the circle
double Circle::getArea()
{
	// Use the formula PI * r^2
	return PI * (radius * radius);
}

// Return the diameter of the circle
double Circle::getDiameter()
{
	// Use the formula 2*r
	return 2*radius;
}

// Return the circumference of the circle
double Circle::getCircumference()
{
	// Use the formula 2*PI*r
	return 2*PI*radius;
}
