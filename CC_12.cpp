#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int suma = 0;
    /* app que calcule la suma de los números del 1 al N, 
    donde N se toma de entrada.
    */
   for (int i = 1; i <= n; i++) {
    suma += i;
   }
   
   cout << suma;
}