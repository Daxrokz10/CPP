// #include <iostream>
// using namespace std;

// // Node structure
// struct Node {
//     int data;
//     Node* next;
// };

// // Function to insert a new node at the end of the list
// void insert(Node*& head, int value) {
//     Node* newNode = new Node{value, nullptr};
//     if (!head) {
//         head = newNode;
//         return;
//     }
//     Node* temp = head;
//     while (temp->next) {
//         temp = temp->next;
//     }
//     temp->next = newNode;
// }

// // Function to display the linked list
// void display(Node* head) {
//     Node* temp = head;
//     while (temp) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "nullptr" << endl;
// }

// int main() {
//     Node* head = nullptr;

//     // Insert nodes into the linked list
//     insert(head, 10);
//     insert(head, 20);
//     insert(head, 30);

//     // Display the linked list
//     cout << "Linked List: ";
//     display(head);

//     // Free allocated memory
//     Node* temp;
//     while (head) {
//         temp = head;
//         head = head->next;
//         delete temp;
//     }

//     return 0;
// }
