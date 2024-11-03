//Variables, Data Types, and Operators
//1. Variables and Constants
//o Write a C++ program that demonstrates the use of variables and constants. Create
//variables of different data types and perform operations on them.
//o Objective: Understand the difference between variables and constants.
#include <iostream>
using namespace std;

int main() {
    // Constants
    const float PI = 3.14; // Constant for PI
    const int MAX_STUDENTS = 30; // Constant for maximum students

    // Variables
    int length = 5; // Variable for length
    int width = 10; // Variable for width
    float area; // Variable to store area
    string studentName = "Alice"; // Variable for student name

    // Calculate area of a rectangle
    area = length * width;

    // Output results
    cout << "Student Name: " << studentName << endl;
    cout << "Length: " << length << ", Width: " << width << endl;
    cout << "Area of the rectangle: " << area << endl;
    cout << "Value of PI: " << PI << endl;
    cout << "Maximum number of students allowed: " << MAX_STUDENTS << endl;

    return 0;
}

