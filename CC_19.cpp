#include <iostream>
using namespace std;

/*
La función bot() tiene que tomar 2 parámetros: un integer llamado mode, y un string llamado name.

El código dado toma los valores de los argumentos como entrada y los pasa a la función bot(). 

Modifica la función bot() para tomar los 2 parámetros dados y generar la salida usando la siguiente lógica:

En caso de que mode sea 1, la salida debería ser "Welcome, name!", donde name es el valor del parámetro.
En caso de que mode sea 2, la salida debería ser "Goodbye, name!".
Si mode tiene cualquier otro valor, la salida debería ser "Try again".
*/

void bot(int mode, string name) {
    switch (mode) {
    case 1:
        cout << "Welcome, " << name << "!" << endl;
        break;
    case 2:
        cout << "Goodbye, "<< name << "!" << endl;
        break;
    default:
        cout << "Try again" << endl;
        break;
    }
}
int main() {
    int mode;
    cin >> mode;

    string name;
    cin >> name;

    bot(mode, name);
}

