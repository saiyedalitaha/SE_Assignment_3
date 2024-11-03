//2. Type Conversion
//o Write a C++ program that performs both implicit and explicit type conversions and
//prints the results. o Objective: Practice type casting in C++.
#include <iostream>
using namespace std;

int main() {
    // Implicit type conversion
    int intValue = 10;
    double doubleValue = intValue; // Implicit conversion from int to double

    // Explicit type conversion
    double num = 9.5;
    int convertedValue = static_cast<int>(num); // Explicit conversion from double to int

    // Display results
    cout << "Implicit Conversion:" << endl;
    cout << "Integer value: " << intValue << endl;
    cout << "Converted to double: " << doubleValue << endl;

    cout << "\nExplicit Conversion:" << endl;
    cout << "Double value: " << num << endl;
    cout << "Converted to integer: " << convertedValue << endl;

    return 0;
}

