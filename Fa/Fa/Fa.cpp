// Fa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    //seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //generate random number btn 1 and 100
    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    std::cout << "Welcome to the number guessing game!\n";
    std::cout << "I have selected a random number between 1 and 100.\n";

    //main game loop
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > randomNumber) {
            std::cout << "Too high! try again\n";
        }
        else if (guess < randomNumber) {
            std::cout << "Too low, try again.\n";
        }
        else {
            std::cout << "Congtratulations! You guessed it right in " << attempts << " attempts\n";
        }
    }
        while (guess != randomNumber);
          
        return 0;

}

