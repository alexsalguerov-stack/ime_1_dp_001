#include <iostream>
using namespace std;

int main() {
    int array[20];
    int count[6] = {0}; // Índices del 1 al 5 

 cout << "Ingresa 20 numeros (entre 1 y 5):" << endl;
    for(int i = 0; i < 20; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> array[i];

        // Validación opcional
    if(array[i] >= 1 && array[i] <= 5) {
        count[array[i]]++; // Aumenta el contador correspondiente
    } 
    else {
        cout << "Numero invalido. Intenta de nuevo." << endl;
            i--; // Repetir esa posición
    }
    }

    // Mostrar histograma
    cout << "\nHistograma de frecuencias:\n";
    for(int i = 1; i <= 5; i++) {
        cout << i << ": ";
        for(int j = 0; j < count[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}