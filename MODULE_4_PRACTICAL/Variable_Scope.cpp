//Functions and Scope
//3. Variable Scope
//o Write a program that demonstrates the difference between local and global
//variables in C++. Use functions to show scope.
 //o Objective: Reinforce the concept of variable scope.
 #include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

void displayVariables() {
    // Local variable
    int localVar = 5;
    
    cout << "Inside displayVariables function:" << endl;
    cout << "Local variable: " << localVar << endl;  // Accessible
    cout << "Global variable: " << globalVar << endl; // Accessible
}

int main() {
    cout << "Inside main function:" << endl;

    // Local variable in main
    int mainLocalVar = 20;

    cout << "Local variable in main: " << mainLocalVar << endl; // Accessible
    cout << "Global variable: " << globalVar << endl; // Accessible

    displayVariables();

    // Trying to access local variable from displayVariables
    // cout << "Trying to access localVar: " << localVar << endl; // This will cause an error

    return 0;
}

