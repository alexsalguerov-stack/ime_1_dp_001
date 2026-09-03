/*EJERCICIO 1: LA LÁMPARA INTELIGENTE (TAD)
Redactar la especificación lógica e implementar el comportamiento de una lámpara.
- Atributos: estado (enum), energía (bool), brillo (int).
- Regla: La lámpara solo puede encenderse si está conectada (Precondición).*/

#include 
using namespace std;

struct TermometroDigital {
private:
    // --- ZONA PRIVADA (IMPLEMENTACIÓN) ---
    float lecturaCelsius;
    float ajusteCalibracion;

public:
    // --- ZONA PÚBLICA (INTERFAZ) ---
    void calibrar(float valorAjuste) { 
        ajusteCalibracion = valorAjuste; 
    }
    
    void leerSensor(float nuevoValor) { 
        lecturaCelsius = nuevoValor; 
    }
    
    float obtenerTemperatura() { 
        return lecturaCelsius + ajusteCalibracion; 
    }

    void inicializar() {// inicializar mi lampara
        lecturaCelsius = 0.0;
        ajusteCalibracion = 0.0;
    }
};

int main() {
    TermometroDigital miTermo;
    miTermo.calibrar(-0.5);
    miTermo.leerSensor(24.2);
    cout << "Temperatura Final: " 
        << miTermo.obtenerTemperatura() 
        << " C" << endl;
    return 0;
}