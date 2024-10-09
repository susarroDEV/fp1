// tema-2-ej-15-AntonMario-14-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double examen, proyecto, actividades, notaFinal;

    cout << "Introduzca nota de examen: ";
    cin >> examen;
    cout << "Introduzca nota de proyecto: ";
    cin >> proyecto;
    cout << "Introduzca nota de actividades: ";
    cin >> actividades;
    
    if (examen >= 5) {
        if (proyecto >= 5) {
            notaFinal = (examen * 3.0 + proyecto + actividades) / 5.0;

            cout << "Nota Final:" << notaFinal << endl;
        }
        else {
            cout << "Ha suspendido proyecto" << endl;
        }
    }
    else {
        cout << "Ha suspendido examen" << endl;
    }

    return 0;
}