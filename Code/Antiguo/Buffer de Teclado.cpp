#include <iostream>
using namespace std;

#define TAM 5

struct Round_queue {
    char buffer[TAM];
    int front;
    int back;
    int metre;
};

void start(Round_queue &q) {
    q.front = 0;
    q.back = -1;
    q.metre = 0;
}

bool Full(Round_queue &q) {
    return q.metre == TAM;
}

bool Empty(Round_queue &q) {
    return q.metre == 0;
}

void enqueue(Round_queue &q, char dato) {
    if (!Full(q)) {
        q.back = (q.back + 1) % TAM;
        q.buffer[q.back] = dato;
        q.metre++;
    } else {
        cout << "Full Buffer \n";
    }
}

char dequeue(Round_queue &q) {
    if (!Empty(q)) {
        char datum = q.buffer[q.front];
        q.front = (q.front + 1) % TAM;
        q.metre--;
        return datum;
    }
    return '\0';
}

void Display(Round_queue &q) {
    for (int i = 0; i < TAM; i++) {
        cout << q.buffer[i] << " ";
    }
    cout << endl;
}

int main() {
    Round_queue q;
    start(q);

    for (int i = 0; i < 5; i++) {
        enqueue(q, 'A' + i);
    }
    Display(q);

    enqueue(q, 'Z');

    dequeue(q);
    dequeue(q);

    enqueue(q, 'X');
    enqueue(q, 'Y');

    Display(q);

    return 0;
}