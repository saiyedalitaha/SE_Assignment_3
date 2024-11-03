// Introduction to Object-Oriented Programming
//1. Class for a Simple Calculator
//o Write a C++ program that defines a class Calculator with functions for addition, subtraction, multiplication, and division. Create objects to use these functions. 
//o Objective: Introduce basic class structure.
#include <iostream>
using namespace std;

class Calculator {
public:
    // Function for addition
    float add(float a, float b) {
        return a + b;
    }

    // Function for subtraction
    float subtract(float a, float b) {
        return a - b;
    }

    // Function for multiplication
    float multiply(float a, float b) {
        return a * b;
    }

    // Function for division
    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0; // Return 0 for division by zero
        }
    }
};

int main() {
    Calculator calc; // Create an object of Calculator
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
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid operation!" << endl;
    }

    return 0;
}

