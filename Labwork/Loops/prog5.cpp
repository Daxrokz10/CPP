//Q5 print up to n

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int i = 1;
    while(i <= n){
        cout<<i<<endl;
        i++;
    }
    for(int i = 1; i <= n; i++){
        cout<<i<<endl;
    }
    int j = 1;
    do{
        cout<<j<<endl;
        j++;
    }while(j <= n);
}