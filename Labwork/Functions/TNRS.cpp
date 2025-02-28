#include<iostream>
using namespace std;

int tnrs(){
    int a;
    int b;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    return a+b;   
}

int main(){
    cout<<"Sum of a & b is "<<tnrs();
}