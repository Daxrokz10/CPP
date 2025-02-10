#include<iostream>
using namespace std;

int main(){
    int num;

    cout<<"Enter number";
    cin>>num;

    int temp = num;
    int reversedNum = 0;

    while(temp != 0){
        int digit = temp % 10;
        reversedNum = reversedNum * 10 + digit;
        temp /= 10;
    }

    if(reversedNum == num){
        cout<<num<<" is a pallindrome number!"<<"\n";
    }else{
        cout<<num<<" is not a pallindrome number!"<<endl;
    }
    
}