#include<iostream>
using namespace std;


void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[5]={66,21,46,11,5};
    insertion(arr,5);
    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}