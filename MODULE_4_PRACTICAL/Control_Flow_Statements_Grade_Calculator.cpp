// Control Flow Statements
//1. Grade Calculator
//o Write a C++ program that takes a student’s marks as input and calculates the grade
//based on if-else conditions. o Objective: Practice conditional statements (if-else). 
#include <iostream>
using namespace std;

int main() {
    int marks;
    char grade;

    cout << "Enter the student's marks (0-100): ";
    cin >> marks;

    // Calculate grade based on marks
    if (marks >= 90 && marks <= 100) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else if (marks >= 0) {
        grade = 'F';
    } else {
        cout << "Invalid marks entered!" << endl;
        return 1; // Exit the program if marks are invalid
    }

    // Output the grade
    cout << "The grade is: " << grade << endl;

    return 0;
}

