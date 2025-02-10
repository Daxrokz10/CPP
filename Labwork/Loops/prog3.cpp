//Q3 1 to 10 odd

#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 10){
        if(i % 2 != 0){
            cout<<i<<endl;
        }
        i++;
    }
    for(int i = 1; i <= 10; i++){
        if(i % 2 != 0){
            cout<<i<<endl;
        }
    }
    int j = 1;
    do{
        if(j % 2 != 0){
            cout<<j<<endl;
        }
        j++;
    }while(j <= 10);
}