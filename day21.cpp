//1
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void insertAtPosition(int p, int x) {
        Node* newNode = new Node(x);
        if (p == 0) {
            newNode->next = head;
            if (head) head->prev = newNode;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < p; i++) {
            if (!temp->next) break;  // If position exceeds list length, insert at the end
            temp = temp->next;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next) temp->next->prev = newNode;
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList list;

    // Insert initial values into the doubly linked list
    list.insertAtEnd(2);
    list.insertAtEnd(4);
    list.insertAtEnd(5);

    cout << "Initial Linked List: ";
    list.display();

    int p = 2, x = 6;
    list.insertAtPosition(p, x);

    cout << "After inserting " << x << " at position " << p + 1 << ": ";
    list.display();

    return 0;
}
//2
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Create a cycle at a given position (pos) for testing
    void createCycle(int pos) {
        if (pos < 0) return;

        Node* temp = head;
        Node* cycleNode = nullptr;
        int index = 0;

        while (temp->next) {
            if (index == pos) {
                cycleNode = temp;
            }
            temp = temp->next;
            index++;
        }

        if (cycleNode) {
            temp->next = cycleNode;  // Creating the cycle
        }
    }

    // Detect cycle in the linked list using Floyd's Cycle Detection Algorithm
    bool hasCycle() {
        if (!head) return false;

        Node* slow = head;
        Node* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;  // Cycle detected
        }

        return false;  // No cycle found
    }
};

int main() {
    LinkedList list;

    // Insert initial values into the linked list
    list.insertAtEnd(3);
    list.insertAtEnd(2);
    list.insertAtEnd(0);
    list.insertAtEnd(-4);

    // Creating a cycle at position 1
    int pos = 1;
    list.createCycle(pos);

    // Detect if there's a cycle
    if (list.hasCycle()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
