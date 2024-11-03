//Introduction to Object-Oriented Programming
//3. Inheritance Example
//o Write a program that implements inheritance using a base class Person and derived
//classes Student and Teacher. Demonstrate reusability through inheritance.
// o Objective: Learn the concept 
#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Function to display person details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class Student
class Student : public Person {
private:
    int studentID;

public:
    // Constructor
    Student(string n, int a, int id) : Person(n, a), studentID(id) {}

    // Function to display student details
    void display() {
        Person::display(); // Call base class display
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
private:
    string subject;

public:
    // Constructor
    Teacher(string n, int a, string sub) : Person(n, a), subject(sub) {}

    // Function to display teacher details
    void display() {
        Person::display(); // Call base class display
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create a Student object
    Student student("Alice", 20, 12345);
    cout << "Student Details:" << endl;
    student.display();

    // Create a Teacher object
    Teacher teacher("Mr. Smith", 35, "Mathematics");
    cout << "\nTeacher Details:" << endl;
    teacher.display();

    return 0;
}

