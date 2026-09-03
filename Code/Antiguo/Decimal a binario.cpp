#include <iostream>

using namespace std;

int decimal_a_binario(int decimal) {
    string binario = "";
    
    while (decimal > 0) {
        binario = to_string(decimal % 2) + binario; // Obtener el bit menos significativo
        decimal /= 2; // Dividir el número por 2
    }
    
    return binario.empty() ? "0" : binario; // Si el número es 0, retornar "0"
}