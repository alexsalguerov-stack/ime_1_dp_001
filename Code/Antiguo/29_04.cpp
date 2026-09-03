#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo n1, n2;

    n1.dato = 10;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main(){

Nodo* p = new Nodo();                                                               //heap: bloque anonimo
p->dato = 20;                                                                       //accceso a los miembros del nodo con flecha
p->siguiente = nullptr;

cout << "Dato en nodo anonimo ("<< p <<"): " << p->dato << endl;                    //acceso a dato del nodo anonimo
cout << "Apuntador p: " << p << endl;                                               //mostrar valor del puntero p despues de asignar nullptr

delete p;                                                                           //liberar memoria del nodo
p = nullptr;                                                                        //evitar puntero colgante

cout << "Dato en nodo anonimo despues de liberar memoria: " << p->dato << endl;     //acceso a dato del nodo anonimo despues de liberar memoria
cout << "Apuntador p despues de liberar memoria: " << p << endl;                    //mostrar valor del puntero p despues de liberar memoria

cin.get();                                                                          //esperar a que el usuario presione Enter antes de cerrar la consola
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main() {
    Nodo n1, n2;

    n1.dato = 10;
}

//---------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

int main(){
    //Creacion de un nodo en el heap
    //Se usa new para asignar memoria dinamica para un nodo(espacio en la RAM)
    
}