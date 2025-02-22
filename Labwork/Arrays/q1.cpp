//Q1 Find average of element of 1d array

#include <iostream>
using namespace std;

double average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}

int main() {
    int arr[5];
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    double avg = average(arr, size);
    cout << "The average is: " << avg << endl;

}