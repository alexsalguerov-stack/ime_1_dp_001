#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

int nodeCounter(Node* head) {
    int count = 0;
    Node* ongoing = head;

    while (ongoing != nullptr) {
        count++;
        ongoing = ongoing->next;
    }

    return count;
}

int main() {
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};

    n1->next = n2;
    n2->next = n3;

    cout << "Cantidad de nodos: " << nodeCounter(n1) << endl;

    return 0;
}