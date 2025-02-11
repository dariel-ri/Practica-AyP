#include <iostream>
using namespace std;

/* Escriba un algoritmo que lea un número de cuatro dígitos y muestre en
pantalla el número escrito en reverso. Por ejemplo, si el número es 4678, la
salida debería ser 8764 */

int n, n1, n2, n3, n4, copia;

int main (){
    cout << "Escriba un numero de 4 digitos para voltearlo: " << endl;
    cin >> n;

    if (n <= 999 || n > 9999){
        cout << "No es de 4 digitos." << endl;

        return 1;
    }

    copia = n;

    n1 = copia % 10;
    copia = copia / 10;
    n2 = copia % 10;
    copia = copia / 10;
    n3 = copia % 10;
    copia = copia / 10;
    n4 = copia % 10;

    copia = n1 * 1000 + n2 * 100 + n3 * 10 + n4;

    cout << "Su numero al reves es: " << copia << endl;

    return 0;
}