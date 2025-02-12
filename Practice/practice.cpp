#include <iostream>
using namespace std;

int table(int n){
    for(int i=1;i<=10;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    return n;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    table(n);
    return 0;
}