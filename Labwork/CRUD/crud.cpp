#include "crud.h"
#include <iostream>
using namespace std;

void create(int* arr, int& size, int element) {
    arr[size++] = element;
}

void read(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void update(int* arr, int size, int index, int element) {
    if (index >= 0 && index < size) {
        arr[index] = element;
    }
}

void deleteElement(int* arr, int& size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; ++i) {
            arr[i] = arr[i + 1];
        }
        --size;
    }
}