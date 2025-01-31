#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,e;

    cout<<"Enter number a: ";
    cin>>a;
    cout<<"Enter number b: ";
    cin>>b;
    cout<<"Enter number c: ";
    cin>>c;
    cout<<"Enter number d: ";
    cin>>d;
    cout<<"Enter number e: ";
    cin>>e;


    if(a>b){
        if(a>c){
            if(a>d){
                if(a>e){
                    cout<<a<<" is the largest number!";
                }else{
                    cout<<e<<" is the largest number!";
                }
            }else{
                if(d>e){
                    cout<<d<<" is the largest number!";
                }else{
                    cout<<e<<" is the largest number!";
                }
            }
        }else{
            if(c>d){
                if(c>e){
                    cout<<c<<" is the largest number!";
                }else{
                    cout<<e<<" is the largest number!";
                }
            }else{
                if(d>e){
                    cout<<d<<" is the largest number!";
                }else{
                    cout<<e<<" is the largest number!";
                }
            }
        }
    }else{
        if(b>c){
            if(b>d){
                if(b>e){
                    cout<<b<<" is the largest number!";
                }else{
                    cout<<e<<" is the largest number!";
                }
            }else{
                if(d>e){
                    cout<<d<<" is the largest number!";
                }else{
                    cout<<e<<" is the largest number!";
                }
            }
        }else{
            if(c>d){
                if(c>e){
                    cout<<c<<" is the largest number!";
                }else{
                    cout<<e<<" is the largest number!";
                }
            }else{
                if(d>e){
                    cout<<d<<" is the largest number!";
                }
                else{
                    cout<<e<<" is the largest number!";
                }
            }
        }
    }
}