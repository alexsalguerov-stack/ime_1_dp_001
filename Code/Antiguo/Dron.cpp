#include <iostream>
using namespace std;

struct Dron {
    int id;
    float bateria;
};

void recargarReal(Dron &refmiDron) { //Crea refmiDron por copia desde miDron
    refmiDron.bateria = 100.0f; //Modifica directamente la RAM del main
}

int main () {
    Dron miDron = {1, 25.0f}; //Crea miDron
    recargarReal(miDron);
    
    cout << "Bateria: " << miDron.bateria << endl; //Imprime 100.0
    return 0;
}
