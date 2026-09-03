#include <iostream>
#include <cstring>
using namespace std;

#define MAX 100

struct Pile {
    char data[MAX];
    int top;
};

void start(Pile &p) {
    p.top = -1;
}

bool Full(Pile &p) {
    return p.top == MAX - 1;
}

bool Empty(Pile &p) {
    return p.top == -1;
}

void push(Pile &p, char c) {
    if (!Full(p)) {
        p.data[++p.top] = c;
    }
}

char pop(Pile &p) {
    if (!Empty(p)) {
        return p.data[p.top--];
    }
    return '\0';
}

int main() {
    Pile p;
    start(p);

    char word[MAX];
    cout << "Ingresa una palabra: ";
    cin >> word;

    for (int i = 0; i < strlen(word); i++) {
        push(p, word[i]);
    }

    cout << "Trama corregida: ";
    while (!Empty(p)) {
        cout << pop(p);
    }

    return 0;
}