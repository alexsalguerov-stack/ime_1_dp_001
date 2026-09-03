#include <iostream>
#include <queue>
using namespace std;

struct Doc {
    int id_doc;
    string text;
};

int main() {
    queue<Doc> q;
    int option;

    do {
        cout << "\n1. Enviar documento\n";
        cout << "2. Imprimir documento\n";
        cout << "3. Ver pendientes\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> option;

        switch (option) {
            case 1: {
                Doc d;
                cout << "ID: ";
                cin >> d.id_doc;
                cin.ignore();
                cout << "Texto: ";
                getline(cin, d.text);

                q.push(d);
                break;
            }
            case 2: {
                if (!q.empty()) {
                    Doc d = q.front();
                    cout << "Imprimiendo ID: " << d.id_doc << endl;
                    cout << "Texto: " << d.text << endl;
                    q.pop();
                } else {
                    cout << "Cola vacia\n";
                }
                break;
            }
            case 3:
                cout << "Pendientes: " << q.size() << endl;
                break;
        }

    } while (option != 4);

    return 0;
}