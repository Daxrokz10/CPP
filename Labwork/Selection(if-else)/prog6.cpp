#include <iostream>
using namespace std;

int main(){
    int a,b,c;

    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    cout<<"Enter number c: ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<a<<" is the largest number!";
        }else{
            cout<<c<<" is the largest number!";
        }
    }else{
        if(b>c){
            cout<<b<<" is the largest number!";
        }else{
            cout<<c<<" is the largest number!";
        }
    }
}