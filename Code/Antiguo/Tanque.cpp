#include <iostream>
#include <windows.h>
using namespace std;

struct TanqueIndustrial {
    enum Estado { VACIO, LLENANDO, LLENO, ALERTA }; 
    Estado estado = VACIO;

    int nivelAgua = 0;
    int limiteMax = 100;
    int limiteSeguridad = 110;

    void actualizar() {
        switch (estado) {
            case VACIO:
                cout << "[ESTADO:VACIO] Nivel actual: " << nivelAgua << endl;
                if (nivelAgua < limiteMax) {
                    estado = LLENANDO;
                }
                break;

            case LLENANDO:
                cout << "[ESTADO:LLENANDO] Nivel actual: " << nivelAgua << endl;
                nivelAgua += 10; // Simula el llenado
                if (nivelAgua >= limiteSeguridad) {
                    estado = ALERTA;
                } else if (nivelAgua >= limiteMax) {
                    cout << "¡Nivel máximo alcanzado!" << endl;
                    estado = LLENO;
                }
                break;

            case LLENO:
                cout << "[ESTADO:LLENO] Nivel actual: " << nivelAgua << endl;
                if (nivelAgua < limiteMax) {
                    estado = LLENANDO;
                }
                else if (nivelAgua >= limiteSeguridad) {
                    estado = ALERTA;
                }
                break;

            case ALERTA:
                cout << "[ESTADO:ALERTA] Nivel actual: " << nivelAgua << " - ¡Nivel de seguridad excedido!" << endl;
                if (nivelAgua < limiteSeguridad && nivelAgua >= limiteMax) {
                    estado = LLENANDO;
                }
                break;
        }
    }
}

int main() {
    TanqueIndustrial miTanque;
    cout << "Iniciando simulación del tanque industrial:" << endl;
    for (int i = 0; i < 15; i++) {
        miTanque.actualizar();
    }
    return 0;
}
