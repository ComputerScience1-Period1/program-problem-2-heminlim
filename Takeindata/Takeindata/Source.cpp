/*
Hemin Lim - 9/26/17 Period 1

Take in Data

Create questions using all variables we learned to take in data

*/

// Libraries
#include <iostream>
#include <conio.h>
#include <math.h>

// Namespaces
using namespace std; 

// Functions ()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

// MAIN
void main() {
	// Variables
	int chicken;
	float milk;
	double water;
	bool cookie = false;
	char well;
	int calc_1, calc_2, calc_3, calc_4, calc_5;

	// User Queries
	cout << "How old is your chicken? ";
	cin >> chicken; // int
	cout << "How many gallons of milk do you have?(round to the tenth) ";
	cin >> milk; // float
	cout << "How many milliliters of water does your class have?(round to the hundredth) ";
	cin >> water;
	cout << "Do you have a cookie ; Y/N ";
	cin >> well;
	if (well == 'Y' || well == 'y') {
		cookie = true;
	}

	// After questions print out stored data
	cout << "Your chicken is" << chicken << " of age. |n";
	cout << " You have " << water << " gallons of water." << endl;
	cout << " Your class has " << water << " milliliters of water." << '|n';
	cout << boolalpha << "The answer evaluation of you have a cookie is " << cookie << endl;

	// Change values

	cout << "Enter a number : ";
	cin >> calc_1;
	cout << "Enter a number another number : ";
	cin >> calc_2;
	cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
	calc_3 = calc_1 * calc_2;
	cout << calc_1 << " * " << calc_2 << " = " << calc_3 << endl;
	calc_4 = calc_1 / calc_2;
	cout << calc_1 << " / " << calc_2 << " = " << calc_4 << endl;
	calc_5 = calc_1 - calc_2;
	cout << calc_1 << " - " << calc_2 << " = " << calc_5 << endl;

	pause();
}