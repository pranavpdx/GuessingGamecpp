// GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
// This game generates a random number between 1-100 and gets the user to guess it, displaying the number of tries once guessed
// Author: Pranav Sharma Date: 9/15/2020

#include <iostream>
#include<time.h>
using namespace std;
int main()
{
    bool playing = true;
    char input;
    // game runs until user states otherwise
    while (playing == true) {
    // generates a random number
    // idea to use srand() function from Galbraith C++ and Data Structures Canvas Page
    srand(time(NULL));
    int num = rand() % 100 + 1;
    int guess;
    int timesGuessed = 0;
    bool guessed = false;
    // tells user whether their guess is too high or too low if user did not guess correctly
    while (guessed == false) {
        cout << "Enter a guess \n";
        cin >> guess;
        if (guess > num) {
            cout << "Your guess is too high \n";
            timesGuessed++;
        }
        else if (guess < num) {
            cout << "Your guess is too low \n";
            timesGuessed++;
        }
        else {
            cout << "You got it! \n";
	    timesGuessed++;
            guessed = true;
        }
    }
    //Once guessed coreectly, displays number of attempts and asks user if they would like to play again
    cout << "You had to guess " << timesGuessed << " times"<< "\n";
    cout << "Would you like to play again? (Y/N)\n";
    cin >> input;
    // if the user does not want to play again, the game ends
    if (input != 'Y') {
        playing = false;
    }
    }
}

