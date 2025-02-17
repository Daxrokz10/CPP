#include<iostream>
using namespace std;

int printPattern(){
    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
int main(){
    printPattern();
}