// EjercicioE-AntonMario-primero-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;


int main()
{
    int n1, n2;
    bool isCreciente = true, isDescreciente = true;
    ifstream inData;
    inData.open("datos.txt");
    if (inData.is_open()) {
        if (inData) {
            inData >> n1;
            if (n1 != 0) {

            }

        }
        else
            cout << "FICHERO VACIO" << endl;
    }
    else
        cout << "ERROR DE LECTURA" << endl;

    return 0;
}