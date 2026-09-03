#include <iostream>
using namespace std;

struct DoubleNode {
    int value;
    DoubleNode* next;
    DoubleNode* prev;
};

void reversePrint(DoubleNode* tail) {
    DoubleNode* current = tail;

    while (current != nullptr) {
        cout << current->value << " <- ";
        current = current->prev;
    }
    cout << "NULL" << endl;
}

int main() {
    DoubleNode* d1 = new DoubleNode{100, nullptr, nullptr};
    DoubleNode* d2 = new DoubleNode{200, nullptr, d1};
    DoubleNode* d3 = new DoubleNode{300, nullptr, d2};

    d1->next = d2;
    d2->next = d3;

    reversePrint(d3);

    return 0;
}