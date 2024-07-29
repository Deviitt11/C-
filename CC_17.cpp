#include <iostream>
using namespace std;

int main() {

    /*
    Completa el código para declarar la matriz nums y 
    tomar los elementos de la matriz como entrada.

    La matriz puede ser de cualquier tamaño variable, 
    por lo que la primera entrada debe ser el size de la matriz, 
    seguido de sus elementos.
    */

    int tam;
    cin >> tam; //tamaño de la matriz
    // tu código va aquí
    
    // creo la matriz
    int nums[tam];

    for (int i = 0; i < tam; i++) {
        cin >> nums[i];
    }

    int max = nums[0];
    for(int i=0; i<tam; i++) {
        if(nums[i]>max)
            max = nums[i];
    }
    cout << max;

}