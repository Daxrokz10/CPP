#include<iostream>
using namespace std;
int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    int key;
    cin >> key;
    int index = linear_search(arr,n,key);
    if(index != -1){
        cout << "Element found at index: " << index << endl;
    }else{
        cout << "Element not found" << endl;
    }   
    return 0;
}