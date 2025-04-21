#include <iostream>
#include <queue>
using namespace std;

class StackUsingQueues {
private:
    queue<int> q1, q2; 

public:
    
    void push(int x) {
        q2.push(x); 

        
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

      
        swap(q1, q2);
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        q1.pop();
    }

    
    int top() {
        if (q1.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return q1.front();
    }

    // Check if the stack is empty
    bool empty() {
        return q1.empty();
    }
};

int main() {
    StackUsingQueues stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element: " << stack.top() << endl; // Output: 30
    stack.pop();

    cout << "Top element after pop: " << stack.top() << endl; // Output: 20
    stack.pop();

    cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << endl; // Output: No
    stack.pop();

    cout << "Is stack empty? " << (stack.empty() ? "Yes" : "No") << endl; // Output: Yes

    return 0;
}