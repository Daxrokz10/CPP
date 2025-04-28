#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr,int low,int high){
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low;j<=high-1;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);

    return(i+1);
};

void quickSort(vector<int> &arr,int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);

        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
};

int main()
{
    vector<int> vec = {10, 7, 8, 9, 1, 5};
    int n = vec.size();

    quickSort(vec, 0, n - 1);

    for (auto i : vec) {
        cout << i << " ";
    }
    return 0;
}