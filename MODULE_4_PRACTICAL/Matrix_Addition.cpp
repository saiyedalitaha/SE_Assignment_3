//Array & strings
//2. Matrix Addition
//o Write a C++ program to perform matrix addition on two 2x2 matrices.
// o Objective: Practice multi-dimensional arrays.
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 2; // Size of the matrices
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE], sum[SIZE][SIZE];

    // Input for the first matrix
    cout << "Enter elements for the first 2x2 matrix:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input for the second matrix
    cout << "Enter elements for the second 2x2 matrix:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Performing matrix addition
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Displaying the result
    cout << "Resulting matrix after addition:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << sum[i][j] << " ";
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

