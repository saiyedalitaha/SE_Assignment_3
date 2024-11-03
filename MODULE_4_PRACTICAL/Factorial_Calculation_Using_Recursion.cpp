//Functions and Scope
//2. Factorial Calculation Using Recursion
//o Write a C++ program that calculates the factorial of a number using recursion.
//o Objective: Understand recursion in functions.
#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n <= 1) {
        return 1; // Base case: factorial of 0 or 1 is 1
    }
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int number;

    // User input
    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    // Calculate and display the factorial
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << number << " is " << factorial(number) << endl;
    }

    return 0;
}

