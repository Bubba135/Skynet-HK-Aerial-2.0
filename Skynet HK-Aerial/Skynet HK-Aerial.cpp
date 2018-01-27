// Skynet HK-Aerial.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
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

	cout << "\tWelcome to a new drown hunting program.\n\n";

	cout << "In this program you will see how a AI will hunt down enemy in a 8x8 grid with out humen erer." << endl;

	cout << "The eneny is hiding out in Range: " << secretNumber << " in a 8x8 grid." << endl;

	do
	{
		//How the program will find it numbers
		cout << endl << endl;
		cout << "***************************" << endl;
		cout << "Enter a guess: " << endl;
		guess = (highRange - lowRange) / 2 + lowRange;
		cout << "AI has a Guess of: " << guess << endl;
		++tries;

		if (guess > secretNumber)
		{
			//The code for being to High
			cout << "Too high!\n\n";
			cout << "AI augsting High Range" << endl;
			cout << "Old High range is " << highRange << endl;
			//change the high keep the low
			highRange = guess - 1;
			cout << "New High range is " << highRange << endl;
		}
		else if (guess < secretNumber)
		{
			// The code for being to low.
			cout << "Too low\n\n";
			cout << "AI augsting Low Range" << endl;
			cout << "Old Low range is " << lowRange << endl;
			//change low keep the high
			lowRange = guess + 1;
			cout << "New Low range is " << lowRange << endl;
		}
		else
		{
			// If it gets the number.
			cout << "\n That's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);
    
	system("pause");

	return 0;
}