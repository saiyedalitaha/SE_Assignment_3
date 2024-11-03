//Array & strings
//3. String Palindrome Check
//o Write a C++ program to check if a given string is a palindrome (reads the same
//forwards and backwards). o Objective: Practice string operations.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // User input
    cout << "Enter a string: ";
    getline(cin, str); // Use getline to allow spaces

    // Check for palindrome
    bool isPalindrome = true;
    int length = str.length();

    for (int i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - 1 - i]) {
            isPalindrome = false;
            break; // No need to check further
        }
    }

    // Display result
    if (isPalindrome) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

