// This program demonstrates the the FeetInches class's
// conversion functions.
#include <iostream>
#include "FeetInches.h"
using namespace std;

int main() {
	double d;  // To hold double input
	int i;     // To hold int input

	// Define a FeetInches object.
	FeetInches distance;

	// Get a distance from the user.
	cout << "Enter a distance in feet and inches:\n";
	cin >> distance;

	// Convert the distance object to a double.
	d = distance;

	// Convert the distance object to an int.
	i = distance;

	// Display the values.
	cout << "The value " << distance;
	cout << " is equivalent to " << d << " feet\n";
	cout << "or " << i << " feet, rounded down.\n";
	
	FeetInches larger(5, 0);
	FeetInches smaller(2, 5);
	FeetInches equal1(6, 0), equal2(6, 0);

	cout << "Comparison operators: " << endl;
	cout << "Larger distance: " << larger << endl;
	cout << "Smaller distance: " << smaller << endl;
	cout << "Equal distance 1: " << equal1 << endl;
	cout << "Equal distance 2: " << equal2 << endl;

	bool l_gte_s = larger >= smaller;
	bool s_lte_l = smaller <= larger;
	bool s_not_eq_l = smaller != larger;
	bool e1_not_eq_e2 = equal1 != equal2;

	cout << "Larger distance is greater than or equal to smaller distance: " << boolalpha << l_gte_s << endl;
	cout << "Smaller distance is less than than or equal to larger distance: " << boolalpha << s_lte_l << endl;
	cout << "Larger distance is not equal to smaller distance: " << boolalpha << s_not_eq_l << endl;
	cout << "Equal distance #1 is not equal to equal distance #2: " << boolalpha << e1_not_eq_e2 << endl;

	return 0;
}
