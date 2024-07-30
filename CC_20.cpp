#include <iostream>
using namespace std;

/*
Crea la función toSeconds(), que tome los días como parámetro, 
calcule y devuelva(returns) el número de segundos.
*/

//define la función toSeconds() aquí
int toSeconds(int days) {
    return days*24*60*60;
}

int main() {
    int days;
    cin >> days;

    int seconds = toSeconds(days);
    cout << seconds;
}