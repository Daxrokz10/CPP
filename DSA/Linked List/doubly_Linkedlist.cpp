#include<iostream>
using namespace std;

struct Node{
    Node* prev;
    int data;
    Node* next;
};

void printListForward(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void printListBackward(Node* head){
    if (head == nullptr) {
        cout << "NULL" << endl;
        return;
    }
    // Move to the tail of the list
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    // Traverse backward from the tail
    while (temp != nullptr) {
        cout << temp->data << "<-";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

Node* insertAtEnd(Node* head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    newNode->prev = nullptr;

    if (head == nullptr) {
        return newNode; // The new node becomes the head
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp; // Set the prev pointer of the new node
    return head;
}

int main()
{
    Node* head = nullptr;

    // Insert nodes into the doubly linked list
    head = insertAtEnd(head, 10);
    head = insertAtEnd(head, 20);
    head = insertAtEnd(head, 30);

    // Print the list forward and backward
    printListForward(head);
    printListBackward(head);

    return 0;
}