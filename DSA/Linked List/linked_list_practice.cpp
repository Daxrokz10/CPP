#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};
void insert(Node*& head,int value){
    Node* newNode = new Node{value,nullptr};
    if (!head){
        head = newNode;
        return;
    }
}

int main()
{
    
    return 0;
}