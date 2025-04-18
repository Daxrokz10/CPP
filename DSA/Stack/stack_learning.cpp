#include<iostream>
using namespace std;

int stack[100] , top = -1;

void push(int data){
    top++;
    stack[top] = data;
}

void pop(){
    stack[top] = NULL;
    top--;
}

void view(){
    cout<<"The elements of the stack are: ";
    for(int i=0;i<=top;i++){
        cout<<"Stack["<<i<<"] :"<<stack[i];
        cout<<endl;
    }
}

int main()
{   
    int n;
    cout << "Enter the number of elements to be pushed in stack: ";
    cin >> n;
    for(int i = 0; i < n; i++){
        int data;
        cout << "Enter the element to be pushed: ";
        cin >> data;
        push(data);
    }
    cout << "The elements in the stack are: ";
    for(int i = 0; i <= top; i++){
        cout << stack[i] << " ";
    }

    pop();
    cout << "\nThe elements in the stack after popping are: ";
    for(int i = 0; i <= top; i++){
        cout << stack[i] << " ";
    }
    cout << "\nThe top element in the stack is: " << stack[top] << endl;

    view();
    
    return 0;
}