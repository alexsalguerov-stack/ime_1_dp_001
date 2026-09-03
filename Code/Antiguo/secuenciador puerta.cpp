#include <iostream>
using namespace std;

enum EstadoPuerta {
    CERRADA,
    ABRIENDO,
    ABIERTA,
    CERRANDO
};

struct SistemaPuerta{
    EstadoPuerta miPuerta = CERRADA;
    bool sensorPresencia = false;
    bool finCarreraAbierto = false;
    bool finCarreraCerrado = true;
}

void controlPuerta() {
    EstadoPuerta miPuerta = CERRADA;
    bool sensorPresencia = false;

 //Estructura de control: El "cerebro" del secuenciador
    switch (miPuerta) {
        case CERRADA:
            if (sensorPresencia) {
 //Control determinista de actuadores
                cout << "Activando Motor: Sentido Apertura" << std::endl;
                miPuerta = ABRIENDO;
            }
            break;
        case ABRIENDO:
            if (finCarreraAbierto) {
                cout << "Deteniendo Motor: Puerta en el tope" << std::endl;
                miPuerta = ABIERTA;
            }
            break;
 // ... otros estados
    }
}

int main() {
    SistemaPuerta PuertaEntrada;
    cout << "Simulacion de puerta"<< endl;
    cout << "Movimiento detectado sensor = true" << endl;
    

    return 0;
}