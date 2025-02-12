#include<iostream>
using namespace std;

int factor(int n){
    cout<<"Factors of "<<n<<" are: ";
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            cout<<i<<"\n";
        }
    }
    return n;
}
int main(){
    int n;

    cout<<"Enter the number for which you want factors:\n";
    cin>>n;

    factor(n);
}