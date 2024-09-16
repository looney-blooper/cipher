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
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insertSorted(int val) {
        Node* newNode = new Node(val);

        if (!head || head->data >= val) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next && temp->next->data < val) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data;
            if (temp->next) cout << "->";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Insert values into the list in sorted order
    list.insertSorted(10);
    list.insertSorted(20);
    list.insertSorted(30);
    list.insertSorted(40);

    cout << "Original List: ";
    list.display();

    // Insert new value 25 while maintaining sorted order
    int value = 25;
    list.insertSorted(value);

    cout << "List after inserting " << value << ": ";
    list.display();

    return 0;
}
