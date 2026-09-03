#include <iostream>
using namespace std;

int main() {
    int array[10];

    cout << "Ingresa 10 numeros:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> array[i];
    }

    for(int i = 0; i < 10 / 2; i++) {
        int temp = array[i];
        array[i] = array[9 - i];
        array[9 - i] = temp;
    }

    cout << "\nArreglo invertido:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << array[i] << " ";
    }

    return 0;
}