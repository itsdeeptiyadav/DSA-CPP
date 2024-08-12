#include <iostream>

using namespace std;

// Node class represents each element in the stack
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Stack class implements the stack functionality using a linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Push operation to add an element to the top of the stack
    void push(int data) {
        Node* newNode = new Node(data);
        if (top == nullptr) {
            top = newNode;
        } else {
            newNode->next = top;
            top = newNode;
        }
        cout << data << " pushed onto stack\n";
    }

    // Pop operation to remove the top element from the stack
    int pop() {
        if (top == nullptr) {
            cout << "Stack underflow\n";
            return -1;
        } else {
            Node* temp = top;
            top = top->next;
            int poppedData = temp->data;
            delete temp;
            cout << poppedData << " popped from stack\n";
            return poppedData;
        }
    }

    // Peek operation to return the top element without removing it
    int peek() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return -1;
        } else {
            return top->data;
        }
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Destructor to free memory
    ~Stack() {
        while (top != nullptr) {
            pop();
        }
    }
};

int main() {
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.pop();

    cout << "Top element is " << stack.peek() << endl;

    // stack.pop();
    // stack.pop();
    // stack.pop();

    // if (stack.isEmpty()) {
    //     cout << "Stack is empty\n";
    // } else {
    //     cout << "Stack is not empty\n";
    // }

    // return 0;
}
