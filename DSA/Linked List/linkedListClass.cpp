#include<iostream>
using namespace std;

class Node{
    public:

        int data;
        Node* next;
};

int main()
{
    
    Node* head = new Node();
    head->data = 1;

    Node* temp = new Node();
    temp->data = 2;
    head->next = temp;

    temp = new Node();
    temp->data = 3;
    head->next->next = temp;

    temp = new Node();
    temp->data = 4;
    head->next->next->next = temp;

    cout<<"Linked list is: ";
    while(head->data != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }

    return 0;
}