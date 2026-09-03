#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

int getMaxValue(Node* head) {
    if (head == nullptr) return -1;

    int max_value = head->value;
    Node* current = head->next;

    while (current != nullptr) {
        if (current->value > max_value) {
            max_value = current->value;
        }
        current = current->next;
    }

    return max_value;
}

int main() {
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{50, nullptr};
    Node* n3 = new Node{30, nullptr};

    n1->next = n2;
    n2->next = n3;

    cout << "Valor maximo: " << getMaxValue(n1) << endl;

    return 0;
}