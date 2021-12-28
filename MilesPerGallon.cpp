// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: LAB2_1
Project Name: Miles Per Gallon
File Name: MilesPerGallon.cpp
Description: Calculate a car's gas mileage.
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here

int main()
{

	// Local variable declarations placed here
	int maxGallons;
	int maxMiles;
	double milesPG;

	// Inform user what program does
	cout << "This program is intended to calculate the MPG of your vehicle based on the number of gallons that a car's tank can hold,\n";
	cout << "and the number of miles that it may be driven on a full tank of gas.\n" << endl;

	// How many gallons can the user's car hold?
	cout << "What is the maximum amount of gallons your car's gas tank hold? " << endl;
	cin >> maxGallons;

	// How many miles can the user's car cantravel on 1 tank of gas
	cout << "How far can your car travel on one tank of gas?\n";
	cin >> maxMiles;

	// Calculations
	milesPG = static_cast<double> (maxMiles) / maxGallons;

	// Program output done at end of program
	cout << "Your car gets " << milesPG << " mpg.\n";

	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// instructor pause

	// Returns a value to the calling program
	return(0);

}


// PROOF
// Program output copied into the below comment section
/*
PROOF 1
This program is intended to calculate the MPG of your vehicle based on the number of gallons that a car's tank can hold,
and the number of miles that it may be driven on a full tank of gas.

What is the maximum amount of gallons your car's gas tank hold?
15
How far can your car travel on one tank of gas?
500
Your car gets 33.3333 mpg.
Press any key to continue . . .

PROOF 2
This program is intended to calculate the MPG of your vehicle based on the number of gallons that a car's tank can hold,
and the number of miles that it may be driven on a full tank of gas.

What is the maximum amount of gallons your car's gas tank hold?
18
How far can your car travel on one tank of gas?
400
Your car gets 22.2222 mpg.
Press any key to continue . . .

PROOF 3
This program is intended to calculate the MPG of your vehicle based on the number of gallons that a car's tank can hold,
and the number of miles that it may be driven on a full tank of gas.

What is the maximum amount of gallons your car's gas tank hold?
10
How far can your car travel on one tank of gas?
650
Your car gets 65 mpg.
Press any key to continue . . .
*/