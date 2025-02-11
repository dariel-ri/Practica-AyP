#include <iostream>
using namespace std;

/* Supongamos un reloj analógico (de agujas). Dada lo hora exacta (horas y
minutos), escriba un algoritmo que calcule el ángulo entre ambas agujas.
Por ejemplo, a las 3:00 el ángulo será 90 grados. A las 3:15 el ángulo será
7,5 grados */

int horas, minutos;
float angulo, anguloHora, anguloMinuto;

int main (){
    cout << "Escriba la hora: " << endl;
    cin >> horas;

    cout << "Escriba los minutos: " << endl;
    cin >> minutos;

    //Posicion de la aguja de los minutos (se mueve 360 grados cada 60 minutos): 360 / 60 = 6 
    anguloMinuto = minutos * 6;

    //Posicion de la aguja de las horas (se mueve 360 grados cada 12 horas): 360 / 12 = 30
    //Cada minuto hace que la aguja de las horas avance (grados por minuto para horas): 30 / 60 = 0.5
    anguloHora = (horas * 30) + (minutos * 0.5);

    //El ángulo entre las agujas es la diferencia absoluta entre las posiciones de las agujas
    angulo = abs (anguloHora - anguloMinuto);

    if (angulo > 180){
        angulo = 360 - angulo;
    }

    cout << "El angulo entre ambas agujas es: " << angulo << endl;

    return 0;
}