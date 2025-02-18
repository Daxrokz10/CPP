//    *
//   * *
//  * * *
// * * * *
//  * * *
//   * *
//    *  

#include<iostream>
using namespace std;

int main(){
    for(int i=1;i<=3;i++){
        for(int s=4;s>=i;s--){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=4;i>=1;i--){
        for(int s=4;s>=i;s--){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}