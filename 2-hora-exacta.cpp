#include <iostream>
using namespace std;

/* Cree un algoritmo que tome como entrada la hora exacta (horas, minutos,
segundos y AM/PM) e indique el número de segundos transcurridos durante
ese día */

int horas, minutos, segundos, ampm, AM, PM, segundosTranscurridos;

int main (){

    cout << "Ingrese la hora del dia: " << endl;
    cin >> horas;

    cout << "Ingrese los minutos: " << endl;
    cin >> minutos;

    cout << "Ingrese los sengundos: " << endl;
    cin >> segundos;

    cout << "Ingrese si es AM/PM: " << endl;
    cin >> ampm;

    if (ampm == PM && horas != 12){
        horas = horas + 12;

    }   else if (ampm == AM && horas == 12){
            horas = 0;

        }

    segundosTranscurridos = (horas * 60 + minutos) * 60;

    cout << "Los segundos transcurridos son: " << segundosTranscurridos << endl;
    
    return 0;
}