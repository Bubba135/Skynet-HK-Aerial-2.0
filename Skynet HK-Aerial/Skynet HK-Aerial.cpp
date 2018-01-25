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

	int secretNumber = rand() % 100 + 1;

	int tries = 0;
	int guess;

	cout << "\tWelcome to guess My Number\n\n";

	do
	{
		cout << "Enter a guess: ";
		cin >> guess;

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

