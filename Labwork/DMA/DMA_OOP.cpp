#include<iostream>
using namespace std;

class MyClass {
    private:
        int *arr;
        int size;
    public:
        MyClass(int size) {
            this->size = size;
            arr = new int[size];
            if(arr == NULL){
                cout<<"Memory allocation failed";
            }
        }
        ~MyClass() {
            delete[] arr;
            cout<<"Memory deallocated succesfully";
        }

        void setArrElement(int index, int value) {
            arr[index] = value;
        }
        void getArrElement(int index) {
            cout << arr[index];
        }

        // Getter for size
        int getSize() const {
            return size;
        }
};

int main() {
    MyClass obj1(5);

    for (int i = 0; i < obj1.getSize(); i++) { 
        obj1.setArrElement(i, i + 1);
    }

    for (int i = 0; i < obj1.getSize(); i++) { 
        obj1.getArrElement(i);
        cout << " ";
    }
    cout << endl;

    return 0;
}