#include <iostream>
using namespace std;   

void intercambiar(int* a, int* b) {
    int temp = *a; // Guarda el valor apuntado por a
    *a = *b;       // Asigna el valor apuntado por b a a
    *b = temp;     // Asigna el valor guardado en temp a b
};

int main(){
    int a = 5, b = 10;    
    cout << "Antes de intercambiar: a = " << a << ", b = " << b << endl; // Imprime a=5, b=10
    cout << "Direccion de a: " << &a << ", Direccion de b: " << &b << endl; // Imprime las direcciones de a y b

    intercambiar(&a, &b); // Se pasan las direcciones de a y b para que la función pueda modificar sus valores

    cout << "Despues de intercambiar: a = " << a << ", b = " << b << endl; // Imprime a=10, b=5
    cout << "Direccion de a: " << &a << ", Direccion de b: " << &b << endl; // Imprime las mismas direcciones de a y b, confirmando que se modificaron los valores en esas ubicaciones
    return 0;
};