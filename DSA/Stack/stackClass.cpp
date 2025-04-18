#include<iostream>
using namespace std;

class Stack{
    public:
        int data;
        int top;
        int capacity;
        int* arr;
    Stack(int capacity){
        this->capacity = capacity;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack(){
        delete[] arr;
    }

    bool isFull();
    bool isEmpty();
    void push(int data);
    void pop();
    void peek();
    void display();
};



void Stack::push(int data){
    if(isFull()){
        cout<<"Stack Overflow."<<endl;
    }else{
        arr[++top] = data; // Increment top first, then assign the value
    }
}

void Stack::pop(){
    if(isEmpty()){
        cout<<"Stack is Empty."<<endl;
    }else{
        top--;
    }
}

void Stack::display(){
    cout<<"The elements of the stack are: "<<endl;
    for(int i=0;i<=top;i++){
        cout<<"Stack["<<i<<"] :"<<arr[i];
        cout<<endl;
    }
}

void Stack::peek(){
    if(isEmpty()){
        cout<<"Stack is Empty."<<endl;
    }else{
        cout<<"The top element in the stack is: "<<arr[top]<<endl;
    }
}

bool Stack::isFull(){
    return(top == capacity-1);
}

bool Stack::isEmpty(){
    return(top == -1);
}

int main()
{   

    int choice;
    Stack s(100);

    do{
        cout<<"Choose an option from the menu below:"<<endl;
        cout<<"1. Push\n2. Pop\n3. Peek\n4. Display\n0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                int data;
                cout<<"Enter the element to be pushed: ";
                cin>>data;
                s.push(data);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.peek();
                break;
            case 4:
                s.display();
                break;
            case 0:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid choice."<<endl;
        }
    }while(choice != 0);
   
    return 0;
}