// Skynet HK-Aerial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
//Added time
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));
	//Change to Enemey Location
	int secretNumber = rand() % 64 + 1;
	//Add High and Low Vars
	int tries = 0;
	int guess;
	int highRange = 64;
	int lowRange = 1;

	cout << "Susen Is Now Online\n\n" << endl;
	cout << "\tSusen: Welcome to a new drown hunting program.\n\n";

	cout << "You: In this program you will see how a AI will hunt" << endl;
	cout <<	"down enemy in a 8x8 grid with out humen error.\n\n" << endl;

	//cout << "You: The eneny is hiding out in Range: " << secretNumber << " in a 8x8 grid." << endl;

	do
	{
		//How the program will find it numbers
		cout << endl << endl;
		cout << "***************************" << endl;
		cout << "Susen: Scanning the area " << endl;
		//the code for thAI to guess
		guess = (highRange - lowRange) / 2 + lowRange;
		cout << "Susen has a Guess of: " << guess << endl;
		++tries;

		if (guess > secretNumber)
		{
			//The code for being to High
			cout << "Susen: Error Too high going lower!\n\n";
			cout << "Susen augsting High Range" << endl;
			cout << "Old High range is " << highRange << endl;
			//change the high keep the low
			highRange = guess - 1;
			cout << "New High range is " << highRange << endl;
		}
		else if (guess < secretNumber)
		{
			// The code for being to low.
			cout << "Susen: Error Too low going higher\n\n";
			cout << "Susen augsting Low Range" << endl;
			cout << "Old Low range is " << lowRange << endl;
			//change low keep the high
			lowRange = guess + 1;
			cout << "New Low range is " << lowRange << endl;
		}
		else
		{
			// If it gets the number.
			cout << "\nSusen: I had found enemy in " << tries << " lapes! Now termainat enemy.\n";
			cout << "Susen: Targeting enemy, locking on." << endl;
			cout << "You: Fire!" << endl;
		}
	} while (guess != secretNumber);
    
	system("pause");

	return 0;
}