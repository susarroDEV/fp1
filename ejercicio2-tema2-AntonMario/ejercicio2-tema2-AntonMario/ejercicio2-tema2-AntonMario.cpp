// ejercicio2-tema2-AntonMario.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    const double PI = 3.141592;

    double radio = 14.5;
    double altura = 26.79;

    double volumen = PI * radio * radio * altura / 3;

    cout << "Volumen de cono: " << volumen << endl;

    system("pause");

    return 0;
}

