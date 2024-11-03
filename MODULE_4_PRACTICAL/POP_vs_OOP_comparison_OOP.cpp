//3. POP vs. OOP Comparison Program
//o Write two small programs: one using Procedural Programming (POP) to calculate the
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a
//class and object for the same task. o Objective: Highlight the difference between POP and OOP approaches.
//OOP
#include <iostream>
using namespace std;

class Rectangle {
public:
    float length;
    float width;

    float calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;

    cout << "Enter length of the rectangle: ";
    cin >> rect.length;

    cout << "Enter width of the rectangle: ";
    cin >> rect.width;

    float area = rect.calculateArea();
    cout << "Area of the rectangle: " << area << endl;

    return 0;
}

