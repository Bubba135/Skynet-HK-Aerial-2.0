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

	cout << "\tWelcome to guess My Number\n\n";

	cout << "The is hiding out in Range: " << secretNumber << " in a 8x8 grid." << endl;

	do
	{
		cout << endl << endl;
		cout << "***************************" << endl;
		cout << "Enter a guess: " << endl;
		guess = (highRange - lowRange) / 2 + lowRange;
		cout << "AI has a Guess of: " << guess << endl;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
			cout << "AI augsting High Range" << endl;
			cout << "Old High range is " << highRange << endl;
			//change the high keep the low
			highRange = guess - 1;
			cout << "New High range is " << highRange << endl;
		}
		else if (guess < secretNumber)
		{
			cout << "Too low\n\n";
			cout << "AI augsting Low Range" << endl;
			cout << "Old Low range is " << lowRange << endl;
			//change loww keep the high
			lowRange = guess + 1;
			cout << "New Low range is " << lowRange << endl;
		}
		else
		{
			cout << "\n That's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);
    
	system("pause");

	return 0;
}

