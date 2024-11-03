//3. POP vs. OOP Comparison Program
//o Write two small programs: one using Procedural Programming (POP) to calculate the
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a
//class and object for the same task. o Objective: Highlight the difference between POP and OOP approaches.
//pop
#include <iostream>
using namespace std;

float calculateArea(float length, float width) {
    return length * width;
}

int main() {
    float length, width;

    cout << "Enter length of the rectangle: ";
    cin >> length;

    cout << "Enter width of the rectangle: ";
    cin >> width;

    float area = calculateArea(length, width);
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}

