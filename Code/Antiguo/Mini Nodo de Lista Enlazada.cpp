#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* n1 = new Node();
    Node* n2 = new Node();
    n1->next = n2;
    n2->next = nullptr;
    return 0;
}