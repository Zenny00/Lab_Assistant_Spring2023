// Name: Joshua Comfort
// Date: 2/11/2023
// Description: A class for a circle providing various functions for getting information about said circle.

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
	private:
		// Private data members
		double radius; // Holds the radius of the cirlce object
		const double PI = 3.141592653689793; // Constant to hold the value of PI

	public:
		// Public member functions

		// Constructors
		Circle(); // Default constructor
		Circle(double); // Constructor that allows for a radius to be provided

		// Setter functions
		void setRadius(double); // Allows for the radius to be set 

		// Getter functions
		double getRadius(); // Returns the circle's radius
		double getArea(); // Calculates the area of the circle A = PI * (r * r)
		double getDiameter(); // Calculates the diameter of the cirlce 2*PI
		double getCircumference(); // Calculates the circumference C = 2 * (PI * r)
};

#endif
