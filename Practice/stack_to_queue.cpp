#include <iostream>
using namespace std;

class stack {
    public:
    int stack[100], top = -1;

    void push(int data) {
        top++;
        stack[top] = data;
    }

    void pop() {
        if (top >= 0) {
            stack[top] = 0; // Optional: Reset the value
            top--;
        }
    }

    int peek() {
        if (top >= 0) {
            return stack[top];
        }
        return -1; // Return -1 if the stack is empty
    }

    bool isEmpty() {
        return top == -1;
    }
};

struct Queue {
    stack s1, s2;

    void enqueue(int data) {
        s1.push(data);
    }

    int dequeue() {
        if (s2.isEmpty()) {
            while (!s1.isEmpty()) {
                s2.push(s1.peek());
                s1.pop();
            }
        }
        if (!s2.isEmpty()) {
            int front = s2.peek();
            s2.pop();
            return front;
        }
        return -1; 
    }
};

int main() {
    Queue q;
    int choice, data;

    while (true) {
        cout << "\nQueue Menu:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data to enqueue: ";
                cin >> data;
                q.enqueue(data);
                cout << data << " enqueued into the queue.\n";
                break;

            case 2:
                data = q.dequeue();
                if (data == -1) {
                    cout << "Queue is empty. Cannot dequeue.\n";
                } else {
                    cout << data << " dequeued from the queue.\n";
                }
                break;

            case 3:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}