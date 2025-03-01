#include<iostream>
using namespace std;

int tsrs(int a,int b){
    int sum = a+b;

    return sum;
}
int main(){
    int a,b;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    cout<<"Sum is : "<<tsrs(a,b);
    
}