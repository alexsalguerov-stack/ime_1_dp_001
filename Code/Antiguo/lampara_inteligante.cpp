#include <iostream>
using namespace std;

// Estado de la lámpara
enum Lampst {on,off};

// TAD - LamparaInteligente
class LamparaInt {
private:
    Lampst estado;
    bool conectada;
    int brillo;

public:
    // Constructor
    LamparaInt() {
        estado = off;
        conectada = false;
        brillo = 0;
    }

    // Conectar la lámpara
    void conectar() {
        conectada = true;
        cout << "Lampara conectada a la corriente.\n";
    }

    // Desconectar la lámpara
    void desconectar() {
        conectada = false;
        estado = off; // Estado seguro
        cout << "Lampara desconectada y apagada automaticamente.\n";
    }

    // Encender la lámpara
    void encender() {
        if (conectada) {
            estado = on;
            cout << "Lampara encendida.\n";
        } else {
            cout << "Error: la lampara no esta enchufada.\n";
        }
    }

    // Apagar la lámpara
    void apagar() {
        estado = off;
        cout << "Lampara apagada.\n";
    }

    // Brillo
    void cambiarBrillo(int nuevoBrillo) {
        if (nuevoBrillo >= 0 && nuevoBrillo <= 100) {
            brillo = nuevoBrillo;
            cout << "Brillo ajustado a " << brillo << ".\n";
        } else {
            cout << "Error: el brillo debe estar entre 0 y 100.\n";
        }
    }

    // Estado actual
    void Status() {
        cout << "\n--- Estado de la Lampara ---\n";
        cout << "Estado: " << (estado == on ? "On" : "Off") << endl;
        cout << "Enchufada: " << (conectada ? "SI" : "NO") << endl;
        cout << "Nivel de brillo: " << brillo << endl;
        cout << "---------------------------\n";
    }
};

int main() {
    LamparaInt lampara;

    lampara.Status();

    lampara.encender();        // No debería encender
    lampara.conectar();
    lampara.encender();        // Ahora sí
    lampara.cambiarBrillo(75);
    lampara.Status();

    lampara.desconectar();     // Se apaga automáticamente
    lampara.Status();

    return 0;
}