#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void printList(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    // Creating nodes
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    // Linking nodes
    head->next = second;
    second->next = third;

    // Printing the list
    printList(head);
    return 0;
}