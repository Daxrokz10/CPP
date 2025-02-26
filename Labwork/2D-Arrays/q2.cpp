//Max from 2D array
#include <iostream>
using namespace std;

int main() {
    int row, col;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of cols: ";
    cin >> col;

    int arr[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter the value of arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    int maxVal = arr[0][0];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] > maxVal) {
                maxVal = arr[i][j];
            }
        }
    }

    cout << "The maximum value in the array is: " << maxVal << endl;

    return 0;
}

