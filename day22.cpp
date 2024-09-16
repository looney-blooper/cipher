//1
#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int maxSize;
    int* stackArray;

public:
    // Constructor to initialize the stack
    Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;  // Stack is initially empty
    }

    // Destructor to free the allocated memory
    ~Stack() {
        delete[] stackArray;
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == maxSize - 1;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow!" << endl;
            return;
        }
        stackArray[++top] = value;
    }

    // Function to pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return -1;
        }
        return stackArray[top--];
    }

    // Function to peek at the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return stackArray[top];
    }

    // Function to display the stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size = 5;
    Stack s(size);

    // Inserting elements into the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Displaying the stack
    cout << "Stack elements: ";
    s.display();

    // Popping an element and displaying the updated stack
    cout << "Popped element: " << s.pop() << endl;

    cout << "Stack after pop: ";
    s.display();

    return 0;
}
//2
#include <iostream>
using namespace std;

class Stack {
private:
    int top;
    int maxSize;
    int* stackArray;

public:
    // Constructor to initialize the stack
    Stack(int size) {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;  // Stack is initially empty
    }

    // Destructor to free the allocated memory
    ~Stack() {
        delete[] stackArray;
    }

    // Function to check if the stack is full
    bool isFull() {
        return top == maxSize - 1;
    }

    // Function to check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Function to push an element onto the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow!" << endl;
            return;
        }
        stackArray[++top] = value;
    }

    // Function to pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return -1;
        }
        return stackArray[top--];
    }

    // Function to display the stack elements from top to bottom
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        for (int i = top; i >= 0; i--) {
            cout << stackArray[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    Stack s(n);

    // Taking input from user and inserting values into the stack
    cout << "Enter " << n << " elements to push into the stack: ";
    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        s.push(value);
    }

    // Popping and displaying all elements
    cout << "Stack after popping all elements: ";
    while (!s.isEmpty()) {
        cout << s.pop() << " ";
    }
    cout << endl;

    return 0;
}
