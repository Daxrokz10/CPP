#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &a,int target,int end){
    int low = 0;
    int high = a.size()-1;

    while(low < high){
        int mid = (high + low)/2;

        if(a[mid] == target){
            return mid;
        }
        else if(a[mid] < target){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return -1;
};

int main()
{
    vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    int target;
    for(int i : a){
        cout<<a[i]<<" ";
    }
    cout<<"Enter tartget";
    cin>>target;
    int result = binarySearch(a,target,a.size());
    cout<<"Target is at index: "<<result;
    return 0;
}