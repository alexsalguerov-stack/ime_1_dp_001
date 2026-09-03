#include <iostream>
using namespace std;

struct RegistroControl {
    
// contenedor 1 (1 byte/ 8bits)  
unsigned char motor_on : 1; // bit 0
unsigned char diereccion : 1; // bit 1
unsigned char velocidad : 5; // bits 2-6

unsigned char modo : 3;
//este campo de 3 bits NO cabe en el bit restante (bit7).
//Salta al Conenedor 2 (siguiente byte).

};

int main() {
    RegistroControl reg;

    //MODIFICACION: Se usan como variables normales
    reg.motor_on = 1; // Encender el motor
    reg.diereccion = 0; // Sentido horario
    reg.velocidad = 25; // Error logico: 25 no cabe en 5 bits (max 31)
                        // C guardara 
}