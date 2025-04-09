#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        // Constructor to initialize a node
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};

class LinkedList {
    public:
        Node* head;
        int size;

        LinkedList(){
            this->head = nullptr;
            this->size = -1;
        }

        void insertAtEnd(int data) {
            Node* newNode = new Node(data);
            if (this->head == nullptr) {
                this->head = newNode; 
            } else {
                Node* temp = this->head;
                while (temp->next != nullptr) {
                    temp = temp->next; 
                }
                temp->next = newNode; 
            }
            this->size++; 
        }

        void insertAtFront(int data){
            Node* newNode = new Node(data);
            if(this->head == nullptr){
                this->head = newNode;
            }else{
                newNode->next = this->head;
                this->head = newNode;
            }
        }

        void insertAtIndex(int index,int data){
            Node* newNode = new Node(data);
            if(index == 0){
                insertAtFront(data);
            }
            else if(index > 0 && index <= this->size){
                Node* temp = this->head;
                for(int i = 0; i<index-1; i++){
                    temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
        void displayList(){
            Node* temp = this->head;
            while (temp != nullptr) {
                cout << temp->data << " -> ";
                temp = temp->next; 
            }
            cout << "NULL" << endl; 
        }

};

int main() {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtFront(0); // Insert at front
    list.insertAtFront(-1); // Insert at front
    list.insertAtIndex(2, 5); // Insert at index 2
    list.displayList();

    return 0;
}