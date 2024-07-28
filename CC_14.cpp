#include <iostream>
using namespace std;

int main() {
    double prices[] = {6.99, 8.5, 42.9, 105.4, 42, 98.1, 2.39, 1.99, 68.76, 9.99, 33.67, 105, 99, 67, 24.56, 0.2, 59.87, 77.2};
    
    /*
    Estás haciendo una app para un portal de compras online. 

    El código dado declara una matriz, que almacena los precios de un pedido.

    Es necesario completar el código para calcular y generar el total del pedido.
    */

   double total = 0;

   for (double price: prices) {
    total += price;
   }

   cout << total;
   
}