#include <iostream>
using namespace std;

// CRUD functions
void read(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void create(int* arr, int& size, int element) {
    arr[size++] = element;
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

// UI functions
void displayMenu() {
    cout << "=============================" << endl;
    cout << "         CRUD MENU           " << endl;
    cout << "=============================" << endl;
    cout << "1. View Elements" << endl;
    cout << "2. Insert Element" << endl;
    cout << "3. Update Element" << endl;
    cout << "4. Delete Element" << endl;
    cout << "5. Exit" << endl;
    cout << "=============================" << endl;
    cout << "Enter your choice: ";
}

void initializeArray(int* arr, int& size) {
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Create array" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter value for element arr[" << i << "]: ";
        cin >> arr[i];
    }
}

int main() {
    int arr[100];
    int size = 0;
    int choice, element, index;

    initializeArray(arr, size);

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array elements: ";
                read(arr, size);
                break;
            case 2:
                if (size >= 100) {
                    cout << "Array is full. Cannot insert more elements." << endl;
                } else {
                    cout << "Enter element to insert: ";
                    cin >> element;
                    create(arr, size, element);
                }
                break;
            case 3:
                cout << "Enter index to update: ";
                cin >> index;
                if (index < 0 || index >= size) {
                    cout << "Invalid index. Please try again." << endl;
                } else {
                    cout << "Enter new value: ";
                    cin >> element;
                    update(arr, size, index, element);
                }
                break;
            case 4:
                cout << "Enter index to delete: ";
                cin >> index;
                if (index < 0 || index >= size) {
                    cout << "Invalid index. Please try again." << endl;
                } else {
                    deleteElement(arr, size, index);
                }
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
