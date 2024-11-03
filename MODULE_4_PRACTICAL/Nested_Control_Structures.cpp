// control flow statement
//4. Nested Control Structures
//o Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
//o Objective: Learn nested control structures.
#include <iostream>
using namespace std;

int main() {
    int height;

    // Ask the user for the height of the triangle
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Nested loop to print the triangle
    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* "; // Print star
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

