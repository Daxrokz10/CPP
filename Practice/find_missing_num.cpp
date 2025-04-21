#include<iostream>
using namespace std;

void find_num(){
    int n;
    cout<<"Enter the number up to which you want to find missing num: ";
    cin>>n;
    int total = n*(n+1)/2;
    int sum = 0;
    int arr[n];
    cout<<"Enter the number in the array up to n in order and leave a number";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        sum += arr[i];
    }
    int missing = total - sum;
    cout<<"Missing is :"<<missing;
}

int main()
{
    find_num();
    return 0;
}