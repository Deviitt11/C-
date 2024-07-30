#include <iostream>
using namespace std;

/*
Sobrecarga la función dada toSeconds() para tomar double days 
como parámetro y devolver el número de segundos comodouble.
*/

int toSeconds(int days) {
    return days*24*60*60;
}

double toSeconds(double days) {
    return days*24*60*60;
}

int main() {
    double days;
    cin >> days;

    double seconds = toSeconds(days);
    cout << seconds;

    cout << endl;

    int days2;
    cin >> days2;

    int seconds2 = toSeconds(days2);
    cout << seconds2;
}