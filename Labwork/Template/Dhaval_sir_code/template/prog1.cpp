#include<iostream>
using namespace std;

template <typename T>
T add(T a,T b){
    return a;
}


int main(){


    cout<<"result is: "<<add(5,7)<<endl;
    cout<<"result is: "<<add(5.358734,7.564)<<endl;
    cout<<"result is: "<<add("Dhaval","Leelawala")<<endl;

    return 0;
}