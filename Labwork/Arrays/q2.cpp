//Q2 Addition of 2 1D arrays

#include<iostream>
using namespace std;

int main(){
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,4,5};
    int c[4];

    for(int i=1;i<=4;i++){
        c[i] = a[i] + b[i];
    }
    for(int i=1;i<=4;i++){
        cout<<c[i];
        if(i<4){
            cout<<" ,";
        }
    }
}