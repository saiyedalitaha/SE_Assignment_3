//4. Setting Up Development Environment
//o Write a program that asks for two numbers and displays their sum. Ensure this is
//done after setting up the IDE (like Dev C++ or CodeBlocks). o Objective: Help students understand how to install, configure, and run programs in
//an IDE.
#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    sum = num1 + num2;

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}

