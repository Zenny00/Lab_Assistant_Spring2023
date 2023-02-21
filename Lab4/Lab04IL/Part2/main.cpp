#include "Month.h"

int main()
{
	Month default_month(5);
	cout << default_month << endl;
	default_month = default_month++;
	cout << default_month << endl;

	for (int i = 0; i < 5; i++)
	{
		default_month = default_month++;
		cout << default_month << endl;
	}
	
	for (int i = 0; i < 10; i++)
	{
		default_month = default_month--;
		cout << default_month << endl;
	}

	Month new_month;
	cin >> new_month;
	cout << "New Month: " << new_month << endl;

	for (int i = 0; i < 10; i++)
	{
		default_month = --default_month;
		cout << default_month << endl;
	}

	for (int i = 0; i < 10; i++)
	{
		default_month = ++default_month;
		cout << default_month << endl;
	}

	Month user_month;
	cin >> user_month;

	cout << "The month you input was: " << user_month.getName() << endl;

	return 0;
}
