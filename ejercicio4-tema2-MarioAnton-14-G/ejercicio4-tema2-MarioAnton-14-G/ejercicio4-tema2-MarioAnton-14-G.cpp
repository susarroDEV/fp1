// ejercicio4-tema2-MarioAnton-14-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const int segundosHora = 3600;
    const int segundosMinuto = 60;
    int segundosTotales,horas,minutos,segundos;

    cout << "Introduzca numero de segundos: ";
    cin >> segundosTotales;

    horas = segundosTotales / segundosHora;
    minutos = segundosTotales % segundosHora / segundosMinuto;
    segundos = segundosTotales % segundosMinuto;

    cout << segundosTotales << " segundos equivalen a " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos";
    
    return 0;
}