#include <iostream>
using namespace std;

#define MAX 5

int pile[MAX];
int top = -1;

void push(int valor) {
    if (top == MAX - 1) {
        cout << "Overflow: Full stack\n";
    } else {
        top++;
        pile[top] = valor;
    }
}

void pop() {
    if (top == -1) {
        cout << "Underflow: Empty stack\n";
    } else {
        cout << "Elemento eliminado: " << pile[top] << endl;
        top--;
    }
}

void show() {
    if (top == -1) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << pile[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    show();

    pop();
    show();

    return 0;
}