#include <iostream>
using namespace std;

void exchange(int* x, int* y) {
    int past = *x;
    *x = *y;
    *y = past;
}

int main() {
    int a = 5;
    int b = 10;

    cout << "Before exchange:\n";
    cout << "a = " << a << ", b = " << b << endl;

    exchange(&a, &b);

    cout << "After exchange:\n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}