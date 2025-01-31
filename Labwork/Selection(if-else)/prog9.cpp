#include <iostream>
using namespace std;

int main(){
    float avg;

    cout<<"Enter the average of total mnarks: ";
    cin>>avg;

    if(avg>=80){
        cout<<'A';
    }else if(avg>=60){
        cout<<'B';
    }else if(avg>=40){
        cout<<'C';
    }else{
        cout<<"Fail";
    }
}