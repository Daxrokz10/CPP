//Q1 Print 1 to 5

#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i <= 5){
        cout<<i<<endl;
        i++;
    }
    for(int i = 1; i <= 5; i++){
        cout<<i<<endl;
    }
    int j = 1;
    do{
        cout<<j<<endl;
        j++;
    }while(j <= 5);
}

