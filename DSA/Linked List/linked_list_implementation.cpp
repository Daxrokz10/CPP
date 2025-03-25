#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the list
void insert(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr}; // Create a new node with the given value and set its 'next' to nullptr.
    if (!head) { // Check if the list is empty (head is nullptr).
        head = newNode; // If empty, make the new node the head of the list.
        return; // Exit the function as the insertion is complete.
    }
    Node* temp = head; // Start from the head of the list.
    while (temp->next) { // Traverse the list until the last node (where 'next' is nullptr).
        temp = temp->next; // Move to the next node.
    }
    temp->next = newNode; // Link the last node's 'next' to the new node.
}

// Function to display the linked list
void display(Node* head) {
    Node* temp = head; // Initialize a temporary pointer to traverse the list, starting from the head.
    while (temp) { // Loop until the end of the list (when temp becomes nullptr).
        cout << temp->data << " -> "; // Print the data of the current node followed by " -> ".
        temp = temp->next; // Move to the next node in the list.
    }
    cout << "nullptr" << endl; // Print "nullptr" to indicate the end of the list.
}

int main() {
    Node* head = nullptr;

    // Insert nodes into the linked list
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);

    // Display the linked list
    cout << "Linked List: ";
    display(head);

    // Free allocated memory
    Node* temp;
    while (head) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
