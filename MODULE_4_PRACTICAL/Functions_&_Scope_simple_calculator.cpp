//4. Functions and Scope
//1. Simple Calculator Using Functions
//o Write a C++ program that defines functions for basic arithmetic operations (add, subtract, multiply, divide). 
//The main function should call these based on user input. o Objective: Practice defining and using functions in C++.
#include <iostream>
using namespace std;

// Function declarations
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0; // Return 0 for division by zero
    }
}

int main() {
    float num1, num2;
    char operation;

    // User input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "Choose operation (+, -, *, /): ";
    cin >> operation;

    // Perform the operation based on user input
    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}
 
