//Q6 Fact of n number with all three types of loop

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }

    cout<<"Factorial of "<<n<<" is "<<fact<<endl;

    int i = 1;
    fact = 1;
    while(i <= n){
        fact *= i;
        i++;
    }

    cout<<"Factorial of "<<n<<" is "<<fact<<endl;

    int j = 1;
    fact = 1;
    do{
        fact *= j;
        j++;
    }while(j <= n);

    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
}