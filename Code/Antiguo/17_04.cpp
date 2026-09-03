#include <iostream>


int num = 10;
int *ptrNum; // el tipo coincide (int) porque el tipo del apuntador indica cuantos bytes se deben leer para obtener el valor (en este caso, 4 bytes para un int)

ptrNum = &num; // se asigna la dirección de num a ptrNum
//desreferencia imprime 10
cout << "Valor: " << *ptrNum << endl; // se desreferencia ptrNum para obtener el valor de num

//imprime la direccion de num (ej. 0x7ffd...)
cout << "Direccion: " << ptrNum << endl; // se imprime la dirección almacenada en ptrNum

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

struct Persona {
    char nombre[20];
    int edad;
};

Persona sujeto = {"Juan", 25};
Persona *ptrSujeto = &sujeto; //Apunta al inicio de la estructura sujeto

//Acceso directo y elegante con el operador flecha
ptrSujeto->edad = 26;

cout << "Nombre: " << ptrSujeto->nombre << ", Edad: " << ptrSujeto->edad << endl; // se accede a los miembros de sujeto a través de ptrSujeto usando el operador flecha

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//Seguro el puntero nace "vacio"
int *ptrSeguro = nullptr; // Inicialización segura a nullptr

//Siempre verificar antes de usar el puntero
if (ptrSeguro != nullptr) {
    *ptrSeguro = 42; //Solo si es valido
} 
 
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    int* ptr = numeros; // El nombre del arreglo es un puntero al primer elemento
    
    cout << "Elemento 0: " << *ptr << "(Direccion: " << ptr << ")" << endl; // Imprime 10

    ptr++; // Avanza el puntero al siguiente elemento del arreglo
    cout << "Elemento 1: " << *ptr << "(Direccion: " << ptr << ")" << endl; // Imprime 20

    ptr += 2; // Avanza el puntero dos posiciones (ahora apunta al elemento 3)
    cout << "Elemento 3: " << *ptr << "(Direccion: " << ptr << ")" << endl; // Imprime 40

    //Acceso directo a un elemento usando aritmetica
    cout << "Elemento 4 (via offset): " << *(numeros + 4) << endl; // Imprime 50
    return 0;
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

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