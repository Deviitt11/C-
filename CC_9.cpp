#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;

    /* tipos de café:
    1. Espresso
    2. Americano
    3. Cappuccino
    4. Latte
    */

    switch (choice) {
    case 1:
        cout << "Espresso";
        break;
    case 2:
        cout << "Americano";
        break;
    case 3:
        cout << "Cappuccino";
        break;
    case 4:
        cout << "Latte";
        break;
    default:
        break;
    }
}