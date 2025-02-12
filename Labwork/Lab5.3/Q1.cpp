//Table from and to
#include<iostream>
using namespace std;

int tableMaker(int a,int b){

    for(int i = a;i<=b;i++){
        for(int j = 1;j<=10;j++){
            cout<<" "<<i<<"X"<<j<<"="<<i*j<<" ";
        }
        cout<<"\n";
    }
    return a,b;
}

int main(){
    int tableStart,tableEnd;
    cout<<"Table From: ";
    cin>>tableStart;

    cout<<"Table to: ";
    cin>>tableEnd;

    tableMaker(tableStart,tableEnd);
}