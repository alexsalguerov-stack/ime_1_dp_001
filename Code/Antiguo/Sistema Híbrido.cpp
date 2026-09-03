#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main() {
    int data[10] = {45, 78, 95, 60, 102, 30, 88, 120, 55, 99};

    queue<int> queue;
    stack<int> error;

    for (int i = 0; i < 10; i++) {
        queue.push(data[i]);
    }

    while (!queue.empty()) {
        int value = queue.front();
        queue.pop();

        if (value > 90) {
            error.push(value);
        }
    }

    cout << "Historial de errores del mas reciente al mas antiguo:\n";
    while (!error.empty()) {
        cout << error.top() << endl;
        error.pop();
    }

    return 0;
}