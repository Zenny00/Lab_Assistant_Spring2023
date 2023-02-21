// Name: Joshua Comfort
// Date: 2/11/2023
// Description: Implementation for the circle class

#include "Circle.h"
#include <cmath>

// Default constructor
Circle::Circle()
{
	// Set the radius equal to a default value of 0.0
	radius = 0.0;
}

Circle::Circle(double radius, double x, double y)
{
	setRadius(radius); // Call the set radius function to initialize the circle with the user's specified value	

	// Set the center
	this->x = x;
	this->y = y;
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

void Circle::setCenter(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Circle::getCenterX()
{
	return x;
}

double Circle::getCenterY()
{
	return y;
}

bool Circle::collide(Circle &circle)
{
	double distance = sqrt(pow(x - circle.getCenterX(), 2) + pow(y - circle.getCenterY(), 2));
	double sum_of_radii = radius + circle.getRadius();

	return distance <= sum_of_radii; // Return true if the distance is less than the sum of the radii
}
