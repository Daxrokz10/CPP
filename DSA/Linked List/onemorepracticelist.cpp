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
    Node* head = new Node{1,nullptr}; 
    Node* n1 = new Node{2,nullptr}; 
    Node* n2 = new Node{3,nullptr}; 
    Node* n3 = new Node{4,nullptr};
    
    head->next = n1;
    n1->next = n2;
    n2->next = n3;

    printList(head);

    return 0;
}