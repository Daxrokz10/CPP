#include "crud.h"
#include <iostream>
using namespace std;

void create(int arr[], int &size, int element) {
    arr[size] = element;
    size++;
}

void read(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void update(int arr[], int size, int index, int element) {
    if (index >= 0 && index < size) {
        arr[index] = element;
    } else {
        cout << "Index out of bounds" << endl;
    }
}

void deleteElement(int arr[], int &size, int index) {
    if (index >= 0 && index < size) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    } else {
        cout << "Index out of bounds" << endl;
    }
}

void crud(int arr[], int &size) {
    int index, element, choice;

    do {
        cout << endl << endl;
        cout << "Enter 1 to View Elements-->" << endl;
        cout << "Enter 2 to Insert Element-->" << endl;
        cout << "Enter 3 to Update Element-->" << endl;
        cout << "Enter 4 to Delete Element-->" << endl;
        cout << "Enter 5 to Exit-->" << endl;

        cout << endl;
        cout << "Your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << endl << endl;
                read(arr, size);
                break;
            case 2:
                cout << endl << endl;
                cout << "Enter value of element: ";
                cin >> element;
                create(arr, size, element);
                break;
            case 3:
                cout << endl << endl;
                cout << "Enter index to be updated at: ";
                cin >> index;
                cout << "Enter value of element: ";
                cin >> element;
                update(arr, size, index, element);
                break;
            case 4:
                cout << endl << endl;
                cout << "Enter index to be deleted: ";
                cin >> index;
                deleteElement(arr, size, index);
                break;
            default:
                if (choice != 5) {
                    cout << "Wrong choice" << endl;
                } else {
                    cout << "Bye Bye!" << endl;
                }
        }
    } while (choice != 5);
}

int main() {
    int arr[100];
    int size = 0;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Create array" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter value for element arr[" << i << "]: ";
        cin >> arr[i];
    }

    crud(arr, size);

    return 0;
}