#include <iostream>
#include <chrono>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For seeding rand()
using namespace std;
using namespace std::chrono;

// Bubble Sort
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

// Selection Sort
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

// Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Merge Sort
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    const int n = 10000; // Array size
    int original[n];

    // Seed the random number generator
    srand(time(0));

    // Generate a random array of 100 elements
    for (int i = 0; i < n; i++) {
        original[i] = rand() % 1000; // Random numbers between 0 and 999
    }

    // Copy arrays for each sorting algorithm
    int bubbleArr[n], selectionArr[n], insertionArr[n], mergeArr[n], quickArr[n];
    for (int i = 0; i < n; i++) {
        bubbleArr[i] = selectionArr[i] = insertionArr[i] = mergeArr[i] = quickArr[i] = original[i];
    }

    // Bubble Sort timer
    auto start1 = high_resolution_clock::now();
    bubbleSort(bubbleArr, n);
    auto end1 = high_resolution_clock::now();
    auto duration1 = duration_cast<microseconds>(end1 - start1);
    cout << "\nBubble Sort Time: " << duration1.count() << " microseconds";

    // Selection Sort timer
    auto start2 = high_resolution_clock::now();
    selectionSort(selectionArr, n);
    auto end2 = high_resolution_clock::now();
    auto duration2 = duration_cast<microseconds>(end2 - start2);
    cout << "\nSelection Sort Time: " << duration2.count() << " microseconds";

    // Insertion Sort timer
    auto start3 = high_resolution_clock::now();
    insertionSort(insertionArr, n);
    auto end3 = high_resolution_clock::now();
    auto duration3 = duration_cast<microseconds>(end3 - start3);
    cout << "\nInsertion Sort Time: " << duration3.count() << " microseconds";

    // Merge Sort timer
    auto start4 = high_resolution_clock::now();
    mergeSort(mergeArr, 0, n - 1);
    auto end4 = high_resolution_clock::now();
    auto duration4 = duration_cast<microseconds>(end4 - start4);
    cout << "\nMerge Sort Time: " << duration4.count() << " microseconds";

    // Quick Sort timer
    auto start5 = high_resolution_clock::now();
    quickSort(quickArr, 0, n - 1);
    auto end5 = high_resolution_clock::now();
    auto duration5 = duration_cast<microseconds>(end5 - start5);
    cout << "\nQuick Sort Time: " << duration5.count() << " microseconds\n";

    return 0;
}
