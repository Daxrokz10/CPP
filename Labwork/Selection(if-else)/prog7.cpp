#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;

    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    cout<<"Enter number c: ";
    cin>>c;
    cout<<"Enter number d: ";
    cin>>d;


    if(a>b){
        if(a>c){
            if(a>d){
                cout<<a<<" is the largest number!";
            }else{
                cout<<d<<" is the largest number!";
            }
        }else{
            if(c>d){
                cout<<c<<" is the largest number!";
            }else{
                cout<<d<<" is the largest number!";
            }
        }
    }else{
        if(b>c){
            if(b>d){
                cout<<b<<" is the largest number!";
            }else{
                cout<<d<<" is the largest number!";
            }
        }else{
            if(c>d){
                cout<<c<<" is the largest number!";
            }else{
                cout<<d<<" is the largest number!";
            }
        }
    }
}