#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void deleteNode(Node*& head, int value) {
    if (!head) return;

    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next && current->next->data != value) {
        current = current->next;
    }

    if (current->next) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

int main() {
    // Creating nodes
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};
    

    // Linking nodes
    head->next = second;
    second->next = third;

    // Printing the list
    deleteNode(head,3);
    printList(head);

    return 0;
}
