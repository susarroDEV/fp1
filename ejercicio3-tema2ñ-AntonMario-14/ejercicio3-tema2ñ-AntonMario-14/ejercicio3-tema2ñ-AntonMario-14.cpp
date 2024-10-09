// ejercicio3-tema2ñ-AntonMario-14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    double farenheit,celsius;
    
    cout << "Introduzca los grados Fahrenheit: ";
    cin >> farenheit;

    celsius = 5.0 / 9 * (farenheit - 32);

    cout << farenheit << "F = " << celsius << "C\n";

    system("pause");
    
    return 0;
}
