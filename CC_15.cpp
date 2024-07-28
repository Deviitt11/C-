#include <iostream>
using namespace std;

int main() {
    int map[7][7] = {
        {0, 0, 1, 1, 0, 1, 0},
        {1, 0, 0, 1, 1, 0, 1},
        {0, 1, 0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0, 1, 0},
        {0, 1, 1, 0, 0, 1, 0},
        {0, 0, 1, 0, 0, 0, 1},
        {0, 1, 0, 0, 0, 0, 1}
    };

    /*
    Estás haciendo un juego.

    El mapa del juego se define como una matriz bidimensional, 
    que almacena valores 0 y 1.

    El 0 corresponde a la zona del mapa que está libre, 
    mientras que el 1 representa a un jugador en el mapa.

    Toma dos enteros como entrada, 
    el primero representa la fila, el segundo - la columna.

    A continuación, 
    se genera el valor correspondiente de la matriz del mapa.
    */

    int row, col;

    cin >> row;
    cin >> col;

    if(row >= 0 && row < 7 && col >= 0 && col <7) {
        cout << map[row][col];
    }

}