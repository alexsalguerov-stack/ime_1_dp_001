#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

bool searchValue(Node* head, int target) {
    Node* current = head;

    while (current != nullptr) {
        if (current->value == target) {
            return true;
        }
        current = current->next;
    }

    return false;
}

int main() {
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};

    n1->next = n2;

    cout << (searchValue(n1, 20) ? "Encontrado" : "No encontrado") << endl;

    return 0;
}