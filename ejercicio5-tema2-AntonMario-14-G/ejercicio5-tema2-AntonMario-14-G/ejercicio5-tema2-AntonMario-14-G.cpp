// ejercicio5-tema2-AntonMario-14-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
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

    notaFinal = examen * 3.0 / 5 + proyecto / 5 + actividades / 5;

    cout << "Nota Final:" << notaFinal << endl;

    return 0;
}