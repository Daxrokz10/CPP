#include <iostream>
using namespace std;
int main(){
    int i = 0;

    for(i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}