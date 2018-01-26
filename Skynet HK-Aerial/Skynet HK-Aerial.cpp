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

	cout << "\tWelcome to guess My Number\n\n";

	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Too low\n\n";
		}
		else
		{
			cout << "\n That's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);
    
	system("pause");

	return 0;
}

