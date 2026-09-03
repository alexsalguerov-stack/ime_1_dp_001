#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<char> pile;
    string sequence;

    cout << "Ingresar secuencia: ";
    getline(cin, sequence);

    for (char c : sequence) {
        if (c == '(') {
            pile.push(c);
        } else if (c == ')') {
            if (pile.empty()) {
                cout << "Secuencia invalida\n";
                return 0;
            }
            pile.pop();
        }
    }

    if (pile.empty()) {
        cout << "Secuencia valida\n";
    } else {
        cout << "Secuencia invalida\n";
    }

    return 0;
}