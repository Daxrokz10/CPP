#include<iostream>
using namespace std;

template<typename T>
class MyClass{
    public: 
        T *arr;
        int size;

        MyClass(int size){
            this->size = size;
            arr = new T[size];
        }
        ~MyClass(){
            delete[] arr;
        }
        void setArr(int index,T value){
            this->arr[index] = value;
        }
        T getArr(int index){
            return arr[index];
        }
};

int main()
{
    MyClass<int> obj1(5);

    for(int i = 0;i<obj1.size;i++){
        obj1.setArr(i,i+1);
    }
    for(int i = 0;i<obj1.size;i++){
        cout<<"arr["<<i<<"] is "<<obj1.getArr(i)<<endl;
    }
    return 0;
}