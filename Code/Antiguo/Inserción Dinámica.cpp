#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void insertStart(Node*& head, int newValue) {
    Node* newNode = new Node{newValue, head};
    head = newNode;
}

void insertAtPosition(Node*& head, int newValue, int position) {
    if (position == 0) {
        insertStart(head, newValue);
        return;
    }

    Node* current = head;

    for (int i = 0; i < position - 1 && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr) return;

    Node* newNode = new Node{newValue, current->next};
    current->next = newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    insertStart(head, 20);
    insertStart(head, 10);

    insertAtPosition(head, 15, 1);

    printList(head);

    return 0;
}