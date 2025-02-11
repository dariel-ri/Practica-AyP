#include <iostream>
#include <math.h>
using namespace std;

/* Escriba un algoritmo que dadas las longitudes de los catetos de un triángulo
rectángulo calcule la longitud de su hipotenusa */

float co, ca, h;

int main (){
    cout << "Escriba el CO: " << endl;
    cin >> co;

    cout << "Escriba el CA: " << endl;
    cin >> ca;
    
    h = sqrt (pow (co, 2) + pow (ca, 2));

    cout << "La longitud de su hipotenusa es: " << h << endl;

    return 0;
}