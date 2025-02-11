#include <iostream>
#include <math.h>
using namespace std;

/* Escriba un algoritmo que reciba como entrada los coeficientes A, B y C
de una ecuación de segundo grado (Ax²+Bx+C=0), e imprima por
pantalla los valores de x. Asuma que la ecuación siempre tiene solución
en números reales. Recuerde que la solución de una ecuación de segundo
grado viene dada por x =(−b±√b²−4ac)/2a */

int A, B, C;
float x1, x2;

int main (){
    cout << "Escriba el numero equivalente a 'A':  " << endl;
    cin >> A;

    cout << "Escriba el numero equivalente a 'B':  " << endl;
    cin >> B;

    cout << "Escriba el numero equivalente a 'C':  " << endl;
    cin >> C;

    x1 = (- B + sqrt (pow (B, 2) - 4 * A * C)) / (2 * A);
    x2 = (- B - sqrt (pow (B, 2) - 4 * A * C)) / (2 * A);

    cout << "Tu resultado de x1 es: " << x1 << endl;
    cout << "Tu resultado de x2 es: " << x2 << endl;

    return 0;
}