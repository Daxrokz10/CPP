//Q2 5 to 1

#include <iostream>
using namespace std;

int main(){
    int i = 5;
    while(i >= 1){
        cout<<i<<endl;
        i--;
    }
    for(int i = 5; i >= 1; i--){
        cout<<i<<endl;
    }
    int j = 5;
    do{
        cout<<j<<endl;
        j--;
    }while(j >= 1);
}