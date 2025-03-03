//Call by Reference

#include<iostream>
using namespace std;

void increment(int &x){
    x = x + 10;
}

int main(){
    int var;
    cout<<"Enter a value: ";
    cin>>var;

    cout<<"Before function: "<<var<<endl;
    increment(var);
    cout<<"After function: "<<var<<endl;


}