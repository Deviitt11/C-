#include <iostream>
#include <cmath> // Para usar fmod
using namespace std;

int main() {
    // el saldo de tu cuenta
    auto balance = 2452.4;
    // precio por cada cuaderno
    auto price = 259.99;

    // Tarea: calcule el número de portátiles que puede pagar y envíelo.
    // Sugerencia: utilice un número entero para almacenar el resultado.
    int comp = balance / price;

    // Tarea: calcule el monto restante en su cuenta después de la compra y envíelo a una nueva línea.
    // Sugerencia: calcule el precio total de la compra y luego réstelo del saldo.
    auto remain = fmod(balance, price);

    cout << "Numero de PCs: " << comp << endl;
    cout << "Dinero restante: " << remain;

}
