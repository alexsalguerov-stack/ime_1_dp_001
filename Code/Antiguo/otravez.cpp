#include <iostream>
#include <windows.h>

using namespace std;

// 1. Estados del Brazo
enum EstadoBrazo {
    ENCENDER,
    PEDIR_CAJA,
    DESPLAZAR_A_CAJA,
    SUJETAR,
    PEDIR_DESTINO,
    DESPLAZAR_A_DESTINO,
    SOLTAR,
    REPETIR_O_APAGAR,
    APAGADO
};

// 2. Estructura de coordenadas
struct Punto {
    int x, y, z;
};

struct BrazoRobotico {
    EstadoBrazo estadoActual = ENCENDER;
    Punto posicion = {0, 0, 0};
    Punto objetivo = {0, 0, 0};
    bool pinzaCerrada = false;

    // FUNCION PARA MOVERSE PASO A PASO
    void moverHaciaObjetivo() {
        while (posicion.x != objetivo.x ||
               posicion.y != objetivo.y ||
               posicion.z != objetivo.z) {

            if (posicion.x < objetivo.x) posicion.x++;
            else if (posicion.x > objetivo.x) posicion.x--;

            if (posicion.y < objetivo.y) posicion.y++;
            else if (posicion.y > objetivo.y) posicion.y--;

            if (posicion.z < objetivo.z) posicion.z++;
            else if (posicion.z > objetivo.z) posicion.z--;

            cout << "Posicion actual: ("
                 << posicion.x << ","
                 << posicion.y << ","
                 << posicion.z << ")" << endl;

            Sleep(300);
        }
    }

    void ejecutar() {
        switch (estadoActual) {
            
            case ENCENDER:
                cout << "SISTEMA INICIADO" << endl;
                posicion = {1, 1, 1};
                cout << "Posicion inicial establecida en (1,1,1)" << endl;
                estadoActual = PEDIR_CAJA;
                break;

            case PEDIR_CAJA:
                cout << "[PASO 2] Ingrese coordenadas de la CAJA:" << endl;
                cout << "X: "; cin >> objetivo.x;
                cout << "Y: "; cin >> objetivo.y;
                cout << "Z: "; cin >> objetivo.z;
                estadoActual = DESPLAZAR_A_CAJA;
                break;

            case DESPLAZAR_A_CAJA:
                cout << "Desplazando brazo hacia ("
                     << objetivo.x << ","
                     << objetivo.y << ","
                     << objetivo.z << ")..." << endl;

                moverHaciaObjetivo();

                estadoActual = SUJETAR;
                break;

            case SUJETAR:
                cout << "Sujetando la caja... (PINZA CERRADA)" << endl;
                pinzaCerrada = true;
                Sleep(1000);
                estadoActual = PEDIR_DESTINO;
                break;

            case PEDIR_DESTINO:
                cout << "Ingrese coordenadas de DESTINO:" << endl;
                cout << "X: "; cin >> objetivo.x;
                cout << "Y: "; cin >> objetivo.y;
                cout << "Z: "; cin >> objetivo.z;
                estadoActual = DESPLAZAR_A_DESTINO;
                break;

            case DESPLAZAR_A_DESTINO:
                cout << "Moviendo carga a ("
                     << objetivo.x << ","
                     << objetivo.y << ","
                     << objetivo.z << ")..." << endl;

                moverHaciaObjetivo();

                estadoActual = SOLTAR;
                break;

            case SOLTAR:
                cout << "Soltando la caja... (PINZA ABIERTA)" << endl;
                pinzaCerrada = false;
                Sleep(1000);
                estadoActual = REPETIR_O_APAGAR;
                break;

            case REPETIR_O_APAGAR:
                char respuesta;
                cout << "¿Desea mover otra caja? (s/n): " << endl;
                cin >> respuesta;

                if (respuesta == 's' || respuesta == 'S') {
                    estadoActual = PEDIR_CAJA; 
                } else {
                    cout << "Regresando a posicion inicial (1,1,1)..." << endl;

                    objetivo = {1, 1, 1};
                    moverHaciaObjetivo();

                    estadoActual = APAGADO;
                }
                break;

            case APAGADO:
                cout << "--- SISTEMA APAGADO ---" << endl;
                break;
        }
    }
};

int main() {
    BrazoRobotico miBrazo;

    while (miBrazo.estadoActual != APAGADO) {
    
        miBrazo.ejecutar();
    }

    return 0;
}
