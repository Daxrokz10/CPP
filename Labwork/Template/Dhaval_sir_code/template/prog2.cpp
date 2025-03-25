#include<iostream>
using namespace std;

template <typename T1,typename T2>
class myClass{

    T1 num1;
    T2 num2;

    public:

    void setData(int a,int b){
        this->num1 = a;
        this->num2 = b;
    }

    void getData(){
        cout<<"Number 1: "<<num1<<endl;
        cout<<"Number 2: "<<num2<<endl;
    }

    

};


int main(){

    myClass<int, int> obj1;

    obj1.setData(10,20);
    obj1.getData();
    

    return 0;
}