// declaracion int* ptrEntero;
//inicializacion int valor= 10;
//               ptrEntero = &valor;
//desreferenciacion *ptrEntero; (accede al 10)

//

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int num = 5; //variable que almacena un valor entero
int* ptrNum; //puntero el asterisco indica que es un puntero a un entero y almacenala direccion de memoria
char letra = 'A'; //variable que almacena un valor de tipo char
char* prtChar; //puntero a char que almacenara la direccion de memoria de


int main() {
    ptrNum = &num; //obtiene y almacena la direccion del calor contenido en num
    prtChar = &letra; //obtiene y almacena la direccion del calor contenido en letra

    cout << "Valor de num: " << num << endl; //imprime el valor de num
    cout << "Direccion de memoria de num: " << ptrNum << endl; //imprime la direccion de memoria almacenada en ptrNum o del dato num
    cout << "Valor apuntado por ptrNum: " << *ptrNum << endl; //imprime de nuevo el valor de num pero a traves del puntero ptrNum, el asterisco indica que se accede al valor almacenado en la direccion de memoria apuntada por ptrNum
    
    cout << "Valor de letra: " << letra << endl; //imprime el valor de letra
    cout << "Direccion de memoria de letra: " << (void*) prtChar << endl; //imprime la direccion de memoria almacenada en prtChar o del dato letra
    cout << "Valor apuntado por prtChar: " << *prtChar << endl; //imprime de nuevo el valor de letra pero a traves del puntero prtChar, el asterisco indica que se accede al valor almacenado en la direccion de memoria apuntada por prtChar
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
    float temperatura = 20.0f;
    float* ptr = &temperatura; //ptr almacena la direccion de memoria de temperatura

    cout << "Temperatura: " << temperatura << endl; //imprime el valor de temperatura
    cout << "direccion" << ptr << " valor: " << *ptr << endl; //imprime la direccion de memoria almacenada en ptr o del dato temperatura
    *ptr = 36.5f; //Modificacion directa via desreferenciacion
    cout << "Nueva temperatura: " << temperatura << endl; //imprime el nuevo valor de temperatura que se ha modificado a traves del puntero ptr
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

