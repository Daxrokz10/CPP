//First N terms of fibbonacci series
#include<iostream>
using namespace std;

int fib(int n){
    int a = 0, b = 1, c;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        c = a+b;
        cout<<c<<" ";
        a = b;
        b = c;
    }
    return n;
}
int main(){
    int n;
    cout<<"Enter the number of terms you want in the series: ";
    cin>>n;
    fib(n);
    return 0;
}