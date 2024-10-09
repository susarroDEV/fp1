// EjercicioC-tema2-Anton-14-G.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int edad = 0;
    short int numeroDiasTrabajados = 0;
    float sueldoBase = 0;
    char inicial = ' ';
    bool jubilado = false;
    string nombre = "";
    // Entrada de datos
    cout << "Teclea los siguientes datos, en el orden indicado. " << endl;
    cout << "Nombre. Inicial 1er apellido. Jubilado (1=jubilado.0=no jubilado). Ultima nomina, Numero de dias trabajados, Edad." << endl;
    cin >> nombre;
    cin >> inicial;
    cin >> jubilado;
    cin >> sueldoBase;
    cin >> numeroDiasTrabajados;
    cin >> edad;
    cout << nombre << ", " << inicial << ", " << jubilado << ", " << sueldoBase << ", " << numeroDiasTrabajados << ", " << edad << endl;

    return 0;
}
