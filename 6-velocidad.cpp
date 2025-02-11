#include <iostream>
using namespace std;

/* Escriba un algoritmo que dados la distancia recorrida por un objeto y el
tiempo que tomó el objeto en recorrer esa distancia, calcule su velocidad */

float d, t, v;

int main (){
    cout << "Escriba la distancia recorrida del objeto: " << endl;
    cin >> d;

    cout << "Escriba el tiempo en el que tomo recorriendo: " << endl;
    cin >> t;

    v = d / t;

    cout << "La velocidad es: " << v << endl;

    return 0;
}