#include <iostream>
using namespace std;

/* Haga un algoritmo que imprima “Capicua” si un número de entrada de 5
dígitos es capicua, o “No lo es” en caso contrario. Un número es capicua
si se escribe igual al derecho y a revés. Por ejemplo, 545 es un número
capicua */

int n, n1, n2, n3, n4, n5, copia; 

int main (){
    cout << "Escriba un numero de 5 digitos: " << endl;
    cin >> n;

    if (n <= 9999 || n > 99999){ 
        cout << "No es de 5 digitos." << endl;

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
    copia = copia / 10;
    n5 = copia % 10;

    copia = n1 * 10000 + n2 * 1000 + n3 * 100 + n4 * 10 + n5;


    if (copia == n){
        cout << "Capicua." << endl;
    	
        return 1;
        
    }   else {
            cout << "No lo es." << endl;
        }

    return 0;
}