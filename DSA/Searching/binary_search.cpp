#include<iostream>
using namespace std;

int binary_search(int arr[],int n,int key){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] < key){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[5] = {66, 21 ,46, 11, 5};
    
    cout << "Enter the element to search: ";
    int key;
    cin >> key;
    int index = binary_search(arr,5,key);
    if(index != -1){
        cout << "Element found at index: " << index << endl;
    }else{
        cout << "Element not found" << endl;
    }   
    return 0;
}