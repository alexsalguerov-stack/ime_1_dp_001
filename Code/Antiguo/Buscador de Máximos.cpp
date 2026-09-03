#include <iostream>
using namespace std;

int main() {
    int array[5] = {8, 3, 15, 2, 10};

    int *ptr = array;
    int max = *ptr;

     for (int i = 0; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    cout << "Max value: " << max << endl;

    return 0;
}