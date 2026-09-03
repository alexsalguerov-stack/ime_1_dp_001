#include <iostream>
using namespace std;

#define MAX 5

int line[MAX];
int front = 0;
int rear = -1;

void push(int valor) {
    if (rear == MAX - 1) {
        cout << "Overflow: Queue full\n";
    } else {
        rear++;
        line[rear] = valor;
    }
}

void pop() {
    if (front > rear) {
        cout << "Underflow: Queue empty\n";
    } else {
        cout << "Deleted element: " << line[front] << endl;
        front++;
    }
}

void show() {
    if (front > rear) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << line[i] << " ";
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