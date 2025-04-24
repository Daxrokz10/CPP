#include<iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right){
    int n1 = left - mid + 1;
    int n2 = right - mid;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++){
        L[i] = arr[i];
    }
    for(int j=0;j<n2;j++){
        R[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0;
    int k = left;

    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[],int left,int right){
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    merge_sort(arr,left,mid);
    merge_sort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void printVector(int arr[])
{
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Driver code
int main()
{
    int arr[] = {1,2,34,56,12,51};
    int n = 6;

    cout << "Given vector is \n";
    printVector(arr);

    merge_sort(arr, 0, n - 1);

    cout << "\nSorted vector is \n";
    printVector(arr);
    return 0;
}
