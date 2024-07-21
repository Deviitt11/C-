#include <iostream>
using namespace std;

int main() {
    // Matriz de letras del alfabeto
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    
    // Solicita al usuario que introduzca un número
    int index;
    cin >> index;
    
    // Verifica si el índice está dentro del rango válido
    if (index >= 0 && index <= 25) {
        // Muestra la letra correspondiente
        cout << letters[index] << endl;
    } else {
        // Mensaje de error si el índice no es válido
        cout << "Índice fuera de rango. Por favor, ingrese un número entre 0 y 25." << endl;
    }

    return 0;
}
