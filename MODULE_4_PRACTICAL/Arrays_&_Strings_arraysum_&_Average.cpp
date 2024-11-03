// Arrays and Strings
//1. Array Sum and Average
//o Write a C++ program that accepts an array of integers, calculates the sum and
//average, and displays the results. o Objective: Understand basic array manipulation.
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Size of the array
    int numbers[SIZE];
    int sum = 0;
    float average;

    // Accepting input for the array
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
        sum += numbers[i]; // Calculating sum
    }

    // Calculating average
    average = static_cast<float>(sum) / SIZE;

    // Displaying results
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}

