// Control Flow Statements
//2. Number Guessing Game
//o Write a C++ program that asks the user to guess a number between 1 and 100. The
//program should provide hints if the guess is too high or too low. Use loops to allow
//the user multiple attempts. o Objective: Understand while loops and conditional logic.
#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation
    int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess = 0;
    int lives = 3; // Player starts with 3 lives

    cout << "Guess the number between 1 and 100!" << endl;

    // Loop until the user guesses the correct number or runs out of lives
    while (guess != secretNumber && lives > 0) {
        cout << "You have " << lives << " lives left." << endl;
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number!" << endl;
        }

        // Decrease lives for incorrect guesses
        if (guess != secretNumber) {
            lives--;
        }
    }

    // If the player runs out of lives
    if (lives == 0) {
        cout << "Game over! The secret number was " << secretNumber << "." << endl;
    }

    return 0;
}

