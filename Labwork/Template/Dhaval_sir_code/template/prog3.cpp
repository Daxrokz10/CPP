#include<iostream>
using namespace std;

template <typename T>
class MyClass{
    public:
        T *arr;
        T size;

    MyClass(int size){
        this->size = size;
        arr = new T[this->size];
    }

    ~MyClass(){
        delete[] arr;
        arr = NULL;
    }

    void setData(int index, T value){
        if(index < size && index >= 0){
            arr[index] = value;
        }
    }

    void getData(){
        for(int i=0;i<size;i++){
            cout<<"array element "<<i<<" is "<<arr[i]<<endl;
        }
    }

};

int main(){

    MyClass <int> obj(5);

    obj.setData(0,10);
    obj.setData(1,130);
    obj.setData(2,1450);
    obj.setData(3,1650);
    obj.setData(4,170);
    obj.getData();


    return 0;
}