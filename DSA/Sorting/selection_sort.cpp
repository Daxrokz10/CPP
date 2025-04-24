#include<iostream>
using namespace std;


void bubble_sort(int arr[], int n) {
    int minindex;
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(arr[i]>arr[j]){
                minindex = j;
            }
        }swap(arr[i],arr[minindex]);
    }

}

int main()
{
    int arr[100],n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Unsorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr,n);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}