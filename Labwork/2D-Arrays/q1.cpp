//Sum of array 2D

#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of cols: ";
    cin >> col;

    int a[row][col], b[row][col], c[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) { // Fixed loop condition
            cout << "Enter the value of a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    cout << endl << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) { // Fixed loop condition
            cout << "Enter the value of b[" << i << "][" << j << "]: ";
            cin >> b[i][j];
        }
    }

    cout << "Sum of array a & b is: " << endl;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}