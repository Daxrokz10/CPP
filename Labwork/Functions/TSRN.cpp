#include<iostream>
using namespace std;

void tsrn(int x,int y){
    cout<<"Sum of a & b is "<<x+y;
}

int main(){
    int a,b;

    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

    tsrn(a,b);
}