// EjercicioC-AntonMario-14-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream streamTemperaturas;
    double temperatura, sumTemperatura=0, avgTemperatura;
    int  countTemperatura = 0;

    streamTemperaturas.open("temperaturas.txt");

    if (streamTemperaturas.is_open()) {

        streamTemperaturas >> temperatura;

        while (temperatura != -1) {
            countTemperatura++;
            sumTemperatura += temperatura;
            streamTemperaturas >> temperatura;
        }

        avgTemperatura = sumTemperatura / countTemperatura;

        cout << "Temperatura promedia: " << avgTemperatura << "C";

    }
    else
        cout << "ERROR DE LECTURA!!!" << endl;

    return 0;
}