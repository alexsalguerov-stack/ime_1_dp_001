#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

void freeList(Node*& head) {
    Node* current = head;

    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    head = nullptr;
}

int main() {
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};

    n1->next = n2;

    freeList(n1);

    if (n1 == nullptr)
        cout << "Lista liberada correctamente" << endl;

    return 0;
}