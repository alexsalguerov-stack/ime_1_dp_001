#include <iostream>
#include <vector>  

using namespace std;
//8    4   2   1
//2^3 2^2 2^1 2^0
//1  0   1   0

// 8+0+2+0=10

int binario_a_decimal(string binario) {
    int decimal = 0;
    int potencia = 1; // 2^0

    for (int i = binario.size() - 1; i >= 0; i--) {
        decimal += binario[i] * potencia;
        potencia *= 2; // Incrementar la potencia de 2
    }

    return decimal;
}

//Hacer un programa que le demos 1 numero inicial decimal y un numero final decimal y el programa nos muestre los numeros binarios dentro de ese rango.