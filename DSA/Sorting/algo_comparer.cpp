#include <iostream>
#include <chrono>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For seeding rand()
using namespace std;
using namespace std::chrono;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    const int n = 100; // Array size
    int original[n];

    // Seed the random number generator
    srand(time(0));

    // Generate a random array of 100 elements
    for (int i = 0; i < n; i++) {
        original[i] = rand() % 1000; // Random numbers between 0 and 999
    }

    // Copy for bubble sort
    int bubbleArr[n];
    for (int i = 0; i < n; i++) bubbleArr[i] = original[i];

    // Copy for selection sort
    int selectionArr[n];
    for (int i = 0; i < n; i++) selectionArr[i] = original[i];

    // Bubble sort timer
    auto start1 = high_resolution_clock::now();
    bubbleSort(bubbleArr, n);
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(end1 - start1);
    cout << "\nBubble Sort Time: " << duration1.count() << " microseconds";

    // Selection sort timer
    auto start2 = high_resolution_clock::now();
    selectionSort(selectionArr, n);
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(end2 - start2);
    cout << "\nSelection Sort Time: " << duration2.count() << " microseconds\n";

    return 0;
}
