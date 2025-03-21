#include <iostream>
using namespace std;

int main() {
    // Allocate memory for a single integer
    int* ptr = new int;
    *ptr = 42; // Assign value
    cout << "Value at ptr: " << *ptr << endl;

    // Deallocate memory
    delete ptr;

    // Allocate memory for an array of integers
    int size = 5;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1; // Assign values
    }

    cout << "Array values: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory for the array
    delete[] arr;

    return 0;
}
